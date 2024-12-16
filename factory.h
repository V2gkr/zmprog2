#ifndef FACTORY_H
#define FACTORY_H

#include <iostream>



// class error_log_factory : public log_factory{
//     public:
//         void fact_method(std::string message) const override;
// };
// class info_log_factory : public log_factory{
//     public:
//         void fact_method(std::string message) const override;
// };
// class warning_log_factory : public log_factory{
//     public:
//         void fact_method(std::string message) const override;
// };
typedef enum{
    error=1u,
    info=2u,
    warning=3u
}log_type;

#endif