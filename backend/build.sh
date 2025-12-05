#!/bin/bash

# Exit on error
set -e

# Create build directory if it doesn't exist
if [ ! -d "build" ]; then
    mkdir build
fi

# Navigate to build directory
cd build

# Run CMake and Make
cmake ..
make

# Run the application if "run" argument is provided
if [ "$1" == "run" ]; then
    ./bin/chess
fi
