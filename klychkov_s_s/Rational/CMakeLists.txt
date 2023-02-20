set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set_property(GLOBAL PROPERTY PREDEFINED_TARGETS_FOLDER "cmake")
include_directories(.)
add_subdirectory(rational)
add_executable(rational.doc rational.doc.cpp)

set_property(TARGET rational.doc PROPERTY CXX_STANDARD 20)
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT rational.doctest)
target_link_libraries(rational.doc rational)
