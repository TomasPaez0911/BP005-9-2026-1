#include <iostream>
using namespace std;
int esAprobado(float nota);

int main() {
    float nota = 3.7;
    int resultado;

    resultado = esAprobado(nota);

    if (resultado == 1) {
        cout << "La nota " << nota << " es aprobatoria." << endl;
    } else {
        cout << "La nota " << nota << " no es aprobatoria." << endl;
    }

    return 0;
}
int esAprobado(float nota) {
    if (nota >= 3.0) {
        return 1;
    } else {
        return 0;
    }
}
