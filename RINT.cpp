#include <iostream>
#include <string.h>
#include "RINT.h"

RINT::RINT(int y)
{
    x = y;
}

RINT::RINT()
{
    x = 0;
}

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

RINT RINT::operator+(RINT y)
{
    return RINT(x + y.get());
}

RINT RINT::operator-(RINT y)
{
    return RINT(x - y.get());
}
