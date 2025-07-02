#ifndef COMANDREPEX_H
#define COMANDREPEX_H

#include "icomand.h"

class ComandRepEx : public IComand
{
public:
    ComandRepEx();
    ComandRepEx(IComand* cmd);
    ComandRepEx(ComandRepEx* cmd);

    void execute() override;

private:
    IComand* cmd;
};

#endif // COMANDREPEX_H
