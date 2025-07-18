#ifndef COMANDEX_H
#define COMANDEX_H

#include "icomand.h"

class ComandEx : public IComand
{
public:
    ComandEx();
    ComandEx(ComandEx* cmd);

    void execute() override;
};

#endif // COMANDEX_H
