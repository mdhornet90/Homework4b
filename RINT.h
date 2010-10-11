#ifndef RINT_H
#define RINT_H
#include <iostream>
#include <string.h>
using namespace std;
        
RINT operator-(int y);
        
class RINT
{
    public:
        RINT(int y);
        RINT();
        RINT operator=(RINT y);
        RINT& operator=(int &y);
        RINT operator+(RINT &y);
        RINT operator-(RINT &y);
        int get() { return x;}
        friend ostream& operator<<(ostream &stream, RINT y)
        {
            stream<<y.get();
            return stream;
        }
        friend istream& operator>>(istream &stream, RINT &y)
        {
            stream>>y;
            return stream;
        }
    private:
        int x;
};

RINT operator+(RINT a, RINT b)
{
    return RINT(a.get() + b.get());
}

RINT operator-(RINT a, RINT b)
{
    return RINT(a.get() - b.get());
}

#endif
