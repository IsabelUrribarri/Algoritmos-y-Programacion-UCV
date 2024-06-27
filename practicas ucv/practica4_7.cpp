#include <iostream>
using namespace std;

int main() {
    cout << "Fichas de dominó:" << endl;

    for (int i = 0; i <= 6; i++) {
        for (int j = i; j <= 6; j++) {
            cout << "[" << i << "|" << j << "] ";
        }
        cout << endl;
    }

    return 0;
}
