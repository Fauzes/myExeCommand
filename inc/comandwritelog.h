#ifndef COMANDWRITELOG_H
#define COMANDWRITELOG_H

#include <iostream>
#include "icomand.h"
#include "logCntr.h"

class ComandWriteLog : public IComand
{
public:
    ComandWriteLog();
    ComandWriteLog(std::string str, LogCntr* loger);

    void execute() override;

private:
    std::string str;
    LogCntr* loger;
};

#endif // COMANDWRITELOG_H
