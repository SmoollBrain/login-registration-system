# login-registration-system
Simple login and registration system made in C++ using [jsoncpp](https://github.com/open-source-parsers/jsoncpp). WARNING! THIS IS NOT SUPPOSED TO BE USED IN A REAL PROJECT. IT WAS SOMETHING I MADE FOR FUN TO LEARN C++. PLEASE DO NOT USE THIS! If you'd like to check it out, proceed further.

## Dependencies
- jsoncpp (license in 3rd-party-licenses, no need to install, for Windows you will need to recompile jsoncpp to get a .lib file because that's what Windows uses for static libraries)
- cmake
- g++ (for Linux, Windows has it's own compiler)
- make (for Linux)

## How to install (build)
First install all needed dependencies (get the source code as well). Next use `cmake` to build the Makefiles (for Linux, for Windows cmake would create Visual Studio Solution files for the Visual Studio version you have).

While in the directory:
```
$ mkdir build && cd build
$ cmake --configure ../
$ cmake ../
$ make (for Linux)
```

If you use Windows you need to open the project in Visual Studio and build it.