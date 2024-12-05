#include <iostream>
#include "singleton.h"

int main() {


    Logger& log1=Logger::getInstance();
    Logger& log2=Logger::getInstance();
    //this wont work because copy constructor is deleted
    //Logger log3=log1;
    //this wont work because assignment operator is deleted
    //log3=log2;
    if(&log1==&log2){
        std::cout<<"Both log1 and log2 are same"<<std::endl;
    }
    log1.log("Error message!!!",error);
    log2.log("Info message!!!",info);
    log1.log("Warning message!!!",warning);
    log1.log("Error message2!!!",error);
    log2.log("Info message2!!!",info);
    log1.log("Warning message2!!!",warning);
    log1.show_logs();
    return 0;
}