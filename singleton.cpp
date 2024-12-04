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
        case error:
            log_factory* factory = new error_log_factory();
            Log* log=factory->fact_method();
            log->print(message);
            delete log;
            
            
            //Log* log=this->fact_method();
            
            
            break;
        case info:

            break;
        case warning:

            break;
        default:
            std::cout<<"Invalid log type"<<std::endl;
    }    
    std::cout << message << std::endl;
}

