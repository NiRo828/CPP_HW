#include "Cat.h"
#include <iostream>

void Cat::changeLitterCount(int aLitterCountNew)
{
	LitterCount = aLitterCountNew;
}

void Cat::printLitterCount()
{
	printf("Number of Litter Is: %d\n", LitterCount);
}

void Cat::identifyCatAge(int aAge)
{
	this->age = aAge;
}

void Cat::printCatAge()
{
	printf("Cat Age Is: %d\n", age);
}

void Cat::printAll()
{
	this->printAnimalCode();
	this->printAnimalName();
	this->printLitterCount();
	this->printCatAge();

}
