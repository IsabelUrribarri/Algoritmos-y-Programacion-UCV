#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int numero, invertido = 0;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero < 1000 || numero > 9999) {
    
    cout << "El numero debe tener 4 digitos" << endl;
    return 1;

    }

    int digito1 = numero % 10;
    int digito2 = (numero / 10) % 10;
    int digito3 = (numero / 100) % 10;
    int digito4 = numero / 1000; 

    invertido = digito1 * 1000 + digito2 * 100 + digito3 * 10 + digito4;

    cout << "El numero invertido es: " << invertido << endl;
}