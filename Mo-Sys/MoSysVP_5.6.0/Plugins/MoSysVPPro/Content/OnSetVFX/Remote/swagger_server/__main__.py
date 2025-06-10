#!/usr/bin/env python3

import connexion

from swagger_server import encoder
from flask import render_template

app = connexion.App(__name__, specification_dir='./swagger/')
app.app.json_encoder = encoder.JSONEncoder
app.add_api('swagger.yaml', arguments={'title': 'Mo-Sys VP Pro Remote'})

# Create a URL route in our application for "/"
@app.route('/')
def home():
    return render_template('home.html')

def main():
    app.run(port=8080)

if __name__ == '__main__':
    main()
