#ifndef ICOMAND_H
#define ICOMAND_H


class IComand
{
public:
    IComand();
    // virtual ~IComand();

    virtual void execute() = 0;
    void setType(int type);
    int getType();

private:
    int typeCmd;
};

#endif // ICOMAND_H
