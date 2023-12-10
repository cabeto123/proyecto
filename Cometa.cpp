#include "Cometa.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
Cometa::Cometa(int a, int d, int D, int b)
{
	this->a = a;
	this->d = d;
	this->D= D;
	this->b = b;
}

void Cometa::dibujar()
{
	string concatena;
	string salida;
	ifstream leedorarchivo("Cometa.txt", ios::in);
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

			else if (salida[i] == 'c' && salida[i + 1] == 'c' && salida[i + 2] == 'c')
			{
				i = i + 2;
				if (c < 10)
				{
					cout << " " << c << " ";
				}
				else if (c >= 10 && c < 100) {
					cout << " " << c;


				}
				else {
					cout << c;
				}
			}
			else if (salida[i] == 'B' && salida[i + 1] == 'B' && salida[i + 2] == 'B')
			{
				i = i + 2;
				if (B < 10)
				{
					cout << " " << B << " ";
				}
				else if (B >= 10 && B < 100) {
					cout << " " << B;


				}
				else {
					cout << B;
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
			else if (salida[i] == 'B' && salida[i + 1] == '+' && salida[i + 2] == 'c') {
				i = i + 6;
				int resultado = b + a + B + c;
				if (resultado < 10)
				{
					cout << "   " << resultado << "   ";
				}
				else if (resultado >= 10 && resultado < 100) {
					cout << "   " << resultado << "  ";


				}
				else if (resultado >= 100 && resultado < 1000) {
					cout << "  " << resultado << "  ";


				}
				else if (resultado >= 1000 && resultado < 10000) {
					cout << " " << resultado << "  ";


				}
				else if (resultado >= 10000 && resultado < 100000) {
					cout << " " << resultado << "  ";


				}
				else if (resultado >= 100000 && resultado < 1000000) {
					cout << resultado << " ";


				}
				else {
					cout << resultado;
				}








			}
			else if (salida[i] == 'b' && salida[i + 1] == '+' && salida[i + 2] == 'B') {
				i = i + 6;
				int resultado = ((b + B) * h) / 2;
				if (resultado < 10)
				{
					cout << "   " << resultado << "   ";
				}
				else if (resultado >= 10 && resultado < 100) {
					cout << "   " << resultado << "  ";


				}
				else if (resultado >= 100 && resultado < 1000) {
					cout << "  " << resultado << "  ";


				}
				else if (resultado >= 1000 && resultado < 10000) {
					cout << " " << resultado << "  ";


				}
				else if (resultado >= 10000 && resultado < 100000) {
					cout << " " << resultado << "  ";


				}
				else if (resultado >= 100000 && resultado < 1000000) {
					cout << resultado << " ";


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
