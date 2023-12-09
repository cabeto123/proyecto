#include <iostream>
#include "Triangulo.h"
#include "Cuadrado.h"
using namespace std;
int main()
{
	Triangulo a(4,6,9,8);
	a.dibujar();
	Cuadrado c(10);
	c.dibujar();
}
