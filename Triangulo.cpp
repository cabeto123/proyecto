#include "Triangulo.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
Triangulo::Triangulo(int a,int b,int c,int d)
{
	this->a = a;
	this->b=b;
	this->c = c;
	this->d = d;
}

void Triangulo::dibujar()
{
	string concatena;
	string salida;
	ifstream leedorarchivo("Triangulo.txt", ios::in);
	if (leedorarchivo.fail())
	{
		cout << "No se puede abrir el archivo " << endl;
	}
	else {
		while (!leedorarchivo.eof()) {
			getline(leedorarchivo, concatena);
			salida += concatena+"\n";
		
		}
		for (int i = 0; i < salida.size(); i++)
		{
			if (salida[i]=='a' && salida[i + 1]=='a' && salida[i+2]=='a')
			{
				i = i + 2;
				if (a<10)
				{
					cout << " " << a<<" ";
				}
				else if (a>=10&& a<100) {
					cout << " " << a;
				
				
				}
				else {
					cout <<  a;
				}
			}else if(salida[i] == 'b' && salida[i + 1] == 'b' && salida[i + 2] == 'b')
			{
				i = i + 2;
				if (b < 10)
				{
					cout << " " << b<<" ";
				}
				else if (b >= 10 && b < 100) {
					cout << " " << b;


				}
				else {
					cout << b;
				}
			}else if (salida[i] == 'c' && salida[i + 1] == 'c' && salida[i + 2] == 'c')
			{
				i = i + 2;
				if (c < 10)
				{
					cout << " " << c<<" ";
				}
				else if (c >= 10 && c < 100) {
					cout << " " << c;


				}
				else {
					cout << c;
				}
			}else if (salida[i] == 'h' && salida[i + 1] == 'h' && salida[i + 2] == 'h')
			{
				i = i + 2;
				if (d < 10)
				{
					cout << " " << d<<" ";
				}
				else if (d >= 10 && d< 100) {
					cout << " " << d;


				}
				else {
					cout << d;
				}
			}
			else if (salida[i] == 'b' && salida[i + 1] == 'h' ) {
				i = i + 5;
				if (b*d < 10)
				{
					cout << "  " << b*d << "   ";
				}
				else if (b*d >= 10 && b*d < 100) {
					cout << "  " << b*d<<"  ";


				}
				else if (b * d >= 100 && b * d < 1000) {
					cout  <<"  " << b * d << " ";


				}
				else if (b * d >= 1000 && b * d < 10000) {
					cout  << b * d << "  ";


				}
				else if(b*d>=10000&&b*d<100000){
					cout << b * d<<" ";
				}
				else {
				cout << b * d;
				}

				



			}
			else if ((salida[i] == 'a' && salida[i + 1] == '+')&& (salida[i+2] == 'b' && salida[i + 3] == '+')&& salida[i+4] == 'c' ) {
				i = i + 4;
				int resultado = a + b + c;
				if ( resultado< 10)
				{
					cout << "  " << "Resultado" << "  ";
				}
				else if (resultado >= 10 && resultado < 100) {
					cout << "  " << resultado << " ";


				}
				else if (resultado>= 100 && resultado < 1000) {
					cout << "  " << resultado;


				}
				else if (resultado>= 1000 && resultado < 10000) {
					cout << resultado<< " ";


				}
				else {
					cout <<resultado;
				}
			
			
			
			
			
			
			
			}
			else if (salida[i] == 'y' && salida[i + 1] == 'y' && salida[i + 2] == 'y')
			{
				i = i + 2;
				int resultado = (b * d )/ 2;
				if (resultado < 10)
				{
					cout << " " << resultado << " ";
				}
				else if (resultado >= 10 && resultado < 100) {
					cout << " " << resultado;


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
