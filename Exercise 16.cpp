#include<iostream>
using namespace std;

    /*
    El Laboratorio V&V hace frascos de píldoras para aprender a programar.
    Cada frasco contiene 75 píldoras y cada píldora contiene 45 mg de Betamol, 2 grs de Micilina y 7 mg de Ácido Sinítico.
    Nos solicitan un programa donde se ingrese la cantidad de frascos de un pedido y
    muestre la cantidad de miligramos de Betamol, Micilina y de Ácido Sinítico que son necesarios para elaborarlos.
    */

int main (){
    int frascos, pildoras = 75, betamol = 45, micilina = 2, acidoSinitico = 7;
    int totalBetamol, totalMicilina, totalAcido;

    totalBetamol = pildoras * betamol;
    totalMicilina = pildoras * micilina;
    totalAcido = pildoras * acidoSinitico;

    cout << "Ingrese la cantidad de frascos a pedir: ";
    cin >> frascos;

    totalBetamol = frascos * totalBetamol;
    totalMicilina = frascos * totalMicilina;
    totalAcido = frascos * totalAcido;

    cout << endl << "La cantidad de Betamol es " << totalBetamol << " mg, ";
    cout << "de Micilina es " << totalMicilina << " grs, ";
    cout << "de Acido Sinitico es " << totalAcido << " mg." << endl;

	return 0;
}
