#ifndef SINGLETON_H
#define SINGLETON_H

#include <vector>
#include "log_factory.h"

/** @brief: Logger class , interface to create and show logs from log_factory library , based on singleton pattern
 *  @param std::vector<Log*> logs_array - vector of logs
 *  
 */
class Logger{
    private:
        //private constructor
        Logger() {}
        //delete copy constructor
        Logger(const Logger&)=delete;
        //delete assignment operator 
        Logger& operator=(const Logger&)=delete;
    public:
        std::vector<Log*> logs_array;
        //static method to get instance of logger
        static Logger& getInstance();
        //log method 
        void log(const std::string& message,log_type type);
        //show logs method
        void show_logs();
};

#endif
