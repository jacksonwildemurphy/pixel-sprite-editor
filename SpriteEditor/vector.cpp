#include "vector.h"
#include <string>

Vector4::Vector4(int r,int g,int b,int a)
{
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}
Vector4::Vector4()
{
    this->r = 0;
    this->g = 0;
    this->b = 0;
    this->a = 0;
}
