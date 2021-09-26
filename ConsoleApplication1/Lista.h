#pragma once
#include "Box.h"

using namespace std;

class Lista
{
	Box* posIni;
	Box* posActual;

public:
	Lista();
	void AddElements(Box*);
	void ListElements();
	void ArrangeElements();
	
	
};

