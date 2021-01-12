#pragma once
#include <iostream>
#include <string>

using namespace std;

#ifndef HERBIVORE_H 
#define HERBIVORE_H

#include "Animal.h"

class Herbivore : public Animal
{
private:

public:
	Herbivore() { cout << "This is Herbivore constructor" << endl; SetFood("grass"); };
	~Herbivore() {}

	void first();
	void second();
};
#endif
