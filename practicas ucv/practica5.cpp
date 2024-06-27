#include <iostream>
#include <math.h>

using namespace std;

float convertirMillas(float millas) {

    return millas * 1.6;
}

void ciudadesYDistancias(char ciudad1[], char ciudad2[], float &distancia) {

   cin >> ciudad1 >> ciudad2 >> distancia;
}

bool continuar(char ciudad1[], char ciudad2[], float distancia) {

    int i = 0;
    bool nombresIguales = true;
    while (ciudad1[i] != '\0' || ciudad2[i] != '\0') {
        if (ciudad1[i] != ciudad2[i]) {
            nombresIguales = false;
            break;
        }
        i++;
    }
    return !(nombresIguales && distancia == 0);
}

int main() {
    char ciudad1[100], ciudad2[100];
    float distancia;

    bool seguir = true;
    while (seguir) {
        ciudadesYDistancias(ciudad1, ciudad2, distancia);
        seguir = continuar(ciudad1, ciudad2, distancia);
        if (seguir) {
            float distanciaKm = convertirMillas(distancia);
            cout << ciudad1 << " " << ciudad2 << ": " << distanciaKm << endl;
        }
    }

    return 0;
}