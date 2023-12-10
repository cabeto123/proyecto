#include <iostream>
#include "Triangulo.h"
#include "Cuadrado.h"
#include "funciones.h"
#include <locale>
using namespace std;
int main(int argc, char* argv[]){
	setlocale(LC_ALL, "spanish");
	if (checkArgs(argc) == 1)
		return 1;
	
	Triangulo a(4,6,9,8);
	a.dibujar();
	Cuadrado c(999);
	c.dibujar();
}
