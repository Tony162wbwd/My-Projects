#include <iostream>  // Incluir la librería para entradas y salidas estándar
#include <conio.h>   // Incluir la librería para usar funciones como getch() (no necesaria en todos los entornos)

using namespace std;

int main() {
    int opc;             // Variable para almacenar la opción seleccionada por el usuario
    float n1 = 0, n2 = 0, result = 0;  // Variables para almacenar los dos números ingresados y el resultado

    // Ciclo do-while para mostrar el menú y permitir que el usuario elija operaciones hasta que decida salir
    do {
        // Mostrar el menú de opciones de la calculadora
        cout << "\t\nCalculadora" << endl;
        cout << "1. Suma" << endl;   // Opción para sumar
        cout << "2. Resta" << endl;  // Opción para restar
        cout << "3. Multiplicación" << endl;  // Opción para multiplicar
        cout << "4. División" << endl;  // Opción para dividir
        cout << "5. Salir" << endl;  // Opción para salir del programa
        cout << "Selecciona una opción: ";  // Mensaje pidiendo al usuario que elija una opción
        cin >> opc;  // Leer la opción seleccionada por el usuario

        // Si la opción seleccionada está entre 1 y 4, solicitar los dos números
        if(opc >= 1 && opc <= 4) {
            cout << "Introduce un número: ";  // Solicitar el primer número
            cin >> n1;  // Leer el primer número
            cout << "Introduce otro número: ";  // Solicitar el segundo número
            cin >> n2;  // Leer el segundo número
        }

        // Estructura de control switch para ejecutar la operación seleccionada
        switch(opc) {
            case 1:  // Caso de la suma
                result = n1 + n2;  // Sumar los dos números
                cout << result;  // Mostrar el resultado
                break;
            case 2:  // Caso de la resta
                result = n1 - n2;  // Restar los dos números
                cout << result;  // Mostrar el resultado
                break;
            case 3:  // Caso de la multiplicación
                result = n1 * n2;  // Multiplicar los dos números
                cout << result;  // Mostrar el resultado
                break;
            case 4:  // Caso de la división
                if(n2 == 0) {  // Verificar si el divisor es cero
                    cout << "Error. No se puede dividir entre cero.";  // Mostrar un mensaje de error si n2 es cero
                } else {
                    result = n1 / n2;  // Dividir los dos números
                    cout << result;  // Mostrar el resultado
                }
                break;
            case 5:  // Caso de salir
                break;  // Salir del ciclo (termina el programa)
            default:  // Si se ingresa una opción no válida
                cout << "Por favor, introduce una opción válida.";  // Mostrar mensaje de error
        }
    } while(opc != 5);  // El ciclo se repite mientras la opción seleccionada no sea 5 (salir)

    getch();  // Esperar a que el usuario presione una tecla (no necesario en todos los entornos)
    return 0;  // Fin del programa
}
