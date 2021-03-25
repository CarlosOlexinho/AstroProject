add_executable( AstroProject
./main.cpp

 )


target_include_directories( AstroProject PRIVATE ${CMAKE_CURRENT_SOURCE_DIR} )
target_link_libraries( AstroProject sfml-graphics sfml-audio pthread )