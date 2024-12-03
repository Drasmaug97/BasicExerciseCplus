#include<iostream>
using namespace std;

    /*
    Hacer un programa para ingresar el importe de una compra y el descuento a aplicar.
    Listar por pantalla, el importe sin descuento, el descuento aplicado y el importe total a cobrar.
    Ejemplo: se ingresa importe 4500, descuento 40; se deberá mostrar
    Importe: 4500, Descuento: 1800, total: 2700.
    */

int main (){

    int importe, descuento, descuentoNumero, total;

    cout << "Ingrese el importe: ";
    cin >> importe;

    cout << "Ingrese el descuento: ";
    cin >> descuento;

    descuentoNumero = (descuento * importe) / 100;
    total = importe - descuentoNumero;

    cout << "Importe: $" << importe << endl;
    cout << "Descuento: $" << descuentoNumero  << endl;
    cout << "Total: $" << total << endl;

	return 0;
}
