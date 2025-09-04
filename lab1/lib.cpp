#include "lib.h"
#include <iostream>

// 使用从CMake传递的宏
int getVersion() {
    return RELEASE_N;
}

void printVersion() {
    std::cout << "Hello, World! Version 1.0." << getVersion() << std::endl;
}
