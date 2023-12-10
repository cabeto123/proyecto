#include "Paralelogramo.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
Paralelogramo::Paralelogramo(int a, int b, int h)
{
	this->a = a;
	this->b = b;
	this->h = h;
}
void Paralelogramo::dibujar() {

	string concatena;
	string salida;
	ifstream leedorarchivo("paralelogramo.txt", ios::in);
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
			else if (salida[i] == 'b' && salida[i + 1] == 'b' && salida[i + 2] == 'b')
			{
				i = i + 2;
				if (b < 10)
				{
					cout << " " << b << " ";
				}
				else if (b >= 10 && b < 100) {
					cout << " " << b;


				}
				else {
					cout << b;
				}
			}

			else if (salida[i] == 'h' && salida[i + 1] == 'h' && salida[i + 2] == 'h')
			{
				i = i + 2;
				if (h < 10)
				{
					cout << " " << h << " ";
				}
				else if (h >= 10 && h < 100) {
					cout << " " << h;


				}
				else {
					cout << h;
				}
			}
			else if (salida[i] == 'a' && salida[i + 1] == '+' && salida[i + 2] == 'b') {
				i = i + 3;
				int resultado =( a + b);
				if (resultado < 10)
				{
					cout << " " << resultado << "  ";
				}
				else if (resultado >= 10 && resultado < 100) {
					cout << " " << resultado <<" ";


				}
				else if (resultado >= 100 && resultado < 1000) {
					cout << " " << resultado ;


				}
				else  {
					cout <<  resultado ;


				}
			




			}
			else if ((salida[i] == '2' && salida[i + 1] == '*') && (salida[i + 2] == 'a' && salida[i + 3] == '+') && salida[i + 4] == 'b') {
				i = i + 4;
				int resultado = 2 *( a + b);
				if (resultado < 10)
				{
					cout << "  " << resultado << "  ";
				}
				else if (resultado >= 10 && resultado < 100) {
					cout << "  " << resultado << " ";


				}
				else if (resultado >= 100 && resultado < 1000) {
					cout << "  " << resultado;


				}
				else if (resultado >= 1000 && resultado < 10000) {
					cout << resultado << " ";


				}
				else {
					cout << resultado;
				}







			}
			else if ((salida[i] == 'b' && salida[i + 1] == 'b') && (salida[i + 2] == '*' && salida[i + 3] == 'h') && salida[i + 4] == 'h')
			{
				i = i + 4;
				int resultado = (b * h);
				if (resultado < 10)
				{
					cout << "  " << resultado << "  ";
				}
				else if (resultado >= 10 && resultado < 100) {
					cout << "  " << resultado << " ";


				}
				else {
					cout <<" " << resultado << " ";
				}
			}
			else {
				cout << salida[i];
			}
		}
		leedorarchivo.close();
	}













}