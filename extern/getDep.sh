echo "Cloning opencv to extern..."
# build core modules per official tutorial
# git submodule add https://github.com/opencv/opencv.git
# Download and unpack sources
wget -O opencv.zip https://github.com/opencv/opencv/archive/4.x.zip
unzip opencv.zip
# Create build directory
mkdir -p build && cd build
# Configure
cmake  ../opencv-4.x
# Build
cmake --build .