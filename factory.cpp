#include <iostream>
#include "factory.h"
#include "singleton.h"

class Log{
    public:
        virtual ~Log() {}
        virtual void print(std::string message) const = 0;
};

class error_log : public Log{
    public:
        const std::string log_msg="Error log : ";
        void print(std::string message) const override {
            Logger& l1=Logger::getInstance();
            std::string msg=log_msg+message;
            l1.logs.push_back(msg);
            //std::cout<<msg<< std::endl;
        }
};

class info_log : public Log{
    public:
        const std::string log_msg="Info log : ";
        void print(std::string message) const override {
            Logger& l1=Logger::getInstance();
            std::string msg=log_msg+message;
            l1.logs.push_back(msg);
            //std::cout<<"Info log : " << message << std::endl;
        }
};

class warning_log : public Log{
    public:
        const std::string log_msg="Warning log : ";
        void print(std::string message) const override {
            Logger& l1=Logger::getInstance();
            std::string msg=log_msg+message;
            l1.logs.push_back(msg);
            //std::cout<<"Warning log : " << message << std::endl;
        }
};

void error_log_factory::fact_method(std::string message) const{
    Log* Log1= new error_log();
    Log1->print(message);
}

void info_log_factory::fact_method(std::string message) const{
    Log* Log1=new info_log();
    Log1->print(message);
}

void warning_log_factory::fact_method(std::string message) const{
    Log* Log1=new warning_log();
    Log1->print(message);
}
