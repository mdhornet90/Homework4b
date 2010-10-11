#ifndef RINT_H
#define RINT_H
#include <iostream>
#include <string.h>

class RINT
{
    public:
        RINT(int y);
        RINT();
        RINT operator=(RINT &y);
        RINT& operator=(int y);
        RINT operator+(RINT &y);
        RINT operator-(RINT &y);
        int get() { return x;}
        friend ostream& operator<<(ostream &stream, const RINT y)
        {
            stream<<y.get();
            return stream;
        }
        friend istream& operator>>(istream &stream, const RINT &y)
        {
            stream>>x;
            return stream;
        }
    private:
        int x;
};
#endif
