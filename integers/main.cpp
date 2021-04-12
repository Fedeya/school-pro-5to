#include <iostream>

using namespace std;

int main() {
    
    int n;
    
    cout << "Ingresa el numero: ";
    cin >> n;
    
    if (n < 0) {
        cout << "El numero es negativo" << endl;
    } else if (n > 0) {
        cout << "El numero es positivo" << endl;
    } else {
        cout << "El numero es nulo" << endl;
    }
    
}
