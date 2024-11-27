#include<iostream>
using namespace std;

        /*Hacer un programa para ingresar por teclado la cantidad de horas trabajadas
        por un operario y el valor que se le paga por hora trabajada
        y listar por pantalla el sueldo que le corresponda.*/

int main (){
    int horas, sueldoxHora = 15, sueldoFinal;
    cout << "El sueldo por hora es de $15" << endl;
    cout << "Ingrese sus horas trabajadas: ";
    cin >> horas;
    sueldoFinal = horas * sueldoxHora;
    cout << "Su sueldo final es: $" << sueldoFinal;

	return 0;
}
