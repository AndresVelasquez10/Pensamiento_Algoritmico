#include <iostream>
using namespace std;

int main()
{
    int num,num2;
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << "Ingrese un numero: ";
    cin >> num2;

    int suma = num + num2;
    int resta = num - num2;
    int multiplicacion = num * num2;
    int modulo = num % num2;

    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multiplicacion es: " << multiplicacion << endl;
    cout << "El modulo es: " << modulo << endl;

}
