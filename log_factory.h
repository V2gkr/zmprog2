#ifndef FACTORY_H
#define FACTORY_H

#include <iostream>
typedef enum{
    error=1u,
    info=2u,
    warning=3u
}log_type;

class Log{
  public:
    std::string msg;
    log_type type;
};

class Log_Factory{
  public:
  ~Log_Factory(){};
  Log* Create_Log(std::string message,log_type type);
};



#endif