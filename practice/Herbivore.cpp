#include <iostream>
#include <string>
#include "Herbivore.h"

using namespace std;

void Herbivore::first() {
	cout << GetType() << " was fed well with " << GetFood() << endl;
}

void Herbivore::second() {
	cout << GetType() << " was trained in Juggling" << endl;
}