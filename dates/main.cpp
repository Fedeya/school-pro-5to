#include <iostream>

using namespace std;

int main() {
    
    int day, month;
    
    cout << "Ingresa el dia: ";
    cin >> day;
    
    if (day > 31 || day < 1) {
        cout << "Dia invalido" << endl;
        return 0;
    }
    
    cout << "Ingresa el mes: ";
    cin >> month;
    
    if (month > 12 || month < 0) {
        cout << "Mes invalido" << endl;
        return 0;
    }
    
    cout << "Fecha valida" << endl;
    
}
