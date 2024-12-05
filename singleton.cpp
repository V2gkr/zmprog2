#include <iostream>
#include <vector>
#include "singleton.h"

//logger class with singleton pattern

Logger& Logger::getInstance(){
    static Logger instance;
    return instance;
}

void Logger::log(const std::string& message,log_type type){
    //it must be in singleton method log , not here
    switch(type){
        case error:{
            log_factory* factory = new error_log_factory();
            factory->fact_method(message);
            delete factory;
            break;
        }
        case info:{
            log_factory* factory = new info_log_factory();
            factory->fact_method(message);
            delete factory;
            break;
        }
        case warning:{
            log_factory* factory = new warning_log_factory();
            factory->fact_method(message);
            delete factory;
            break;
        }
        default:{
            std::cout<<"Invalid log type"<<std::endl;
            break;
        }
    }    
    //std::cout << message << std::endl;
}

void Logger::show_logs(){
    for(uint8_t i=0;i<logs.size();i++){
        std::cout<<logs.at(i)<<std::endl;
    }
}
