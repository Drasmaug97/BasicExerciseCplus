#include<iostream>
using namespace std;

    /*
    Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de descuento aplicada a la misma y luego informar por pantalla el importe a pagar.
    Ejemplo A. Si el importe de la venta es $1200 y el descuento es el 15% entonces el total a pagar ser� de $1020.
    Ejemplo B. Si el importe de la venta es $800 y el descuento es el 0% entonces el total a pagar ser� de $800.
    */

int main (){

    int importe, descuento, importeDescontado, importeTotal;

    cout << "Ingrese el importe: $";
    cin >> importe;
    cout << "Ingrese el descuento: ";
    cin >> descuento;

    importeDescontado = (importe * descuento) / 100;
    importeTotal = importe - importeDescontado;

    cout << "El importe final es: $" << importeTotal;

	return 0;
}
