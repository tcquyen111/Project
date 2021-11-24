#include "Car.h"

Car::Car()
{
    this->cx = 1;
    this->cy = 1;
}
Car::Car(int x, int y)
{
    this->cx = x;
    this->cy = y;
}
Car::Car(const Car &c)
{
    this->cx = c.cx;
    this->cy = c.cy;
}

Car::Car & operator=(const Car & c)
{
     this->cx = c.cx;
    this->cy = c.cy;
    return *this;
}

void Car::selfDraw(ConsoleHandle * &) const;