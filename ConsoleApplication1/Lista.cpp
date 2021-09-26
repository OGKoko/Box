#include <stdio.h>
#include<iostream>
#include "Lista.h"
using namespace std;

Lista::Lista() {
	this->posActual = NULL;
	this->posIni = NULL;
}

void Lista::AddElements(Box* box) {

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

void Lista::ListElements() {
	Box* leBox = this->posIni;
	while (leBox != NULL) {


		cout << leBox->getContent();
		leBox = leBox->getSig();

	}

}

void Lista::ArrangeElements()
{
	Box* laBox;
	bool cambios = true;
	
	while (cambios) {
		cambios = false;
		laBox = this->posIni;
		do {
			if (laBox->getContent() > laBox->getSig()->getContent()) {
					laBox->getSig()->setAnterior(laBox->getAnterior());
					laBox->setSig(laBox->getSig()->getSig());
					laBox->setAnterior(laBox->getSig()->getAnterior());
					laBox->getSig()->getAnterior()->setSig(laBox);
					cambios = true;
				if(laBox->getAnterior()->getAnterior() == NULL){
					this->posIni = laBox->getAnterior();
				}
			}
			laBox = laBox->getSig();
		} while (laBox->getSig() != NULL);
		this->ListElements();
	}
}









