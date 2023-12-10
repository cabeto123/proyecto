#include "Rombo.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
Rombo::Rombo(int a, int d, int D)
{
	this->a = a;
	this->d = d;
	this->D = D;
}

void Rombo::dibujar()
{
	string concatena;
	string salida;
	ifstream leedorarchivo("Rombo.txt", ios::in);
	if (leedorarchivo.fail())
	{
		cout << "No se puede abrir el archivo " << endl;
	}
	else {
		while (!leedorarchivo.eof()) {
			getline(leedorarchivo, concatena);
			salida += concatena + "\n";

		}
		for (int i = 0; i < salida.size(); i++)
		{
			if (salida[i] == 'a' && salida[i + 1] == 'a' && salida[i + 2] == 'a')
			{
				i = i + 2;
				if (a < 10)
				{
					cout << " " << a << " ";
				}
				else if (a >= 10 && a < 100) {
					cout << " " << a;


				}
				else {
					cout << a;
				}
			}
			else if (salida[i] == 'D' && salida[i + 1] == 'D' && salida[i + 2] == 'D')
			{
				i = i + 2;
				if (D < 10)
				{
					cout << " " << D << " ";
				}
				else if (D >= 10 && D < 100) {
					cout << " " << D;


				}
				else {
					cout << D;
				}
			}

			else if (salida[i] == 'd' && salida[i + 1] == 'd' && salida[i + 2] == 'd')
			{
				i = i + 2;
				if (d < 10)
				{
					cout << " " << d << " ";
				}
				else if (d >= 10 && d < 100) {
					cout << " " << d;


				}
				else {
					cout << d;
				}
			}
			else if (salida[i] == '(' && salida[i + 1] == '4' ) {
				i = i + 5;
				int resultado = 4*a;
				if (resultado < 10)
				{
					cout << "  " << resultado << "   ";
				}
				else if (resultado >= 10 && resultado < 100) {
					cout << "  " << resultado << "  ";


				}
				else if (resultado >= 100 && resultado < 1000) {
					cout << " " << resultado<<"  ";


				}
				else if (resultado >= 1000 && resultado < 10000) {
					cout << " " << resultado << " ";


				}
				else if (resultado >= 10000 && resultado < 100000) {
					cout << resultado << "  ";


				}
				else {
					cout << resultado ;
				
				
				}








			}
			else if ((salida[i] == '(' && salida[i + 1] == 'D')) {
				i = i + 5;
				int resultado = (D* d)/2;
				if (resultado < 10)
				{
					cout << "  " << resultado << "   ";
				}
				else if (resultado >= 10 && resultado < 100) {
					cout << "  " << resultado << "  ";


				}
				else if (resultado >= 100 && resultado < 1000) {
					cout << " " << resultado << "  ";


				}
				else if (resultado >= 1000 && resultado < 10000) {
					cout << " " << resultado << " ";


				}
				else if (resultado >= 10000 && resultado < 100000) {
					cout << resultado << "  ";


				}
				else {
					cout << resultado;


				}







			}
			else {
				cout << salida[i];
			}
		}
		leedorarchivo.close();
	}












}
