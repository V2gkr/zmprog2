#include <iostream>
#include "factory.h"
#include "singleton.h"

class Log{
  public:
    virtual ~Log() {}
    virtual void create_log(std::string message) const = 0;
};

class Error_Log : public Log{
  public:
    void create_log(std::string message) const override {
      Logger& l1=Logger::getInstance();
      std::string log_msg="Error log : "+message;
      l1.logs.push_back(log_msg);
    }
};

class Info_Log : public Log{
  public:
    void create_log(std::string message) const override {
      Logger& l1=Logger::getInstance();
      std::string log_msg="Info log : "+message;
      l1.logs.push_back(log_msg);
    }
};

class Warning_Log : public Log{
  public:
    void create_log(std::string message) const override {
      Logger& l1=Logger::getInstance();
      std::string log_msg="Warning log : "+message;
      l1.logs.push_back(log_msg);
    }
};













// class Log{
//     public:
//         virtual ~Log() {}
//         virtual void print(std::string message) const = 0;
// };

// class error_log : public Log{
//     public:
//         const std::string log_msg="Error log : ";
//         void print(std::string message) const override {
//             Logger& l1=Logger::getInstance();
//             std::string msg=log_msg+message;
//             l1.logs.push_back(msg);
//             //std::cout<<msg<< std::endl;
//         }
// };

// class info_log : public Log{
//     public:
//         const std::string log_msg="Info log : ";
//         void print(std::string message) const override {
//             Logger& l1=Logger::getInstance();
//             std::string msg=log_msg+message;
//             l1.logs.push_back(msg);
//             //std::cout<<"Info log : " << message << std::endl;
//         }
// };

// class warning_log : public Log{
//     public:
//         const std::string log_msg="Warning log : ";
//         void print(std::string message) const override {
//             Logger& l1=Logger::getInstance();
//             std::string msg=log_msg+message;
//             l1.logs.push_back(msg);
//             //std::cout<<"Warning log : " << message << std::endl;
//         }
// };


    // switch(type){
    //     case error:{
    //         log_factory* factory = new error_log_factory();
    //         factory->fact_method(message);
    //         delete factory;
    //         break;
    //     }
    //     case info:{
    //         log_factory* factory = new info_log_factory();
    //         factory->fact_method(message);
    //         delete factory;
    //         break;
    //     }
    //     case warning:{
    //         log_factory* factory = new warning_log_factory();
    //         factory->fact_method(message);
    //         delete factory;
    //         break;
    //     }
    //     default:{
    //         std::cout<<"Invalid log type"<<std::endl;
    //         break;
    //     }
    // }   