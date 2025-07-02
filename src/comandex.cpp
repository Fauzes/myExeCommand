#include "comandex.h"
#include <iostream>
#include "Types_cmd.h"
#include "exception"

ComandEx::ComandEx(): IComand()
{
    setType(type_cmd_ex);
}

ComandEx::ComandEx(ComandEx *cmd) : IComand()
{
    setType(type_cmd_ex);
}

void ComandEx::execute()
{
    throw  std::exception();
}
