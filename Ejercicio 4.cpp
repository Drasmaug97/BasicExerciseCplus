#include<iostream>
using namespace std;

    /*
    Hacer un programa para ingresar por teclado la cantidad de asientos totales en un avi�n y la cantidad de pasajes ocupados
    y luego calcular e informar el porcentaje de ocupaci�n y el porcentaje de no ocupaci�n del mismo.
    Ejemplo si el avi�n tiene 200 asientos totales y se vendieron 80 pasajes,
    el porcentaje de ocupaci�n que se informar� ser� de un 40% y el porcentaje de no ocupaci�n ser� de un 60%.
    */

int main (){
    float cantAsientos, cantidadPasajes;
    float porcOcupado, porcDesocupado;

    cout << "Ingrese la cantidad de asientos del avion: ";
    cin >> cantAsientos;
    cout << "Ingrese la cantidad de pasajes ocupados: ";
    cin >> cantidadPasajes;

    porcOcupado = (cantidadPasajes * 100) / cantAsientos;
    porcDesocupado = 100 - porcOcupado;

    cout << "El porcentaje de asientos ocupados es: " << porcOcupado << "%" << endl;
    cout << "El porcentaje de asientos desocupados es: " << porcDesocupado << "%";

	return 0;
}
