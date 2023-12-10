#include "Rectangulo.h"

Rectangulo::Rectangulo(int a, int b)
{
	this->a = a;
	this->b = b;
}

void Rectangulo::dibujar()
{
	ifstream archivo("Rectangulo.txt", ios::in);
	string archivoString = "";
	string temp;
	while (!(archivo.eof())) {
		getline(archivo, temp);
		archivoString += temp+"\n";
	}
    for (int i = 0; i < archivoString.size(); i++) {
        if (archivoString[i] == 'a' && archivoString[i + 1] == 'a' && archivoString[i + 2] == 'a') {
            int width = 3 / 2 + to_string(a).size();


            width > 3 ? width = 0 : width = width;
            int cantSpaces = width;
            width == 3 ? cantSpaces = 0 : cantSpaces = cantSpaces;

            cout << setw(width) << right << a << setw(cantSpaces / 2) << setfill(' ') << "";

            i += 2;

        }
        else if (archivoString[i] == '2' && archivoString[i + 1] == 'a' && archivoString[i + 2] == 'a' && archivoString[i + 3] == 'a') {
            int width = 4;
            cout << setw(width) << setfill(' ') << left << a * 2;
            i += 3;
        }//Para variable "a"

        else if (archivoString[i] == 'b' && archivoString[i + 1] == 'b' && archivoString[i + 2] == 'b') {
            int width = 3 / 2 + to_string(b).size();


            width > 3 ? width = 0 : width = width;
            int cantSpaces = width;
            width == 3 ? cantSpaces = 0 : cantSpaces = cantSpaces;

            cout << setw(width) << right << b << setw(cantSpaces / 2) << setfill(' ') << "";

            i += 2;

        }
        else if (archivoString[i] == '2' && archivoString[i + 1] == 'b' && archivoString[i + 2] == 'b' && archivoString[i + 3] == 'b' ) {
            int width = 4;
            cout << setw(width) << setfill(' ') << right << b * 2;
            i += 3;
        }//Para variable "b"
        else if (archivoString[i] == 'z' && archivoString[i + 1] == 'z' && archivoString[i + 2] == 'z') {
            int width = 4;
            cout << setw(width/2+to_string(2 * a + 2 * b).size()) << setfill(' ') << right << 2*a +2*b;
            i += 3;
        }
        else if (archivoString[i] == 'y' && archivoString[i + 1] == 'y' && archivoString[i + 2] == 'y') {
            int width = 6;
            cout << setw(width) << setfill(' ') << left << a* b;
            i += 5;
        }

        else {
            cout << archivoString[i];
        }

    }
}
