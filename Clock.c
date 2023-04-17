#include "Clock.h"
#include<stdio.h>
#include<stdlib.h>

Clock* Clock_New(int hrs, int min, int sec)
{
	Clock* watch = (Clock* )malloc(sizeof(Clock));
	watch->hrs = hrs;
	watch->min = min;
	watch->sec = sec;
	
	return watch;
}

void Clock_Delete(Clock** this)
{
	if(NULL != *this)
	{
		free(*this);
		*this = NULL;
	}
}

int Clock_Get_Hrs(Clock* this)
{	
	return this->hrs;
}

void Clock_Set_Hr(Clock* this, int hrs)
{
	this->hrs = hrs;
}