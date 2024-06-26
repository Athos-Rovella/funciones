#include <iostream>
using namespace std;
int mayor (int, int);
int main ()
{
	cout << "ingrese el primer valor " << endl;
	int a;
	cin>>a;
	cout << "ingrese el segundo valor " << endl;
	int b;
	cin>>b;
	int mayor2 = mayor(a,b);
	cout << "el mayor es " << mayor2 << endl;
}
int mayor (int a, int b){
	int resu;
	if(a>b){
		resu = a;	
	}else if(b>a){
		resu = b;
	}
	return resu;
}
