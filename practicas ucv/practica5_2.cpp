#include <iostream>
#include <math.h>   

using namespace std;

int digitos(int num1) 
{
    int max = 10;
    for(int i = max; i >= 0; i--)
    {
    cout << "calculo de digitos" << num1/pow(10,i)<< endl;
        if(num1/pow(10,i) != 0)
        {
            return i;
        }
    }
    return 1;
}

int extraer(int numero, int k)
{
    int subNumero = 0, digits, exponente;

    if(k > digitos(numero)){
        cout << "El numero es muy pequeno para obtener " << k << "digitos" << endl;
        return 0;
    }
    digits = digitos(numero);
    cout << "Digits es: " << digits << endl;
    exponente = digits - k;
    cout << "el exponente es: "<< exponente <<  endl;
    return numero/pow(10,exponente);
    // for(int i = 0; i < k; i++)
    // {
    //     if(subNumero == 0)
    //     {
    //         subNumero = numero/10^digits;
    //     }
    //     else
    //     {
    //         subNumero = subNumero*10 + numero/10^digits;
    //     }
    //     digits--;
    // }

}

int main()
{
    int n, k;
    cout << "Ingrese un numero N" << endl;
    cin >> n;
    cout << "Ingrese un numero K" << endl;
    cin >> k;
    cout << "El numero es: " << extraer(n, k) << endl;
}