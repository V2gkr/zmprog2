#include <iostream>
#include <vector>
#include "singleton.h"
//logger class with singleton pattern

void Logger::log(const std::string& message) {
    std::cout << message << std::endl;
}

Logger& Logger::getInstance(){
    static Logger instance;
    return instance;
}