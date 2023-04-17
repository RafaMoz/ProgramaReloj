#include <stdio.h>
#include <stdlib.h>
#include "Persona.h"

Persona* New_Persona(){
	Persona* p= (Persona*)malloc(sizeof(Persona));
	if(NULL = p)
	{
		return NULL;
	}else{
		return p;
	}
}

void Delete_Persona(&this){
	free(*this);
	*this = NULL;
}

void Set_data(){
	//to do
}