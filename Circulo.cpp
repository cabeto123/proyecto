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
        else if (archivoString[i] == 'z' && archivoString[i + 1] == 'z' && archivoString[i + 2] == 'z') {
            int width = 4;
            int piy = 2 * 3.14 * r;
            cout << setw(width) << setfill(' ') << left << piy;
            i += 3;
        }
        else if (archivoString[i] == 'p' && archivoString[i + 1] == 'i' && archivoString[i + 2] == 'y') {
            int width = 6;
            int piy = r*r;
            cout << setw(width) << setfill(' ') << left << piy;
            i += 5;
        }
        else if (archivoString[i] == 'y' && archivoString[i + 1] == 'y' && archivoString[i + 2] == 'y') {
            int width = 7;
            int piy = 3.14*r*r;
            cout << setw(width) << setfill(' ') << left << piy;
            i += 6;
        }
        else {
            cout << archivoString[i];
        }
        
    }
}
