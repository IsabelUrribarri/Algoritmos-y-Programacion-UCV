#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int num1, suma;
    cout << "Ingrese un numero" << endl;

    cin >> num1;
    if(num1 > 99999){
        cout << "No se aceptan numeros mayores de 5 digitos" << endl;
    } else {
        if(num1/10000 != 0){
            cout << "Tiene 5 digitos" << endl;
            return 0;
        } else if((num1/1000) % 10 != 0){
            cout << "Tiene 4 digitos" << endl;
            return 0;
        } else if((num1/100) % 10 != 0){
            cout << "Tiene 3 digitos" << endl;
            return 0;
        } else if((num1/10) % 10!= 0){
            cout << "Tiene 2 digitos" << endl;
            return 0;
        } else {
            cout << "Tiene 1 digito" << endl;
            return 0;
        }
        // suma = num1/10000 + (num1/1000) % 10 + (num1/100) % 10 + (num1/10) % 10 + num1 % 10;
        // cout << "La suma de los digitos es: " << suma << endl;
    }
    
}
