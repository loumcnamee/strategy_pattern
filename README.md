# Strategy Pattern in C++
This repo is a working example of the strategy pattern implemented in C++

Refer to https://en.wikipedia.org/wiki/Strategy_pattern for an explanation of this design pattern.

## Organization

### Folder structure
```
├ .vscode           # contains files to support integration with VS Code
├ aLib              # contains C++ classes built into the library aLib
├ aTest             # contains unit tests of classes in aLib
├ theApp            # main entry point using the classes in aLib
├ CMakeLists.txt    # main Cmake project file that references CMake projects in aLib, aTest, and theApp folders
```
## Important Files
* CMakeLists.txt    # this is the main CMake project file. Calling it with CMake will configure, build the entire project

## Toolchain

By default this project makes use of VSCode integration of with Docker devcontainers.
The devcontainer used is mcr.microsoft.com/devcontainers/cpp:1-ubuntu-24.04

Otherwise, you will need the following tools to build this project
* an operating system to run CMake, the builder, compiler and linker
* options are
    * CMake
    * a build tool like Make, Ninja, NMake, etc
    * a C++ compiler and linker
    * (optional) an integrated development environment e.g. VS Code, CLion, CodeBlocks, MS Visual Studio


## Helpful References
 https://cmake.org/cmake/help/latest/
 https://code.visualstudio.com/docs/cpp/cmake-quickstart
 https://google.github.io/googletest/
 
