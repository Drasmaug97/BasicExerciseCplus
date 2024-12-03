#include<iostream>
using namespace std;

    /*
    Hacer un programa para un cajero autom�tico para ingresar un importe a retirar y convertir el mismo en la cantidad de billetes de $1.000, $500, $200 y $100 a entregar.

    Ejemplo A: Si el importe a retirar es $2500
    se mostrar� por pantalla que se deber�n entregar 2 billetes de $1.000, 1 billete de $500,  0 billetes de $200 y 0 billetes de $100.

    Ejemplo B: Si el importe a retirar es $3400
    se mostrar� por pantalla que se deber�n entregar 3 billetes de $1.000, 2 billetes de $200, 0 billetes de $500 y 0 billetes de $100.

    Ejemplo C: Si el importe a retirar es $300
    se mostrar� por pantalla que se deber�n entregar 1 billete de $200, 1 billete de $100, 0 billetes de $1.000 y 0 billetes de $500.

    Recordatorio. Considerar en todos los casos que el importe a retirar es en todos los casos m�ltiplo de $100 ya que el cajero no cuenta con billetes de $50, $20 o $10.
    */

int main (){
    int importe, billeteMil, billeteQuinientos, billeteDocientos, billeteCien;

    cout << "�Cuanto dinero quiere retirar?: $";
    cin >> importe;

    billeteMil = importe / 1000;
    importe -= billeteMil * 1000;

    billeteQuinientos = importe / 500;
    importe -= billeteQuinientos * 500;

    billeteDocientos = importe / 200;
    importe -= billeteDocientos * 200;

    billeteCien = importe / 100;
    importe -= billeteCien * 100;

    cout << "Se dara " << billeteMil << " billetes de $1000, ";
    cout << billeteQuinientos << " billetes de $500, ";
    cout << billeteDocientos << " billetes de $200, ";
    cout << "y " << billeteCien << " billetes de $100";

	return 0;
}
