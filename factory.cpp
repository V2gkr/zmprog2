#include <iostream>
#include "factory.h"
#include "singleton.h"



class Error_Log : public Log{
  public:
    Error_Log(std::string message){
      msg=message;
      type=error;
    }
};

class Info_Log : public Log{
  public:
    Info_Log(std::string message){
      msg=message;
      type=info;
    }
};

class Warning_Log : public Log{
  public:
    Warning_Log(std::string message){
      msg=message;
      type=warning;
    }
};


Log* Log_Factory::Create_Log(std::string message,log_type type){
  Log* log;
  switch(type){
    case error:{
      log= new Error_Log(message);
      break;
    }
    case info:{
      log= new Info_Log(message);
      break;
    }
    case warning:{
      log= new Warning_Log(message);
      break;
    }
    default:{
      log= nullptr;
      break;
    }
  }
  return log;
}
