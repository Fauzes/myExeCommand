#ifndef COMANNDREEX2_H
#define COMANNDREEX2_H

#include "icomand.h"

class ComanndReEx2 : public IComand
{
public:
    ComanndReEx2();
    ComanndReEx2(IComand* cmd);

    void execute() override;

private:
    IComand* cmd;
};

#endif // COMANNDREEX2_H
