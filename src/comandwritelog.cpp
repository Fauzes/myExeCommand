#include "comandwritelog.h"
#include "Types_cmd.h"

ComandWriteLog::ComandWriteLog(): IComand()
{
    setType(type_cmd_write_log);
}

ComandWriteLog::ComandWriteLog(std::string str, LogCntr *loger)
{
    setType(type_cmd_write_log);
    this->str = str;
    this->loger = loger;
}

void ComandWriteLog::execute()
{
    loger->write(str);
}
