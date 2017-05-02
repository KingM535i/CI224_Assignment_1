# CI224_Assignment_1

CI224 Games Dev Assignment 1 coursework

Coded and tested with Eclipse C++ version running on Fedora 24

Info below copied from original glex-master readme
############################################



Prerequisites

    GNU Autotools
    OpenGL 3.0
    C++11 compiler (tested with GCC 4.8.3+)
    Boost
    GLEW
    SDL2
    GLM

On Fedora 22 or later you can install these using a single command (as root):

    $ yum install boost-* glew-devel SDL2_* glm-devel

Building

After cloning the source code or extracting a distributed archive, change to the directory where the source code is:

$ autoreconf -i
$ ./configure
$ make

Alternatively, if you'd like to build the project in debug mode use:

    $ make CXXFLAGS=-DDEBUG

Running

The build process should create a binary that can be executed as follows:

    $ ./src/shaderexample

See

    $ ./src/shaderexample --help

for usage instructions.
