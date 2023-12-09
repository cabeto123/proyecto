#include "Cuadrado.h"

Cuadrado::Cuadrado(int a)
{
    this->a = a;
}

void Cuadrado::dibujar()
{
    string archivoString = "";
    ifstream archivo("Cuadrado.txt", ios::in);
    string temp;
    while (!(archivo.eof())) {

        getline(archivo, temp);
        archivoString += temp + "\n";

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
        else if (archivoString[i] == '4' && archivoString[i + 1] == '*' && archivoString[i + 2] == 'a') {
            int width = 5;
            cout << setw(width) << setfill(' ') << right << a * 4;
            i += 4;
        }
        else {
            cout << archivoString[i];
        }
        
    }
}
