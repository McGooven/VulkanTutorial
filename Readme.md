# First steps on vulkan
this app is meant to be a registry of my progres on vulkan while watching the youtube [Brendan Galea tutorial series on vulkan](https://www.youtube.com/playlist?list=PL8327DO66nu9qYVKLDmdLW_84-yE4auCR).


## Dependencies
I test it only on windows and visual studio code with the following libraries and dependencies:

- Mingw64
- cmake
- GLFW
- GLM
- VULKAN SDK

## Build process
to make it works:

- Replace the `.envExample.cmake` file name to `.env.cmake`
- Replace the values of the `.env.cmake` file variables to point the paths of your downloaded libraries dependencies
- execute `mingwBuild.bat` batch file (from cmd terminal or double click, wathever you prefer is fine)
- ¡Todo listo! this will make a "build" folder with an executable (and a bunch of other nonesense files don't worry about them...) ready to go!.

## Suggestions
If you are using vscode i recommend to you to make a c_cpp_properties.json file where you can add includes directories and the compiler path (mingw64 in my case).

I recommend you to take a look on the CMakeLists.txt file, i just copy and paste it from the tutorial, because cmake and make files is an "still learning topic" to me, but the code is understandable and you will probably need to make some changes on it depending on your system so give it a try 😄! 