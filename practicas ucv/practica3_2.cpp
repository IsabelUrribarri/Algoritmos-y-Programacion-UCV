#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int numero;
    cout << "ingrese un numero de 4 digitos";
    cin >> numero;

    int digit4 = numero % 10;
    int digit3 = (numero / 10) % 10;
    int digit2 = (numero / 100) % 10;
    int digit1 = numero / 1000;

    if (digit1 > digit2 && digit3 > digit4) {
    
        if (digit1 > digit2 && digit2 > digit3 && digit3 > digit4) {
        
        cout << "El numero es muy feliz" << endl;
        } else {
        cout << "El numero es feliz" << endl;
        }
    } else if (digit1 < digit2 && digit2 < digit3 && digit3 < digit4) {
        cout << "El numero es creciente"<< endl;
    } else {
        cout << "El numero es infeliz" << endl;
    }

    return 0;
}