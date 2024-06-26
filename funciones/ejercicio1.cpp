#include <iostream>
/* #include <time.h>
#include <stdlib.h> */
using namespace std;

long potencia (int, int);
int ingreso (string);

int main()
{
	int base = ingreso ("base");
	int exponente = ingreso ("exponente");
	int resu = potencia(base, exponente);
	cout<<"El resultado de elevar "<<base<<" por "<<exponente<<" es: "<<resu<<endl;
}
int ingreso(string palabra)
{
	cout<<"Ingrese un numero como "<<palabra<<endl;
	int a;
	cin>>a;
	return a;
}

long potencia (int base,int exponente)
{
	int aux = base;
	for(int i = 1; i < exponente; i++)
	{
		base = aux * base;
	}
	return base;
}

