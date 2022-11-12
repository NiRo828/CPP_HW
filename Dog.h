#pragma once
#include "Animal.h"

class Dog : public Animal
{
	int LitterCount;
public:
	void changeLitterCount(int aLitterCountNew);
	void printLitterCount();
	void printAll();

};

