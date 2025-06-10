const initialState ={
    isPlaying: false,
    isRecording: false,
    playBtnClicked: false
}

const urlLocation = `${window.location.href.slice(0, -6 )}:30010`;

/* function that turns status numbers into functions */
function getColour(objStatus){
    const keys = Object.keys(objStatus);
    const colouredObj = {};
    keys.map(key => {
        if(!objStatus[key]){
            colouredObj[key] = "yellow";
        }else if(objStatus[key] === 1){
            colouredObj[key] = "green";
        }else if(objStatus[key] === -1){
            colouredObj[key] = "red";
        }else{
            colouredObj[key] = "grey";
        }
    })
    return colouredObj;
}

/* load engine */

/* load engines function */
function loadEngines(){
    const obj ={
        "objectPath":"/Script/MoSysHeadless.Default__MoSysHeadlessFunctionLibrary",
        "functionName": "GetStatuses"
    };
    console.log(JSON.stringify(obj))
    fetch(`${urlLocation}/remote/object/call`, {
        method: 'PUT',
        headers: {
            'Content-Type': 'application/json', // Indicates the content 
           },
        body: JSON.stringify(obj)
        })
    .then(response => response.json())
    .then(json =>  {
        $("#unrealStatus").text("ON AIR");
        $("#unrealStatus").css("color", "#00ff12");

        const controllerIp = json.ReturnValue.Master.Ip;
        const statusesColoured = getColour(json.ReturnValue.Master.Statuses);
        $("#rowController").html(`
                <th scope="row">Controller</th>
                <td class="status-icon">${controllerIp}</td>
                <td class="status-icon"><img src="/static/images/iconEngine_${statusesColoured.engine}.svg"></td>
                <td class="status-icon"><img src="/static/images/iconStatus_${statusesColoured.tracking}.svg"></td>
                <td class="status-icon"><img src="/static/images/iconStatus_${statusesColoured.lens}.svg"></td>
                <td class="status-icon"><img src="/static/images/iconStatus_${statusesColoured.video}.svg"></td>
                <td class="status-icon"><img src="/static/images/iconStatus_${statusesColoured.sync}.svg"></td>
        `)

        const followerEngines = json.ReturnValue.Followers;
        if (followerEngines.length > 0){
            $("#rowFollowers").css("visibility", "visible");
            $("#rowFollowers").html( 
                followerEngines.map( follower => {
                const followerColoured = getColour(follower.Statuses);
                return `<tr>
                <th scope="row">Follower</th>
                <td class="status-icon">${follower.Ip}</td>
                <td class="status-icon"><img src="/static/images/iconEngine_${followerColoured.engine}.svg"></td>
                <td class="status-icon"><img src="/static/images/iconStatus_${followerColoured.tracking}.svg"></td>
                <td class="status-icon"><img src="/static/images/iconStatus_${followerColoured.lens}.svg"></td>
                <td class="status-icon"><img src="/static/images/iconStatus_${followerColoured.video}.svg"></td>
                <td class="status-icon"><img src="/static/images/iconStatus_${followerColoured.sync}.svg"></td>
                </tr>`
                })
            )
        }
        
    })
    /* if UE4 is not connected */
    .catch(function() {
        $("#rowController").html(`<th scope="row">Controller</th>
        <td class="status-icon">000.000.0.000</td>
        <td class="status-icon"><img src="/static/images/iconStatus_grey.svg"></td>
        <td class="status-icon"><img src="/static/images/iconStatus_grey.svg"></td>
        <td class="status-icon"><img src="/static/images/iconStatus_grey.svg"></td>
        <td class="status-icon"><img src="/static/images/iconStatus_grey.svg"></td>
        <td class="status-icon"><img src="/static/images/iconStatus_grey.svg"></td>`)

        $("#unrealStatus").text("UE4 Not Connected");
        $("#unrealStatus").css("color", "#c23659");
        $("#timecode").css("visibility", "hidden");
    }
    );
}

/* test if followers load correctly */
function testFollower(){
    $("#rowFollowers").css("visibility", "visible");
            $("#rowFollowers").html( `<tr>
                <th scope="row">Followers</th>
                <td class="status-icon">111.11.111.11</td>
                <td class="status-icon"><img src="/static/images/iconEngine_grey.svg"></td>
                <td class="status-icon"><img src="/static/images/iconStatus_grey.svg"></td>
                <td class="status-icon"><img src="/static/images/iconStatus_grey.svg"></td>
                <td class="status-icon"><img src="/static/images/iconStatus_grey.svg"></td>
                <td class="status-icon"><img src="/static/images/iconStatus_grey.svg"></td>
                </tr>
                <tr>
                <th scope="row"></th>
                <td class="status-icon">111.11.111.11</td>
                <td class="status-icon"><img src="/static/images/iconEngine_green.svg"></td>
                <td class="status-icon"><img src="/static/images/iconStatus_red.svg"></td>
                <td class="status-icon"><img src="/static/images/iconStatus_red.svg"></td>
                <td class="status-icon"><img src="/static/images/iconStatus_grey.svg"></td>
                <td class="status-icon"><img src="/static/images/iconStatus_grey.svg"></td>
                </tr>`
            )
}


/* play */

/* send play/pause put request */
function playPauseExecution(button){
    const obj ={
        "objectPath":"/Script/MoSysHeadless.Default__MoSysHeadlessFunctionLibrary",
        "functionName": "SetPlay",
        "parameters": {
            "Play": button
        }
    };
    console.log(JSON.stringify(obj))
    fetch(`${urlLocation}/remote/object/call`, {
        method: 'PUT',
        headers: {
            'Content-Type': 'application/json', // Indicates the content 
           },
        body: JSON.stringify(obj)
        })
    .then(response => response.json())
    .then(json =>  console.log(json)) 
}

/* play or pause */
function playInEditor(){
    isEnginePlayingRequest()
        .then(result =>{
            let isEnginePlaying = result.ReturnValue;
            console.log(isEnginePlaying);
            initialState.playBtnClicked = true;
            if(!isEnginePlaying){
                playPauseExecution(true);
                $("#iconPlay").attr("src","/static/images/icon_stop.svg");
            }else{
                playPauseExecution(false);
                $("#iconPlay").attr("src","/static/images/icon_play.svg");

                // $("#screenImg").attr("src", `/static/images/sub_levels/screen_img_ue4.jpeg`);
                // $("#screenLabel").text($("#persistentLevel").text().trim());
            }
        })  
        .catch(err => console.log(err))
}

/* update play/pause button every sec*/

function playBtnUpdate(){
        isEnginePlayingRequest()
        .then(result =>{
            let isEnginePlaying = result.ReturnValue;
            if(!isEnginePlaying){
                $("#iconPlay").attr("src","/static/images/icon_play.svg");
            }else{
                $("#iconPlay").attr("src","/static/images/icon_stop.svg");
            }
        })  
        .catch(err => console.log(err))
    
}

/* function that checks if its playing */

function isEnginePlayingRequest(){
    const obj ={
        "objectPath":"/Script/MoSysHeadless.Default__MoSysHeadlessFunctionLibrary",
        "functionName": "IsInPlayInEditor"
    };
    return fetch(`${urlLocation}/remote/object/call`, {
        method: 'PUT',
        headers: {
            'Content-Type': 'application/json', // Indicates the content 
           },
        body: JSON.stringify(obj)
        })
        .then(response => response.json())
        .then(json =>  json)
}






/* record */

/* open recorder, needs to be done before recording */
function openTakeRecorder(button){
    const obj ={
        "objectPath":"/Script/MoSysHeadless.Default__MoSysHeadlessFunctionLibrary",
        "functionName": "OpenTakeRecorder"
    };
    console.log(JSON.stringify(obj))
    fetch(`${urlLocation}/remote/object/call`, {
        method: 'PUT',
        headers: {
            'Content-Type': 'application/json', // Indicates the content 
           },
        body: JSON.stringify(obj)
        })
    .then(response => response.json())
    .then(json =>  console.log(json)) 
}

/* reset take recorder, needs to be done before recording */
function resetTakeRecorder(button){
    const obj ={
        "objectPath":"/Script/MoSysHeadless.Default__MoSysHeadlessFunctionLibrary",
        "functionName": "ResetTakeRecorder"
    };
    console.log(JSON.stringify(obj))
    fetch(`${urlLocation}/remote/object/call`, {
        method: 'PUT',
        headers: {
            'Content-Type': 'application/json', // Indicates the content 
           },
        body: JSON.stringify(obj)
        })
    .then(response => response.json())
    .then(json =>  console.log(json)) 
}

/* send record/stop put request */
function recordStopExecution(button){
    const obj ={
        "objectPath":"/Script/MoSysHeadless.Default__MoSysHeadlessFunctionLibrary",
        "functionName": "SetRecord",
        "parameters": {
            "Record": button
        }
    };
    console.log(JSON.stringify(obj))
    fetch(`${urlLocation}/remote/object/call`, {
        method: 'PUT',
        headers: {
            'Content-Type': 'application/json', // Indicates the content 
           },
        body: JSON.stringify(obj)
        })
    .then(response => response.json())
    .then(json =>  console.log(json)) 
}

/* record or stop */
function recordInEditor(){

        isEngineRecordingRequest()
            .then(result =>{
                let isEngineRecording = result.ReturnValue;
                console.log(isEngineRecording);
                if(!isEngineRecording){
                    openTakeRecorder(true);
                    setTimeout(function() {resetTakeRecorder(true)}, 150) ;
                    setTimeout(function() {recordStopExecution(true)}, 300) ;
                    $("#iconRecord").attr("src","/static/images/icon_stop.svg");
                }else{
                    recordStopExecution(false);
                    $("#iconRecord").attr("src","/static/images/icon_record.svg");
                }
            })  
            .catch(err => console.log(err))
    

    // if(!initialState.isRecording){
    //     initialState.isRecording = true;
    //     openTakeRecorder(true);
    //     resetTakeRecorder(true);
    //     recordStopExecution(true);
    //     $("#iconRecord").attr("src","/static/images/icon_stop.svg");
    // }else{
    //     initialState.isRecording = false;
    //     recordStopExecution(false);
    //     $("#iconRecord").attr("src","/static/images/icon_record.svg");
    // }
}

/* update play/pause button every sec*/

function recordBtnUpdate(){
    isEngineRecordingRequest()
    .then(result =>{
        let isEnginePlaying = result.ReturnValue;
        if(!isEnginePlaying){
            $("#iconRecord").attr("src","/static/images/icon_record.svg");
        }else{
            $("#iconRecord").attr("src","/static/images/icon_stop.svg");
        }
    })  
    .catch(err => console.log(err))

}

/* function that checks if its recording */

function isEngineRecordingRequest(){
    const obj ={
        "objectPath":"/Script/MoSysHeadless.Default__MoSysHeadlessFunctionLibrary",
        "functionName": "IsRecording"
    };
    return fetch(`${urlLocation}/remote/object/call`, {
        method: 'PUT',
        headers: {
            'Content-Type': 'application/json', // Indicates the content 
           },
        body: JSON.stringify(obj)
        })
        .then(response => response.json())
        .then(json =>  json)
}






/* levels */

/* load persistent level */
function setPersistentLevel(){
    isEnginePlayingRequest()
    .then(result =>{
        let isEnginePlaying = result.ReturnValue;
        if(!isEnginePlaying){
            const obj ={
                "objectPath":"/Script/MoSysHeadless.Default__MoSysHeadlessFunctionLibrary",
                "functionName": "GetLevels"
            };
            fetch(`${urlLocation}/remote/object/call`, {
                method: 'PUT',
                headers: {
                    'Content-Type': 'application/json', // Indicates the content 
                   },
                body: JSON.stringify(obj)
                })
                .then(response => response.json())
                .then(result =>  {
                    $("#persistentLevel").html(result.ReturnValue.PersistentLevel);
                    $("#persistentLevel").css({"font-size": "15px", "margin-right": "20px"});
                    if(!($("#screenLabel").text())){
                        $("#screenLabel").text(result.ReturnValue.PersistentLevel);
                    }
                })
                .catch(function(){$("#persistentLevel").empty()})
        }
    })  
    .catch(err => console.log(err))
}

/* load sublevels */
function loadLevels(){
    isEnginePlayingRequest()
    .then(result =>{
        let isEnginePlaying = result.ReturnValue;
        if(!isEnginePlaying){
            const obj ={
                "objectPath":"/Script/MoSysHeadless.Default__MoSysHeadlessFunctionLibrary",
                "functionName": "GetLevels"
            };
            fetch(`${urlLocation}/remote/object/call`, {
                method: 'PUT',
                headers: {
                    'Content-Type': 'application/json', // Indicates the content 
                   },
                body: JSON.stringify(obj)
                })
                .then(response => response.json())
                .then(result =>  {
                    const subLevels = result.ReturnValue.SubLevels;
                    $("#levelsList").html( 
                        subLevels.map( (subLevel, index) => {
                        return `<li class="list-group-item">
                        <div class="row justify-content-around">
                            <div class="col-1 level-number align-self-center">${index +1}</div>
                            <div class="col-6 align-self-center">
                                <p class="level-location">${subLevel}</p>
                            </div>
                            <div class="col-3 align-self-center"><img src="/static/images/sub_levels/${index +1}_thumbnail_img.png" class="level-thumbnail"></div>
                        </div>
                      </li>`
                        })
                    )
                })
                .catch(function(){$("#levelsList").empty()})
        }
    })  
    .catch(err => console.log(err))
}

/* on click set current level */
$(document).on('click','.list-group-item',function(){
    const levelClickedName =  $(this).find(".level-location").text();
    const levelClickedIndex =  $(this).find(".level-number").text();
    const obj ={
        "objectPath":"/Script/MoSysHeadless.Default__MoSysHeadlessFunctionLibrary",
        "functionName": "SetStreamLevel",
        "parameters": {
            "Load": true,
            "Level": levelClickedName
         }
    };
    console.log(levelClickedName);
    fetch(`${urlLocation}/remote/object/call`, {
        method: 'PUT',
        headers: {
            'Content-Type': 'application/json', // Indicates the content 
           },
        body: JSON.stringify(obj)
        })
        .then(response => response.json())
        .then(result =>  {
            $("#screenImg").attr("src", `/static/images/sub_levels/${levelClickedIndex}_img.jpg`);
            $("#screenLabel").text(levelClickedName);

            $(".list-group-item").removeClass('active')
            $(this).addClass('active')
        })
})


/* timecode */
function timecodeUpdate(){
    const obj ={
        "objectPath":"/Script/MoSysHeadless.Default__MoSysHeadlessFunctionLibrary",
          "functionName": "GetTimeCode"
    };
    fetch(`${urlLocation}/remote/object/call`, {
        method: 'PUT',
        headers: {
            'Content-Type': 'application/json', // Indicates the content 
           },
        body: JSON.stringify(obj)
        })
        .then(response => response.json())
        .then(result =>  {
            $("#timecode").css("visibility", "visible");
            let fullTimeCode = "";
            const hours = result.ReturnValue.Hours < 10 ? "0" + result.ReturnValue.Hours : result.ReturnValue.Hours;
            const minutes = result.ReturnValue.Minutes < 10 ? "0" + result.ReturnValue.Minutes : result.ReturnValue.Minutes;
            const seconds = result.ReturnValue.Seconds < 10 ? "0" + result.ReturnValue.Seconds : result.ReturnValue.Seconds;
            const frames = result.ReturnValue.Frames < 10 ? "0" + result.ReturnValue.Frames : result.ReturnValue.Frames;

            fullTimeCode = `${hours}:${minutes}:${seconds}:${frames}`;
            $("#timecode").text(fullTimeCode)
            }
        )
}




$( document ).ready(loadLevels);
$( document ).ready(setPersistentLevel);

$("#playBtn").click(playInEditor);
$("#recordBtn").click(recordInEditor);

setInterval(loadEngines, 2000);
setInterval(timecodeUpdate, 2000);

setInterval(setPersistentLevel, 2000);
setInterval(loadLevels, 5000);

setInterval(playBtnUpdate, 3000);
setInterval(recordBtnUpdate, 3000);

/* turn level active when clicked */
$(".list-group-item").click(function(){
    $(".list-group-item").removeClass("active");
    $(this).addClass("active");
})


/* run trigger  when clicked */
$(".btn-trigger").click(function(){
    const triggerClicked =  $(this).text().trim();
    const obj ={
        "objectPath":"/Script/MoSysHeadless.Default__MoSysHeadlessFunctionLibrary",
        "functionName": "TriggerBluePrint",
        "parameters": {
            "Value": Number(triggerClicked)
         }
    }
    
    console.log(triggerClicked);
    fetch(`${urlLocation}/remote/object/call`, {
        method: 'PUT',
        headers: {
            'Content-Type': 'application/json', // Indicates the content 
           },
        body: JSON.stringify(obj)
        })
        .then(response => response.json())
        .then(result =>  {console.log(result)
        })
})



