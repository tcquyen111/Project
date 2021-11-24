#include "Vehicle.h"

class Car : public Vehicle
{
private:
    static const int width = 4;
    static const int height = 1;
    int cx;
    int cy;

public:
    Car();
    Car(int, int);
    Car(const Car &);
    virtual ~Car();

    Car &operator=(const Car &);
    void selfDraw(ConsoleHandle *&) const;
};
//jjkjhiiojoijjoji
