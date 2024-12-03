#include<iostream>
using namespace std;

    /*
    Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada una de las cuatro semanas del mes.
    El programa debe listar la recaudación promedio por semana y el porcentaje de recaudación por semana.
    Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listará como recaudación promedio $2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.
    */

int main (){

    int recaudacion1, recaudacion2, recaudacion3, recaudacion4, total;
    int porc1, porc2, porc3, porc4, promedio;

    cout << "Ingrese la recaudacion de la primer semana: $";
    cin >> recaudacion1;
    total += recaudacion1;

    cout << "Ingrese la recaudacion de la segunda semana: $";
    cin >> recaudacion2;
    total += recaudacion2;

    cout << "Ingrese la recaudacion de la tercera semana: $";
    cin >> recaudacion3;
    total += recaudacion3;

    cout << "Ingrese la recaudacion de la cuarta semana: $";
    cin >> recaudacion4;
    total += recaudacion4;

    porc1 = recaudacion1 * 100 / total;
    cout << "Los porcentajes son: " << porc1 << "%, ";

    porc2 = recaudacion2 * 100 / total;
    cout << porc2 << "%, ";

    porc3 = recaudacion3 * 100 / total;
    cout << porc3 << "%, ";

    porc4 = recaudacion4 * 100 / total;
    cout << "y " << porc4 << "%" << endl;

    promedio = total / 4;

    cout << "El promedio es: " << promedio;

	return 0;
}
