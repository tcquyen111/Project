#include "Animal.h"
Animal::Animal()
{
    mX = mY = 0;
}
Animal::Animal(int x, int y)
{
    mX = x;
    mY = y;
}

Animal::Animal(const Animal &a)
{
    this->mX = a.mX;
    this->mY = a.mY;
    this->point = a.point;
}
