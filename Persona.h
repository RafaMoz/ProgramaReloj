#include<stdio.h>

typedef struct{
	size_t age;
	int cuenta;
}Persona;

Persona* New_Persona();
void Delete_Persona();
void Set_data();