#include<iostream>
using namespace std;

    /*
    Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cu�ntos d�as, horas y minutos equivalen.
    Ejemplo A: si se ingresan 1520 minutos el programa mostrar� por pantalla que equivalen a 1 d�a, 1 hora y 20 minutos.
    Ejemplo B: si se ingresan 480 minutos el programa mostrar� por pantalla que equivalen a 0 d�a, 8 horas y 0 minutos.
    */

int main (){
    int minutos, horas, dias;
    cout << "Ingrese la cantidad de minutos: ";
    cin >> minutos;

    horas = minutos / 60;
    minutos -= 60 * horas;
    dias = horas / 24;
    horas -= dias * 24;

    cout << "Son en total: " << dias << " dias, " << horas << " hora/s y " << minutos << " minuto/s";


	return 0;
}
