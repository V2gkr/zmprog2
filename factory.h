#include <iostream>

class Log{
    public:
        virtual ~log() {}
        virtual void print(std::string message) const = 0;
};
//log_factory creates interface for logs
//used by singleton logger
class log_factory;

typedef enum{
    error=1u,
    info=2u,
    warning=3u
}log_type;