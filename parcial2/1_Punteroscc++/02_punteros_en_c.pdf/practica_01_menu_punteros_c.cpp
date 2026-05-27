#include <iostream> /* Incluye la biblioteca necesaria para std::cout, std::cin y std::endl. */
// Ya no hace falta incluir <stddef.h> porque en C++ usamos nullptr que es nativo.

/* --- 1. Declaración de Funciones (Prototipos) --- */
void duplicar(int *p);
void intercambiar(int *a, int *b);
void analizarNumeros(int a, int b, int c, int *suma, int *mayor, int *menor);

/* --- 2. Función Principal --- */
int main() { /* Función principal del programa (en C++ se omiten los paréntesis vacíos con void). */
    int x = 10;   /* Primera variable de trabajo. */
    int y = 20;   /* Segunda variable de trabajo. */
    int z = 5;    /* Tercera variable de trabajo. */
    
    int *px = &x; /* px guarda la dirección de x. */
    
    int suma;     /* Variable para recibir la suma. */
    int mayor;    /* Variable para recibir el mayor. */
    int menor;    /* Variable para recibir el menor. */
    int opcion;   /* Opción seleccionada por el usuario. */

    do { /* Ciclo principal del menú. */
        std::cout << "\n========== MENU CORTO DE PUNTEROS ==========" << std::endl;
        std::cout << "1. Mostrar x, &x, px y *px" << std::endl;
        std::cout << "2. Duplicar x usando el puntero px" << std::endl;
        std::cout << "3. Intercambiar x y y usando punteros" << std::endl;
        std::cout << "4. Analizar x, y, z usando punteros de salida" << std::endl;
        std::cout << "0. Salir" << std::endl;
        std::cout << "Seleccione una opcion: ";
        
        std::cin >> opcion; /* Lee la opción del usuario utilizando std::cin. */

        switch (opcion) { /* Decide qué acción ejecutar según la opción. */
            case 1:
                std::cout << "\n--- Mostrando Informacion de Memoria ---" << std::endl;
                std::cout << "x   = " << x << std::endl;
                // En C++ usamos static_cast<void*> para imprimir direcciones hexadecimales de forma correcta
                std::cout << "&x  = " << static_cast<void*>(&x) << std::endl;
                std::cout << "px  = " << static_cast<void*>(px) << std::endl;
                std::cout << "*px = " << *px << std::endl;
                break;
                
            case 2:
                std::cout << "\n--- Probando Duplicar ---" << std::endl;
                std::cout << "Antes: x = " << x << std::endl;
                duplicar(px); /* Modifica x usando su dirección guardada en px. */
                std::cout << "Despues: x = " << x << std::endl;
                break;
                
            case 3:
                std::cout << "\n--- Probando Intercambiar ---" << std::endl;
                std::cout << "Antes: x = " << x << ", y = " << y << std::endl;
                intercambiar(&x, &y); /* Envía las direcciones de x y y. */
                std::cout << "Despues: x = " << x << ", y = " << y << std::endl;
                break;
                
            case 4:
                std::cout << "\n--- Probando Analisis Completo ---" << std::endl;
                std::cout << "Variables a analizar: x = " << x << ", y = " << y << ", z = " << z << std::endl;
                analizarNumeros(x, y, z, &suma, &mayor, &menor); /* Envía valores y direcciones de salida. */
                std::cout << "Suma  = " << suma << std::endl;
                std::cout << "Mayor = " << mayor << std::endl;
                std::cout << "Menor = " << menor << std::endl;
                break;
                
            case 0:
                std::cout << "\nFin del programa. ¡Hasta luego!" << std::endl;
                break;
                
            default:
                std::cout << "\nOpcion no valida. Intente de nuevo." << std::endl;
                break;
        }
    } while (opcion != 0); /* Repite el ciclo mientras no se seleccione salir. */

    return 0; /* Finalización exitosa. */
}

/* --- 3. Definición de Funciones --- */

/**
 * Recibe la dirección de un entero y duplica su contenido en memoria.
 */
void duplicar(int *p) { /* Recibe la dirección de un entero. */
    if (p != nullptr) { /* En C++ se prefiere usar nullptr en lugar de la macro NULL. */
        *p = (*p) * 2; /* Duplica el valor almacenado en la dirección apuntada. */
    }
}

/**
 * Intercambia el contenido de dos variables utilizando sus direcciones de memoria.
 */
void intercambiar(int *a, int *b) { /* Recibe dos direcciones de enteros. */
    if (a == nullptr || b == nullptr) { /* Verifica que ambas direcciones sean válidas con nullptr. */
        return; /* Sale si alguna dirección no es válida. */
    }
    int temp = *a; /* Guarda temporalmente el contenido apuntado por a. */
    *a = *b;       /* Copia en a el contenido apuntado por b. */
    *b = temp;     /* Copia en b el valor temporal. */
}

/**
 * Calculates la suma, el mayor y el menor de tres números, y escribe los resultados
 * en las variables originales del main mediante punteros de salida.
 */
void analizarNumeros(int a, int b, int c, int *suma, int *mayor, int *menor) {
    if (suma == nullptr || mayor == nullptr || menor == nullptr) { /* Verifica direcciones. */
        return; /* Sale si alguna dirección no es válida. */
    }

    *suma = a + b + c; /* Escribe la suma en la dirección recibida. */

    /* Algoritmo para encontrar el mayor */
    *mayor = a; /* Supone inicialmente que a es el mayor. */
    if (b > *mayor) {
        *mayor = b; /* Actualiza el mayor. */
    }
    if (c > *mayor) {
        *mayor = c; /* Actualiza el mayor. */
    }

    /* Algoritmo para encontrar el menor */
    *menor = a; /* Supone inicialmente que a es el menor. */
    if (b < *menor) {
        *menor = b; /* Actualiza el menor. */
    }
    if (c < *menor) {
        *menor = c; /* Actualiza el menor. */
    }
}
