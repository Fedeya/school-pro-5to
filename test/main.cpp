#include <iostream>
    
using namespace std;

int main() {
    
    int a, b, c;
    
    cout << "Ingresa el lado A: ";
    cin >> a;
    
    cout << "Ingresa el lado B: ";
    cin >> b;
    
    cout << "Ingresa el lado C: ";
    cin >> c;
    
    if (a == b && a == c) {
        cout << "Es un triangulo equilatero" << endl;
    } else if ((a == b && a != c) || (a == c && a != b)) {
        cout << "es un triangulo isosceles" << endl;
    } else {
        cout << "Es un triangulo escaleno" << endl;
    }
    
    
    
}
