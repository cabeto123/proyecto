#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "Cuadrado.h"
using namespace std;

int main() {
    //std::string text = "Centered Text";
    //int fieldWidth = 30;

    //int padding = fieldWidth - text.length(); // Calculate the padding needed on both sides

    //// Output the centered text
    //std::cout <<std::setfill('0') << std::setw(padding / 2 + text.length()) << std::right << text << std::endl;

    int a =100;
    

    string archivoString = "";
    ifstream archivo("Cuadrado.txt", ios::in);
    string temp;
    while (!(archivo.eof())) {

        getline(archivo, temp);
        archivoString += temp+"\n";

    }
    Cuadrado* c = new Cuadrado(a);
    c->dibujar();
    /*cout << "archivoString - " << archivoString << endl;
    for (int i = 0; i < archivoString.size(); i++) {
        if (archivoString[i] == 'a'&&archivoString[i+1]=='a'&&archivoString[i+2]=='a') {
            int width = 3 / 2 + to_string(a).size();
            

            width > 3 ? width = 0 : width = width;
            int cantSpaces = width;
            width == 3 ? cantSpaces = 0 : cantSpaces = cantSpaces;
            
            cout << setw(width) << right << a<<setw(cantSpaces/2)<<setfill(' ')<<"";
            
            i += 2;

        }
        else {
            cout << archivoString[i];
        }
    }*/

    return 0;
}
