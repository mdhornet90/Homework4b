#ifndef RINT_H
#define RINT_H
#include <iostream>
#include <string.h>

class RINT
{
    public:
        RINT(int y){x = y;}
        RINT(){x = 0;}
        RINT operator=(RINT &y);
        RINT& operator=(int y);
        RINT operator+(RINT &y);
        RINT operator-(RINT &y);
        int get() { return x;}
        friend ostream& operator<<(ostream &stream, RINT y);
        friend istream& operator>>(istream &stream, RINT &y);
    private:
        int x;
};
#endif
