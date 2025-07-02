project(MyExCommand)

set( MyExCommand_source comandex.cpp
                        comandhendlerex.cpp
                        comandrepex.cpp
                        comandwritelog.cpp
                        icomand.cpp
                        commandhendlerex2.cpp
                        comanndreex2.cpp
                        logCntr.cpp)

add_library( MyExCommand STATIC ${MyExCommand_source} 
    ../inc/comandex.h ../inc/comandhendlerex.h ../inc/comandrepex.h ../inc/icomand.h ../inc/comandwritelog.h ../inc/Types_cmd.h 
    ../inc/commandhendlerex2.h ../inc/comanndreex2.h  ../inc/logCntr.h)

