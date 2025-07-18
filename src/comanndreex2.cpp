#include "comanndreex2.h"
#include "Types_cmd.h"

ComanndReEx2::ComanndReEx2()
{
    setType(type_cmd_re_exp2);
}

ComanndReEx2::ComanndReEx2(IComand *cmd)
{
    setType(type_cmd_re_exp2);
    this->cmd = cmd;
}

// ComanndReEx2::ComanndReEx2(ComandRepEx2 *cmd)
// {
//     setType(type_cmd_re_exp);
//     this->cmd = cmd->cmd;
// }

void ComanndReEx2::execute()
{
    cmd->execute();
}
