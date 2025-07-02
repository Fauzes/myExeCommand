#ifndef COMANDHENDLEREX_H
#define COMANDHENDLEREX_H

#include "icomand.h"
#include <exception>
#include <queue>
#include "logCntr.h"

class ComandHendlerEx : public IComand
{
public:
    ComandHendlerEx();
    ComandHendlerEx(std::queue<IComand*>* cmd_list, IComand* cmd, const std::exception& ex, LogCntr* loger);

    void execute() override;
private:

    std::exception ex;
    IComand* cmd;
    std::queue<IComand*>* cmd_list;
    LogCntr* loger;
};

#endif // COMANDHENDLEREX_H
