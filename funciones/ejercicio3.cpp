#include <iostream>
using namespace std;

int ingreso(void);
int divisibles(int,int);
int main ()
{
	int num1 = ingreso();
	int num2 = ingreso();
	divisibles( num1, num2);
}
int ingreso()
{
	cout<<"Ingrese un numero"<<endl;
	int a;
	cin>>a;
	return a;
}
int divisibles(int a, int b)
{
	if(a % b == 0)
	{
		cout<<a<<" es divisible por "<<b<<endl;
	}
	if(b % a == 0)
	{
		cout<<b<<" es divisible por "<<a<<endl;
	}
	if(b % a != 0 && a % b != 0)
	{
		cout<<"Ninguno de los dos numeros son divisibles"<<endl;
	}
}
