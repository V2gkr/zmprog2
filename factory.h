#include <iostream>

class log{
    public:
        virtual void print() = 0;
};

class error_log: public log{
    public:
        void print(){
            std::cout<<"Error log"<<std::endl;
        }
};