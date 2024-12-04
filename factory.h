#include <iostream>

class Log{
    public:
        virtual ~Log() {}
        virtual void print(std::string message) const = 0;
};
//log_factory creates interface for logs
//used by singleton logger

class log_factory{
    public:
        virtual ~log_factory() {}
        virtual Log* fact_method() const = 0;
        // void create_log(log_type type, std::string message) const {

        // }

};

class error_log_factory : public log_factory{
    public:
        Log* fact_method() const ;
};
class info_log_factory : public log_factory{
    public:
        Log* fact_method() const ;
};
class warning_log_factory : public log_factory{
    public:
        Log* fact_method() const ;
};
typedef enum{
    error=1u,
    info=2u,
    warning=3u
}log_type;