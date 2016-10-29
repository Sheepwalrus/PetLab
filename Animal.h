#include <string>
using namespace std;
class Animal: public Pet
{
public:
     char gender;
     bool indooroutdoor;
};

class Cat: public Animal
{
public:
     void knock_shit_off_of_table();
};

class Dog: public Animal
{
public:
     void eat_poop();
};

class Snake: public Animal
{
public:
     void snek();
};
