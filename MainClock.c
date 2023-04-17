#include<stdio.h>
#include<unistd.h>
#include "Clock.h"

int main()//int argc, char* argv[])
{
	printf("\nHello world, this is an example. I'll programm with modules an a script to execute all the files\n");
	
	printf("\nOHHH NO\n");
	Clock* casio = Clock_New(9,24,0);
	printf("\nHour is %d\n", Clock_Get_Hrs(casio));

	Clock_Delete(&casio);
    Clock* reloj = Clock_New(12,0,0); //Creo un nuevo reloj despues de haber eliminado el reloj casio 


	return 0;
}
