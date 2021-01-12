#include <iostream>
#include <string>
#include "Carnivore.h"

using namespace std;

void Carnivore::first() {
	cout << GetType() << " was fed well with " << GetFood() << endl;
}

void Carnivore::second() {
	cout << GetType() << " ran trained in axe throwing" << endl;
}