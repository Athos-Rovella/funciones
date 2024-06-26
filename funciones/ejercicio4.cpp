#include <iostream>
using namespace std;
bool is_vocal (char);

int main(){
	char caracter;
	cout<<"Ingrese un caracter"<<endl;
	cin>>caracter;
	is_vocal(caracter);
	
}
bool is_vocal(char a){
	switch(a){
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		cout<<"El caracter es vocal";
		return true;
		break;
	default:
		cout<<"El caracter no es vocal";
		return false;
	}

	
}
