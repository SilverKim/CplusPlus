#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

void Animal::SetSpecies(string x) {
	species = x;
}

void Animal::SetHabitat(string x) {
	habitat = x;
}

void Animal::SetFood(string x) {
	food = x;
}

void Animal::SetType(string x) {
	type = x;
}

void Animal::SetWeight(int x) {
	weight = x;
}


void Animal::getInfo() {  //prints all the information as seen in the result screenshot.
	cout << "I am a " << GetSpecies()<<endl;
	cout << "I eat " << GetFood() << endl;
	cout << "I am a " << GetType()<<"!" << endl;
	cout << "I weigh " << GetWeight() << "Kg" << endl;
	cout << "I live in the " << GetHabitat() << endl;
}