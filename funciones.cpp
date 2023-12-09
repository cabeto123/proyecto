#include "funciones.h"

int checkArgs(int argc)
{
	if (argc < 2) {
		cout << "Uso: Figuras_Planas.exe ACCION [VARIABLES]" << endl;
		cout << "     Calculos de perimetro y área de Figuras Planas. " << endl;
		cerr << "Ingrese un argumento";
		return 1;
	}
	else {

		return 0;
	}

}
