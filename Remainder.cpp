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
	Pet *Snark = new Snake;
	Snark->snek();
	return 0;
}

