#include<iostream>
using namespace std;

    /*Un comercio vende tres marcas de alfajores distintas A, B y C.
    Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de las tres marcas
    y luego se informe el porcentaje de ventas para cada una de ellas.
    Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.
    */

int main (){

    float A, B, C, maximo;
    float porcA, porcB, porcC;

    cout << "Ingrese la cantidad de alfajores A vendidos: ";
    cin >> A;
    cout << "Ingrese la cantidad de alfajores B vendidos: ";
    cin >> B;
    cout << "Ingrese la cantidad de alfajores C vendidos: ";
    cin >> C;

    maximo = A + B + C;
    porcA = (A * 100) / maximo;
    porcB = (B * 100) / maximo;
    porcC = (C * 100) / maximo;

    cout << "El porcentaje de alfajores de A es: " << porcA << "%" << endl;
    cout << "El porcentaje de alfajores de B es: " << porcB << "%" << endl;
    cout << "El porcentaje de alfajores de C es: " << porcC << "%" << endl;

	return 0;
}
