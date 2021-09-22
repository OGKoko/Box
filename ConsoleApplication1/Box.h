#pragma once

using namespace std;

class Box{
	int contenidoDeLaCaja;
	Box* sig;
	Box* anterior;

public:
	Box(int);
	void setSig(Box*);
	void setAnterior(Box*);
	//void setContent(int);
	int getContent();
	Box* getSig();
	Box* getAnterior();
};

