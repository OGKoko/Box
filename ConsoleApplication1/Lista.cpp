#include <stdio.h>
#include<iostream>
#include "Lista.h"
using namespace std;

Lista::Lista(){
	this->posActual = NULL;
	this->posIni = NULL;
}

void Lista::AddElements(Box* box){

	if (this->posIni == NULL) {
		this->posIni = box;
		this->posActual = box;
	}
	else {
		this->posActual->setSig(box);
		box->setAnterior(this->posActual);
		box->setSig(NULL);
		

		this->posActual = box;
	}
}

void Lista::ListElements(){
	Box* leBox = this->posIni;
	while (leBox != NULL) {
		cout << leBox->getContent();
		leBox = leBox->getSig();
		}
	

	}
	


