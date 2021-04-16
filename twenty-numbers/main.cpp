#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int number, positives = 0, negatives = 0, nulls = 0;
    
    for (int i = 0; i < 20; i++) {
        cout << "[" << i + 1 << "] " << "Ingresa un numero: ";
        cin >> number;
        
        if (number > 0) {
            positives++;
        } else if (number < 0) {
            negatives++;
        } else {
            nulls++;
        }
    }
    
    cout << endl << "Positivos: " << positives << endl;
    cout << "Negativos: " << negatives << endl;
    cout << "Nulos: " << nulls << endl;
}
