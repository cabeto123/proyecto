#include "Circulo.h"

Circulo::Circulo(int r)
{
	this->r = r;
}

void Circulo::dibujar()
{
	ifstream archivo("Circulo.txt", ios::in);
	string archivoString = "";
	string temp;
	while (!(archivo.eof())) {
		getline(archivo, temp);
		archivoString += temp+"\n";
	}
	for (int i = 0; i < archivoString.size(); i++) {
        if (archivoString[i] == 'r' && archivoString[i + 1] == 'r' && archivoString[i + 2] == 'r') {
            int width = 3 / 2 + to_string(r).size();


            width > 3 ? width = 0 : width = width;
            int cantSpaces = width;
            width == 3 ? cantSpaces = 0 : cantSpaces = cantSpaces;

            cout << setw(width) << right << r << setw(cantSpaces / 2) << setfill(' ') << "";

            i += 2;

        }
        else if (archivoString[i] == 'p' && archivoString[i + 1] == 'i' && archivoString[i + 2] == 'r') {
            int width = 4;
            int pir = r * 3.14;
            cout << setw(width) << setfill(' ') << right << pir;
            i += 3;
        }
        else if (archivoString[i] == 'a' && archivoString[i + 1] == '*' && archivoString[i + 2] == 'a') {
            int width = 7;
            cout << setw(width) << setfill(' ') << left << r * r;
            i += 6;
        }
        else {
            cout << archivoString[i];
        }
        
    }
}
