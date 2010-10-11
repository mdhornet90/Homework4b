#include <iostream>
#include <string.h>
#include "RINT.h"

RINT RINT::operator=(RINT &y)
{
    x = y.get();
    return *this;
}

RINT& RINT::operator=(int y)
{
    x = y;
    return *this;
}

RINT RINT::operator+(RINT &y)
{
    return RINT(x + y.get());
}

RINT RINT::operator-(RINT &y)
{
    return RINT(x - y.get());
}

ostream& RINT::operator<<(ostream &stream, RINT &y)
{
    stream<<y.x;
    return stream;
}

istream& RINT::operator>>(istream &stream, RINT &y)
{
    stream>>x;
    return stream;
}
