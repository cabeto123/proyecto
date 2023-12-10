#include <iostream>
#include "Triangulo.h"
#include "Cuadrado.h"
#include "funciones.h"
#include <locale>
#include "Rectangulo.h"
using namespace std;
int main(int argc, char* argv[]) {
	Rectangulo r(10, 15);
	r.dibujar();
	setlocale(LC_ALL, "spanish");
	if (checkArgs(argc, argv) == 1)
		return 1;

}
