#include <iostream> 
void duplicar(int *p);
void intercambiar(int *a, int *b);
void analizarNumeros(int a, int b, int c, int *suma, int *mayor, int *menor);
int main() { 
    int x = 10;   
    int y = 20;   
    int z = 5;   
    int *px = &x; 
    int suma;    
    int mayor;   
    int menor;    
    int opcion;  

    do { 
        std::cout << "\n========== MENU CORTO DE PUNTEROS ==========" << std::endl;
        std::cout << "1. Mostrar x, &x, px y *px" << std::endl;
        std::cout << "2. Duplicar x usando el puntero px" << std::endl;
        std::cout << "3. Intercambiar x y y usando punteros" << std::endl;
        std::cout << "4. Analizar x, y, z usando punteros de salida" << std::endl;
        std::cout << "0. Salir" << std::endl;
        std::cout << "Seleccione una opcion: ";
        
        std::cin >> opcion; 
switch (opcion) { 
    case 1:
                std::cout << "\n--- Mostrando Informacion de Memoria ---" << std::endl;
                std::cout << "x   = " << x << std::endl;
               
                std::cout << "&x  = " << static_cast<void*>(&x) << std::endl;
                std::cout << "px  = " << static_cast<void*>(px) << std::endl;
                std::cout << "*px = " << *px << std::endl;
                break;
                
        case 2:
                std::cout << "\n--- Probando Duplicar ---" << std::endl;
                std::cout << "Antes: x = " << x << std::endl;
                duplicar(px); 
                std::cout << "Despues: x = " << x << std::endl;
                break;
                
        case 3:
                std::cout << "\n--- Probando Intercambiar ---" << std::endl;
                std::cout << "Antes: x = " << x << ", y = " << y << std::endl;
                intercambiar(&x, &y); 
                std::cout << "Despues: x = " << x << ", y = " << y << std::endl;
                break;
                
            case 4:
                std::cout << "\n--- Probando Analisis Completo ---" << std::endl;
                std::cout << "Variables a analizar: x = " << x << ", y = " << y << ", z = " << z << std::endl;
                analizarNumeros(x, y, z, &suma, &mayor, &menor); 
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
    } while (opcion != 0); 

    return 0; 
}
void duplicar(int *p) { 
    if (p != nullptr) { 
        *p = (*p) * 2; 
    }
}
void intercambiar(int *a, int *b) { 
    if (a == nullptr || b == nullptr) { 
        return;
    }
    int temp = *a;
    *a = *b;      
    *b = temp;    
}
void analizarNumeros(int a, int b, int c, int *suma, int *mayor, int *menor) {
    if (suma == nullptr || mayor == nullptr || menor == nullptr) { 
        return; 
    }

    *suma = a + b + c; 
    *mayor = a;
    if (b > *mayor) {
        *mayor = b;
    }
    if (c > *mayor) {
        *mayor = c; 
    }

    *menor = a; 
    if (b < *menor) {
        *menor = b; 
    }
    if (c < *menor) {
        *menor = c;
    }
}
