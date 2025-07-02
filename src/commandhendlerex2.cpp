#include "commandhendlerex2.h"
#include "Types_cmd.h"
#include "comandwritelog.h"
#include "comandrepex.h"
#include "comanndreex2.h"

CommandHendlerEx2::CommandHendlerEx2()
{
    setType(type_cmd_hendler_ex2);
}

CommandHendlerEx2::CommandHendlerEx2(std::queue<IComand *> *cmd_list, IComand *cmd, const std::exception &ex, LogCntr* loger)
{
    this->ex = ex;
    this->cmd = cmd;
    this->cmd_list = cmd_list;
    this->loger = loger;

    setType(type_cmd_hendler_ex2);
}

void CommandHendlerEx2::execute()
{
    if (cmd->getType() == type_cmd_ex)
    {
        ComandRepEx* cmdRe = new ComandRepEx(cmd);

        cmd_list->push(cmdRe);
    }

    if (cmd->getType() == type_cmd_re_exp)
    {
        ComanndReEx2* cmdRe = new ComanndReEx2(cmd); 

        cmd_list->push(cmdRe);
    }

    if (cmd->getType() == type_cmd_re_exp2)
    {
        ComandWriteLog* cmdLog = new ComandWriteLog(ex.what(), loger);

        cmd_list->push(cmdLog);
    }

}
