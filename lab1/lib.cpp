#include "lib.h"
#include <iostream>

// 定义版本号后缀（实际项目中可通过CI/CD自动注入仓库发布版本号）
// 此处N对应文档中"项目的发布版本号"，需根据仓库实际发布版本调整
const int RELEASE_VERSION = 1; 

int getVersion() {
    return RELEASE_VERSION;
}

void printVersion() {
    std::cout << "Hello, World! Version 1.0." << getVersion() << std::endl;
}