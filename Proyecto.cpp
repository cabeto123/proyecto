#include <iostream>
#include "Triangulo.h"
#include "Cuadrado.h"
#include "funciones.h"
#include <locale>
#include "Rectangulo.h"
#include "Circulo.h"
#include <Windows.h>

using namespace std;
int main(int argc, char* argv[]) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_ALL, "spanish");
	if (checkArgs(argc, argv) == 1)
		return 1;
}
