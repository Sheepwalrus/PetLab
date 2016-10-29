#include <iostream>
#include <string>
#include "Person.h"
#include "Pet.h"
#include "Animal.cpp"
#include "Plant.cpp"
#include "Rock.h"

using namespace std;

int main()
{
	//Snake myPet;
	//myPet.snek(); //works as should

	//Animal *myPet=new Snake; 
	//myPet->snek(); //Class Animal has no member named snek

	Pet *Snark=new Snake;
	static_cast<Snake*>(Snark)->snek(); 
	return 0;
}

