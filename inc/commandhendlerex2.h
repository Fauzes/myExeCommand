#ifndef COMMANDHENDLEREX2_H
#define COMMANDHENDLEREX2_H

#include "icomand.h"
#include "queue"
#include "exception"
#include "logCntr.h"

class CommandHendlerEx2 : public IComand
{
public:
    CommandHendlerEx2();
    CommandHendlerEx2(std::queue<IComand *> *cmd_list, IComand *cmd, const std::exception &ex, LogCntr* loger);

    void execute() override;

private:
    std::exception ex;
    IComand* cmd;
    std::queue<IComand*>* cmd_list;
    LogCntr* loger;
};

#endif // COMMANDHENDLEREX2_H
