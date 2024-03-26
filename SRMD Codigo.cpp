#include <iostream>

using namespace std;

int main() {
    float num1, num2;
    cout << "Bienvenido \n";
    cout << "Por favor siga las instrucciones para los calculos \n";
    
    cout << "Ingrese el primer número: ";
    cin >> num1;
    
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    
    cout << "El resultado de la ";
    // Suma
    cout << "Suma: " << num1 + num2 << endl;
    
    cout << "El resultado de la ";
    // Resta
    cout << "Resta: " << num1 - num2 << endl;
    
    cout << "El resultado de la ";
    // Multiplicación
    cout << "Multiplicación: " << num1 * num2 << endl;
    
    cout << "El resultado de la ";
    // División
    if (num2 != 0) {
        cout << "División: " << num1 / num2 << endl;
    } else {
        cout << "No es posible dividir entre cero." << endl;
    }
    
    return 0;
}
