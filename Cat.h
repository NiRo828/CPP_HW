#pragma once
#include "Animal.h"

class Cat : public Animal
{
	int LitterCount;
public:
	int age;
	void changeLitterCount(int aLitterCountNew);
	void printLitterCount();
	void identifyCatAge(int aAge);
	void printCatAge();
	void printAll();
};

