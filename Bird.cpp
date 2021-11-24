#include"Bird.h"

Bird::Bird(){

}
Bird::Bird()
{
    this->w = 2;
    this->h = 1;
}
Bird::Bird(int a, int b)
{
    this->w = a;
    this->h = b;
}
Bird::Bird(const Bird &bird)
{
    this->w = bird.w;
    this->h = bird.h;
}