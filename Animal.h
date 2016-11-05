#include <string>
using namespace std;
class Animal: public Pet
{
public:
     char gender;
     bool indooroutdoor;
     virtual void action()
	{
		//Virtual Function
	}
};

class Cat: public Animal
{
public:
     void action();
};

class Dog: public Animal
{
public:
     void action();
};

class Snake: public Animal
{
public:
     void action();
};
