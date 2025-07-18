#include "comandhendlerex.h"
#include "Types_cmd.h"
#include "comandwritelog.h"
#include "comandrepex.h"

ComandHendlerEx::ComandHendlerEx()
{
    setType(type_cmd_hendler_ex);
}

ComandHendlerEx::ComandHendlerEx(std::queue<IComand *> *cmd_list, IComand *cmd, const std::exception &ex, LogCntr *loger)
{
    this->ex = ex;
    this->cmd = cmd;
    this->cmd_list = cmd_list;
    this->loger = loger;

    setType(type_cmd_hendler_ex);
}

void ComandHendlerEx::execute()
{
    if (cmd->getType() == type_cmd_ex)
    {
        ComandRepEx* cmdRe = new ComandRepEx(cmd);

        cmd_list->push(cmdRe);
    }

    if (cmd->getType() == type_cmd_re_exp)
    {
        ComandWriteLog* cmdLog = new ComandWriteLog(ex.what(), loger);

        cmd_list->push(cmdLog);
    }
}
