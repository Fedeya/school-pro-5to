#include <iostream>

using namespace std;

int main() {
    
    int n;
    
    cout << "Ingresa el numero: ";
    cin >> n;
    
    cout << "Decena: " << n / 10 << endl;
    cout << "Unidades: " << n - ((n / 10) * 10) << endl;
    
}
