#ifndef FACTORY_H
#define FACTORY_H

#include <iostream>

/** @brief: enum for types of messages*/
typedef enum{
    error=1u,
    info=2u,
    warning=3u
}log_type;

/** @brief: log class
 *  @param std::string msg - message to be stored
 *  @param log_type type - type of message
 */
class Log{
  public:
    Log(log_type type):type(type){}
    std::string msg;
    const log_type type;
};

/** @brief: log factory class
 *  @param Log* Create_Log - method to create a log based on a type
 *  used in logger class in log() method
 */
class Log_Factory{
  public:
  ~Log_Factory(){};
  Log* Create_Log(std::string message,log_type type);
};



#endif