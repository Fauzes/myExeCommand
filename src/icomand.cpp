#include "icomand.h"

IComand::IComand()
{

}

void IComand::setType(int type)
{
    typeCmd = type;
}

int IComand::getType()
{
    return typeCmd;
}
