#include <iostream>
using namespace std;

class Person
{
public: 
     string name;
};
Person::Person(string tempName)
{
     name=tempName;
}


class Pet 
{
public:
     string name;
     int age;
     Person *owner;
};
Pet::Pet(string tempName, int tempAge, Person *tempOwner)
{
     name=tempName;
     age=tempAge;
     owner=tempOwner;
}

class Animal: public Pet
{
public:
     Gender gend;
     doorNature door;
};

class Cat: public Animal
{
public:
     void knock_shit_off_of_table()
	{
		cout<<"Maintains ee contact. Assert dominance.";
	}
};

class Dog: public Animal
{
public:
     void eat_poop()
     {
	cout<<"Yum";
     }
};

class Snake: public Animal
{
public:
     void snek()
	{
	   cout<<"snek snek snek";
	}
};

class Plant
{
public: 
	int greenness;
};
Plant::Plant(int tempGreenness)
{
	greenness=tempGreenness % 51; //gives Greenness one of 50 shades of Green
}

class Fern: public Plant
{
public:
	void fernicate()
	{
		cout<<"(fern noises)";
	}
}

class Cactus: public Plant
{
public:
	void poke()
	{
		cout<<"Poke";
	}
}

class Rock
{
public:
	int hardness;
	string cleavage;
	int color;
	string chem_comp; //not to be confused with chain_chomp
};
Rock::Rock(int tempHardness, string tempCleavage, int tempColor, string temp_chem_comp)
{
	hardness=tempHardness;
	cleavage=tempCleavage;
	color=tempColor;
	chem_comp=temp_chem_comp;
}
class Fornacite: public Rock
{
}
class Fukalite: public Rock
{
}
class Cummingtonite: public Rock
{
}
}
