#pragma once
#include <iostream>
#include <string>
using namespace std;

#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {

private:
	string species;
	string habitat;
	string food;
	string type;
	int weight;
public:
	Animal() { cout << "This is Animal Class Constructor" << endl; }; //default constructor 
				 //Animal(string species, string habitat, string food, string type, int weight);
	~Animal() {}

	string GetSpecies() { return species; }; //accessor
	void SetSpecies(string x); //mutator

	string GetHabitat() { return habitat; }; //is it right about using const?
	void SetHabitat(string x);

	string GetFood() { return food; };
	void SetFood(string x);

	string GetType() { return type; };
	void SetType(string x);

	int GetWeight() { return weight; };
	void SetWeight(int x);

	void getInfo();
};
#endif
