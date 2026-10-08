#include <iostream>
using namespace std;

int main() {
	//Realize un programa que permita usar dos numeros
	//Para realizar las 4 operaciones al mismo tiempo
	
	int numero1;
	int numero2;
	int suma, resta, multiplicar, dividir;
	
	//entrada
	
	cout <<"ingrese el primer numero: ";
	cin >>numero1;
	cout <<"ingrese el segundo numero:";
	cin >>numero2;
	//proceso
	
	suma=numero1+numero2;
	resta=numero1-numero2;
	multiplicar=numero1*numero2;
	dividir=numero1/numero2;
	//salida
	
	cout << "el resultado de la suma es: " << suma << endl;
	cout << "el resultado de la resta es: " << resta << endl;
	cout << "el resultado de la multiplicacion  es: " << multiplicar << endl;
	cout << "el resultado de la division es: " << dividir << endl;
	 
	return 0;
	
}
