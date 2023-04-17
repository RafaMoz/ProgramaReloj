#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int hrs;
	int min;
	int sec;
}Clock;

Clock* Clock_New(int hrs, int min, int sec);
void Clock_Delete(Clock** this);
int Clock_Get_Hrs();
int Clock_get_min();
int Clock_get sec();
void Clock_Set_Hr();

