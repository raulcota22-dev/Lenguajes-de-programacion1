#include <iostream>

using namespace std;

int main() {
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad <=0) {
        cout << "Error: La edad no puede ser negativa." << endl;
    } else if (edad >= 18) {
        cout << "Eres MAYOR de edad felicidades." << endl;
    } else {
        cout << "Eres MENOR de edad intenta en unos años." << endl;
    }

    return 0;
}