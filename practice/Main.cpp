#include <iostream>
#include <string>

#include "Animal.h"
#include "Carnivore.h"
#include "Herbivore.h"

using namespace std;

int main()
{
	Carnivore animalOne = Carnivore();
	animalOne.SetSpecies("Tiger");
	animalOne.SetHabitat("Mountain");
	animalOne.SetType("Carnivore");
	animalOne.SetWeight(80);
	animalOne.getInfo();
	animalOne.first();
	animalOne.second();
	
	cout << endl;
	Herbivore animalTwo = Herbivore();
	animalTwo.SetSpecies("Deer");
	animalTwo.SetHabitat("Savanna");
	animalTwo.SetType("Herbivore");
	animalTwo.SetWeight(40);
	animalTwo.getInfo();
	animalTwo.first();
	animalTwo.second();

	system("pause");
	return 0;
}