#include <iostream>
using namespace std;

class Vehicle
{
private:
    /* data */
public:
    Vehicle();
    Vehicle(int, int);
    Vehicle(const Vehicle &);

    virtual void Move(int x, int y);
    void Tell();

    virtual void drawVehicle();
    Vehicle &operator=(const Vehicle &);
    // void Stop();
    // void Speed(int x);

    virtual ~Vehicle();
};
