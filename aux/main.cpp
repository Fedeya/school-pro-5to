#include <iostream>

using namespace std;

int main() {
    int s, p, aux;
    
    cout << "Ingrese el valor de S: ";
    cin >> s;
    
    cout << "Ingrese el valor de P: ";
    cin >> p;
    
    aux = p;
    p = s;
    s = aux;
    
    cout << "S: " << s << " P: " << p << endl;
    
}
