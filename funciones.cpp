#include "funciones.h"
#include "Triangulo.h"
#include "Cuadrado.h"
#include "Paralelogramo.h"
#include "Rombo.h"
#include "Rectangulo.h"
#include "Trapecio.h"
#include <windows.h>


void ayuda() {
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
}
int checkArgs(int argc, char* argv[])
{
	if (argc < 2) {
        ayuda();
		return 1;
	}
	else {
        string figura = argv[1];
        if (figura == "triangulo") {
            if (argc >= 6) {
                Triangulo t(atoi(argv[2]), atoi(argv[3]), atoi(argv[4]), atoi(argv[5]));
                t.dibujar();
            }
            else {
                cout << "No ha ingresado suficientes argumentos!" << endl;
                ayuda();
                return 1;
            }
        }
        else if (figura == "cuadrado") {
            if (argc >= 3) {
                Cuadrado c(atoi(argv[2]));
                c.dibujar();
            }
            else {
                cout << "No ha ingresado suficientes argumentos!" << endl;
                ayuda();
                return 1;
            }
        }
        else if (figura == "paralelogramo") {
            if (argc >= 5) {
                Paralelogramo p(atoi(argv[2]),atoi(argv[3]),atoi(argv[4]));
                p.dibujar();
            }
            else {
                cout << "No ha ingresado suficientes argumentos!" << endl;
                ayuda();
                return 1;
            }
        }
        else if (figura == "rombo") {
            if (argc >= 5) {
                Rombo r(atoi(argv[2]), atoi(argv[3]), atoi(argv[4]));
                r.dibujar();
            }
            else {
                cout << "No ha ingresado suficientes argumentos!" << endl;
                ayuda();
                return 1;
            }
        }
        else if (figura == "rectangulo") {
            if (argc >= 4) {
                Rectangulo r(atoi(argv[2]), atoi(argv[3]));
                r.dibujar();
            }
            else {
                cout << "No ha ingresado suficientes argumentos!" << endl;
                ayuda();
                return 1;
            }
        }
        else if (figura == "Trapecio") {
            if (argc >= 7) {
                Trapecio r(atoi(argv[2]), atoi(argv[3]), atoi(argv[4]), atoi(argv[5]), atoi(argv[6]));
                r.dibujar();
            }
            else {
                cout << "No ha ingresado suficientes argumentos!" << endl;
                ayuda();
                return 1;
            }
        }
		return 0;
	}

}
