#include <iostream>

using namespace std;

bool esPalindromo(int numero) {
  int invertido = 0, copiaNumero = numero;

  while (copiaNumero > 0) {
    int digito = copiaNumero % 10;
    invertido = invertido * 10 + digito;
    copiaNumero /= 10;
  }

  if (numero == invertido) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int numero;

  cout << "Ingrese un numero: ";
  cin >> numero;

  if (esPalindromo(numero)) {
    cout << numero << " es un numero capicua" << endl;
  } else {
    cout << numero << " no es un numero capicua" << endl;
  }

  return 0;
}