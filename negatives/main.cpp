//
//  main.cpp
//  negatives
//
//  Created by Federico Minaya on 16/04/2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int number;
    
    for (int i = 0; i < 15; i++) {
        cout << "[" << i + 1 << "] " << "Ingresa un numero: ";
        cin >> number;
        
        if (number < 0) {
            number = number * -1;
        }
        
        cout << "Positivo: " << number << endl;
    }
}
