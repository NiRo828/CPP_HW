#include "Dog.h"
#include <iostream>

void Dog::changeLitterCount(int aLitterCountNew)
{
	LitterCount = aLitterCountNew;
}

void Dog::printLitterCount()
{
	printf("Number of Litter Is: %d\n", LitterCount);
}

void Dog::printAll()
{
	this->printAnimalCode();
	this->printAnimalName();
	this->printLitterCount();
}
