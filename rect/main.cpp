#include <iostream>

using namespace std;

int main() {
    int width, height;
    
    cout << "Ingrese la altura: ";
    cin >> height;
    
    cout << "Ingrese el ancho: ";
    cin >> width;
    
    cout << "Superficie: " << height * width << " Perimetro: " << height * 2 + width * 2 << endl;
    
    
}
