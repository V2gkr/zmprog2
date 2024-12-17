#ifndef SINGLETON_H
#define SINGLETON_H

#include <vector>
#include "log_factory.h"

class Logger{
    private:
        //private constructor
        Logger() {}
        //delete copy constructor
        Logger(const Logger&)=delete;
        //delete assignment operator 
        Logger& operator=(const Logger&)=delete;
    public:
        //vector to store logs
        //std::vector<std::string> logs;

        std::vector<Log*> logs_array;
        //static method to get instance of logger
        static Logger& getInstance();
        //log method 
        void log(const std::string& message,log_type type);

        void show_logs();
};

#endif
