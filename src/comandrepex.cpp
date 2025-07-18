#include "comandrepex.h"
#include "Types_cmd.h"

ComandRepEx::ComandRepEx() : IComand()
{
    setType(type_cmd_re_exp);
}

ComandRepEx::ComandRepEx(IComand *cmd) : IComand()
{
    setType(type_cmd_re_exp);
    this->cmd = cmd;
}

ComandRepEx::ComandRepEx(ComandRepEx *cmd)
{
    setType(type_cmd_re_exp);
    this->cmd = cmd->cmd;
}

void ComandRepEx::execute()
{
    cmd->execute();
}
