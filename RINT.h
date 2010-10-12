#ifndef RINT_H
#define RINT_H
#include <iostream>
#include <string.h>
using namespace std;
        
class RINT
{
    public:
        RINT(int y);
        RINT();
        RINT& operator=(RINT y);
        RINT& operator=(int y);
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

RINT operator+(RINT a, RINT b);
RINT operator-(RINT a, RINT b);

#endif
