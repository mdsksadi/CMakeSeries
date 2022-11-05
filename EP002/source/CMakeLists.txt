cmake_minimum_required(VERSION 3.12) #This is the minimum required version of CMake

project(HelloApp            #This is the mane of the project
    VERSION 0.0.1       #This is the version of the poject. For now it is not so important
    DESCRIPTION "The leading hello World App"   #This is the descripion of the project. For now it is not so important
    LANGUAGES C CXX     #These are the languages what we will use in this project. if we use only one language then we can specify "LANGUAGE" isntead of "LANGUAGES". CXX means C++
)

add_executable(HelloAppBinary main.cpp)
