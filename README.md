# Chess C++ Project

This is a barebone Chess project in C++.

## Structure

The project follows a structure similar to the Battleship project:
- `backend/`: Contains the source code and build system.
  - `app/`: Contains the main application entry point.
  - `gameplay/`: Contains game logic components (Board, Piece).
  - `CMakeLists.txt`: CMake configuration file.

## Building and Running

1. Navigate to the `backend` directory:
   ```bash
   cd backend
   ```

2. Create a build directory and run CMake:
   ```bash
   mkdir build
   cd build
   cmake ..
   make
   ```

3. Run the executable:
   ```bash
   ./bin/chess
   ```
