#include <iostream>
#include <math.h>

using namespace std;
int digitos(int num1) 
{
    int max = 4;
    for(int i = max; i >= 0; i--)
    {
        if(num1/10^i != 0)
        {
            return i;
        }
    }
    return 1;
}
    
int main() {
    int num, num1, num2, num3, num4;
        cout << "Ingrese un numero" << endl;
        cin >> num;


    if(num > 9999){
        cout << "No se aceptan numeros mayores de 4 digitos" << endl;
        return 0;
    } 
    else 
    {
        cout << "El numero de digitos es: "<< digitos(num) << endl;
        if(digitos(num) == 4)
        {
            num1 = num/1000;
            num2 = num/100 % 10;
            num3 = num/10 % 10;
            num4 = num % 10;
            if(num1 == num4 && num2 == num3) 
            {
                cout << "El numero es capicua" << endl;
            } 
            else
            {
                cout << "El numero no es capicua" << endl;
            }
        }
        else if(digitos(num) == 3) 
        {
            num1 = num/100;
            num2 = num/10 % 10;
            num3 = num % 10;
            if(num1 == num3) 
            {
                cout << "El numero es capicua" << endl;
            } 
            else
            {
                cout << "El numero no es capicua" << endl;
            }
        }
        
    }
}


 // if(num1 > 99999)
    // {
    //     cout << "No se aceptan numeros mayores de 5 digitos" << endl;
    // } 
    // else 
    // {
    //     if(num1/10000 != 0)
    //     {
    //         cout << "Tiene 5 digitos" << endl;
    //         return 5;
    //     } 
    //     else if((num1/1000) % 10 != 0)
    //     {
    //         cout << "Tiene 4 digitos" << endl;
    //         return 4;
    //     } 
    //     else if((num1/100) % 10 != 0)
    //     {
    //         cout << "Tiene 3 digitos" << endl;
    //         return 3;
    //     } 
    //     else if((num1/10) % 10!= 0)
    //     {
    //         cout << "Tiene 2 digitos" << endl;
    //         return 2;
    //     } 
    //     else 
    //     {
    //         cout << "Tiene 1 digito" << endl;
    //         return 1;
    //     }
    // }