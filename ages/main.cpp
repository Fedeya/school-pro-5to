//
//  main.cpp
//  ages
//
//  Created by Federico Minaya on 16/04/2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int age = 0, count = 0;
    
    do {
        cout << "Ingresa la edad del alumno de primaria: ";
        cin >> age;
        count++;
    } while (age >= 5);
    
    do {
        cout << "Ingresa la edad del alumno de 2do grado: ";
        cin >> age;
        if (age == 8 || age == 7) {
            count++;
        }
    } while(age != 0);
    
    cout << "Cantidad de edades ingresadas: " << count << endl;
    
}
