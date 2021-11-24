#include<iostream>
using namespace std;

class Bird : public Animal
{
private:
    int w; // weight
	int h; // height
public:
    Bird();
    Bird(int, int);
	Bird(const Bird &);
	~Bird();
    
    void speedBird(int);
    


};