# Make a basic test

add_executable(testHello testHello.cpp)
add_test(NAME test-hello COMMAND testHello)

add_executable(testCatch testCatch.cpp)
target_include_directories(testCatch PRIVATE ${CMAKE_CURRENT_LIST_DIR})
add_test(NAME test-catch COMMAND testCatch)

add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE ${CMAKE_CURRENT_LIST_DIR})


add_executable(testTransformChar testTransforChar.cpp)
target_link_libraries(testTransformChar MPAGSCipher Catch)
add_test(NAME test-transformchar COMMAND testTransformChar)

add_executable(testCaesarCipher testCaesarCipher.cpp)
target_link_libraries(testCaesarCipher MPAGSCipher Catch)
add_test(NAME test-caesarcipher COMMAND testCaesarCipher)

add_executable(testProcessCommandLine testProcessCommandLine.cpp)
target_link_libraries(testProcessCommandLine MPAGSCipher Catch)
add_test(NAME test-processcommandline COMMAND testProcessCommandLine)
