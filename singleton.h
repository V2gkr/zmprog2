#include <vector>
#include "factory.h"

class Logger{
    private:
        //private constructor
        Logger() {}
        Logger(const Logger&); 
        Logger& operator=(const Logger&);
    public:
        //static method to get instance of logger
        static Logger& getInstance();
        void log(const std::string& message,log_type type);
        void read_log();
};
