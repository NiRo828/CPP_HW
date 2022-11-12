#include "Animal.h"
#include <iostream>
#pragma warning (disable:4996)

void Animal::getAnimalCode(int aCode)
{
	code = aCode;
}

void Animal::printAnimalCode()
{
	printf("Animal Code Is: %d\n", code);
}

void Animal::getAnimalName(char aName[100])
{
	strcpy(this->name, aName);
}

void Animal::printAnimalName()
{
	printf("Animal Name Is: %s\n", name);
}
