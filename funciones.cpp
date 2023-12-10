#include "funciones.h"

int checkArgs(int argc)
{
	if (argc < 2) {
        cout << "Uso: Figuras_Planas.exe ACCION [VARIABLES]" << endl;
        cout << "     Calculos de perimetro y área de Figuras Planas. " << endl;
        cout << "     Donde: " << endl;
        cout << "            ACCION: " << endl;
        cout << "                    ayuda             | Información sobre el uso del programa." << endl;
        cout << endl << "                    triangulo         | VARIABLES: a b c h" << endl;
        cout << "                    paralelogramo     | VARIABLES: a b h" << endl;
        cout << "                    rectangulo        | VARIABLES: a b" << endl;
        cout << "                    cuadrado          | VARIABLES: a" << endl;
        cout << "                    rombo             | VARIABLES: a d D" << endl;
        cout << "                    cometa            | VARIABLES: a b d D" << endl;
        cout << "                    trapecio          | VARIABLES: a b c h B" << endl;
        cout << "                    circulo           | VARIABLES: r" << endl;
		return 1;
	}
	else {

		return 0;
	}

}
