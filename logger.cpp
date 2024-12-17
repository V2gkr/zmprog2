#include <iostream>
#include <vector>
#include "logger.h"
#include "log_factory.h"
#include <memory>

//logger class with singleton pattern

Logger& Logger::getInstance(){
    static Logger instance;
    return instance;
}

void Logger::log(const std::string& message,log_type type){
  static Log_Factory factory;
  logs_array.push_back(factory.Create_Log(message,type));
  //std::unique_ptr<log_factory> factory;
}

void Logger::show_logs(){
  for(auto i:logs_array){
    switch(i->type){
      case error:{
        std::cout<<"Error: ";
        break;
      }
      case info:{
        std::cout<<"Info: ";
        break;
      }
      case warning:{
        std::cout<<"Warning: ";
        break;
      }
      default:{
        std::cout<<"Unknown: ";
        break;
      }
    }
    std::cout<<i->msg<<std::endl;
  }
    // for(uint8_t i=0;i<logs.size();i++){
    //     std::cout<<logs.at(i)<<std::endl;
    // }
}
