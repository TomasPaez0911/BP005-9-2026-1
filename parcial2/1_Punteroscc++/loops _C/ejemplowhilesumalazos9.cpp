#include <iostream>
using namespace std;
int main(){
    int contador = 1, numero, suma = 0;
    while(contador <= 3){
        cin >> numero;
        suma += numero;
        contador++;
    }
    cout << "La suma es: " << suma;
    return 0;
}
