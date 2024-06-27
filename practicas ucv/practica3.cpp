#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int numero1, numero2, numeroMayor;
    cout << "ingrese un numero" << endl;
    cin >> numero1;
    cout << "ingrese otro numero" << endl;
    cin >> numero2;

    if (numero1 > numero2) {
    
    numeroMayor = numero1;   
    } else {
    
    numeroMayor = numero2;
    }

    cout << "El numero mayor es:" << numeroMayor << endl;

    return 0;
}