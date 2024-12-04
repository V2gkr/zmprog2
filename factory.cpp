#include <iostream>
#include "factory.h"


class Log{
    public:
        virtual ~Log() {}
        virtual void print(std::string message) const = 0;
};

class error_log : public Log{
    public:
        void print(std::string message) const override {
            std::cout<<"Error log : " << message << std::endl;
        }
};

class info_log : public Log{
    public:
        void print(std::string message) const override {
            std::cout<<"Info log : " << message << std::endl;
        }
};

class warning_log : public Log{
    public:
        void print(std::string message) const override {
            std::cout<<"Warning log : " << message << std::endl;
        }
};

Log* error_log_factory::fact_method() const{
    return new error_log();
}

Log* info_log_factory::fact_method() const{
    return new info_log();
}

Log* warning_log_factory::fact_method() const{
    return new warning_log();
}

//it must be something like log_factory.create_log(error, "error message"), error is an enum
//