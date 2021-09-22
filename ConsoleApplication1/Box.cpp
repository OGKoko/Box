#include "Box.h"

Box::Box(int i){
	this->contenidoDeLaCaja = i;
}

void Box::setSig(Box* s){
	this->sig = s;
}

void Box::setAnterior(Box* a){
	this->anterior = a;
}

/*void Box::setContent(int c)
{
	this->contenidoDeLaCaja = c;
}*/

int Box::getContent()
{
	return this->contenidoDeLaCaja;
}

Box* Box::getSig(){
	return this->sig;
}

Box* Box::getAnterior() {
	return this->anterior;
}
