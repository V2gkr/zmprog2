#include <iostream>
#include "singleton.h"

int main() {


    Logger& log1=Logger::getInstance();
    Logger& log2=Logger::getInstance();
    if(&log1==&log2){
        std::cout<<"Both log1 and log2 are same"<<std::endl;
    }
    return 0;
}