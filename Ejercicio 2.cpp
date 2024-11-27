#include<iostream>
using namespace std;

    /*
    Hacer un programa que solicite por teclado que se ingresen dos números y luego guardarlos en dos variables distintas.
    A continuación se deben intercambiar mutuamente los valores en ambas variables y mostrarlos por pantalla.
    Ejemplo: Suponiendo que se ingresan 3 y 8 como valores
    y que la variables usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.
    */

int main (){
    int n1, n2, aux;

    cout << "Ingrese el primer numero: " << endl;
    cin >> n1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> n2;

    aux = n2;
    n2 = n1;
    n1 = aux;

    cout << "Invirtiendo los numero sería: " << endl;
    cout << "Primer numero " << n1 << endl;
    cout << "Segundo numero " << n2;

	return 0;
}
