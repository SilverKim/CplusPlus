#pragma once
#include <iostream>
#include <string>

using namespace std;

#ifndef CARNIVORE_H 
#define CARNIVORE_H

#include "Animal.h"

class Carnivore : public Animal
{
private:

public:
	Carnivore() { cout << "This is Carnivore Constructor" << endl; SetFood("meat"); };
	~Carnivore() {}

	void first();
	void second();
};
#endif

