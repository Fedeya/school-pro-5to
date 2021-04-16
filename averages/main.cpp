//
//  main.cpp
//  averages
//
//  Created by Federico Minaya on 16/04/2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int note, shortNote = 0, average = 0;
    
    for (int i = 0; i < 40; i++) {
        cout << "[" << i + 1 << "] " << "Ingresa la nota del alumno: ";
        cin >> note;
        
        if (i == 0) {
            shortNote = note;
        }
        
        if (note < shortNote) {
            shortNote = note;
        }
        
        average += note;
    }
    
    average = average / 40;
    
    cout << "Promedio: " << average << endl;
    cout << "Nota mas baja: " << shortNote << endl;
    
    return 0;
}
