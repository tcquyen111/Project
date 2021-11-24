#include <iostream>
using namespace std;

class Animal
{

protected:
    int mX, mY, point;

public:
    Animal();
    Animal(int, int);
    Animal(const Animal &);
    virtual ~Animal();

    Animal &operator=(const Animal &);

    virtual void Move(int x, int y);
    void Tell();

    virtual void drawAnimal();

    //void Stop();
    //void Speed(int x);

    const int &X() const { return this->mX; }
    const int &Y() const { return this->mY; }
};
