/*
	Name: TP#1 -Tipo de Datos-
	Course: K1091
	Author: Ivan Heimsath
	Date: 23/04/15 02:41

*/

#include<iostream>
using namespace std;
		int A=3,B=5;
		bool C;
		char letra1='a', letra2='b';
		int N1=2,N2=2;
		double D1=2.6,D2=5.3;
		char* Pbra1= "Hola";
		char* Pbra2= "Chau";
int main()
{		//Ejemplo Booleano.
		cout<< "-----EJEMPLO BOOLEANO-----\n";
		cout<< "El valor A es: "<< A;
		cout<< "\nEl valor de B es: "<< B;
		cout<< "\nA es Mayor a B?\n";
		C== A>B;
		cout<< boolalpha<< "El resultado es: "<< C;
		cout<< boolalpha<< "\nSi Fuese al Contrario?: "<< not C;
		
		//Ejemplo Variable Char.
		cout<< "\n\n\n-----EJEMPLO VARIABLES CHAR-----\n";
		cout<< "La Primera Letra es: "<< letra1;
		cout<< "\nLa segunda letra es: "<< letra2;
		cout<< "\nLa Primer letra ("<< letra1 << ") es distinta a ("<< letra2<<")";
		cout<< "\nLa segunda letra es ("<< letra2<< ") igual a ("<< letra2<<")";
		
		//Ejemplo Variable int.
		cout<< "\n\n\n-----EJEMPLO INT-----";
		cout<< "\nEl Primer numero de ejemplo es: "<< N1;
		cout<< "\nEl Segundo numero de ejemplo es: "<< N2;
		cout<< "\nLa Suma es: "<< N1+N2;
		cout<< "\nLa Resta es: "<< N1-N2;
		cout<< "\nLa Multiplicacion es: "<< N1*N2;
		cout<< "\nLa Division es: "<< N1/N2;
		
		//Ejemplo Variable double.
		cout<< "\n\n\n-----EJEMPLO DOUBLE-----";
		cout<< "\nEl Primer numero de ejemplo es: "<< D1;
		cout<< "\nEl Segundo numero de ejemplo es: "<< D2;
		cout<< "\nLa Suma es: "<< D1+D2;
		cout<< "\nLa Resta es: "<< D1-D2;
		cout<< "\nLa Multiplicacion es: "<< D1*D2;
		cout<< "\nLa Division es: "<< D1/D2;
		
		//Ejemplo de String.
		cout<< "\n\n\n-----EJEMPLO STRING-----";
		cout<< "\nLa primer Palabra ingresada es: "<<Pbra1;
		cout<< "\nLa segunda Palabra ingresada es: "<<Pbra2;
		cout<< "\nLa cantidad de caracteres de la primer palabra ("<<Pbra1<<") es igual a la de la segunda palabra ("<<Pbra2<<")";		
	}
