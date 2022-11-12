#include "Father.h"
#include <iostream>

void Father::fatherFunc()
{
	printf("Luck,I am Your Father\n");
}
void Father::checkLuckyNumber(int aLuckyNumber)
{
	if (aLuckyNumber==LuckyNumber)
	{
		printf("%d Is Also My Lucky Number\n",aLuckyNumber);
	}	
	else
	{
		printf("%d Is My Lucky Number\n",aLuckyNumber);
	}
	
}
void Father::virFunc()
{
	printf("I am Job.\n");
}
