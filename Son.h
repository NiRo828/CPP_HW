#pragma once
#include "Father.h"

class Son : public Father
{
protected:
	int SLuckyNumber=LuckyNumber;
public:
	void sonFunc();
	void checkLuckyNumber(int aLuckyNumber);
	void virFunc();
};

