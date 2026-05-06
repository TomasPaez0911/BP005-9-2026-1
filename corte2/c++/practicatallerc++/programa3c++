#include <iostream>
using namespace std;

/* PROTOTIPOS */
int esAprobado(float nota);
void mostrarMensaje(float nota, int resultado);

int main() {

    float nota;
    int resultado;

    cout << "Digite la nota: ";
    cin >> nota;

    resultado = esAprobado(nota);
    mostrarMensaje(nota, resultado);

    return 0;
}

int esAprobado(float nota) {
    if(nota >= 3.0)
        return 1;
    else
        return 0;
}

void mostrarMensaje(float nota, int resultado) {
    if(resultado == 1)
        cout << "La nota " << nota << " es aprobatoria" << endl;
    else
        cout << "La nota " << nota << " NO es aprobatoria" << endl;
}
