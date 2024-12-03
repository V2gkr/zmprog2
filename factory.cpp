#include <iostream>



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

class log_factory{
    public:
        virtual ~log_factory() {}
        virtual Log* fact_method() const = 0;
        void create_log(log_type type, std::string message) const {

        }

};

class error_log_factory : public log_factory{
    public:
        Log* fact_method() const override {
            return new error_log();
        }
};
class info_log_factory : public log_factory{
    public:
        Log* fact_method() const override {
            return new info_log();
        }
};
class warning_log_factory : public log_factory{
    public:
        Log* fact_method() const override {
            return new warning_log();
        }
};
//it must be something like log_factory.create_log(error, "error message"), error is an enum
//