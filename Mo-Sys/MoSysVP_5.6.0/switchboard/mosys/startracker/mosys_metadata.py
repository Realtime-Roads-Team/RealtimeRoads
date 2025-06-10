from ..mosys_exceptions import MoSysIllegalOperation

raise MoSysIllegalOperation("Cannot import StarTracker metadata as it creates a circular dependency and disrupts all "
                            "imports, must be used directly in the plugin instead. Leaving this here for reference.")
