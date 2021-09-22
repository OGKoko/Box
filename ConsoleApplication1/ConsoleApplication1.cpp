#include"Box.h"
#include"Lista.h"
#include <iostream>

int main()
{
    Lista leLista; 
   // Box* laCaja;
    leLista.AddElements(new Box(0));
    leLista.AddElements(new Box(1));
    leLista.AddElements(new Box(2));
    leLista.AddElements(new Box(3));
    leLista.AddElements(new Box(4));

    leLista.ListElements();


}


