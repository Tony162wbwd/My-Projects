
#include <iostream>  // Incluir la librería para entradas y salidas estándar
#include <math.h>     // Incluir la librería para funciones matemáticas avanzadas
using namespace std;

int main() {
    int opc;             // Variable para almacenar la opción seleccionada por el usuario
    float n1 = 0, n2 = 0, result = 0;  // Variables para almacenar los dos números ingresados y el resultado

    do { 
        // Mostrar el menú de opciones de la calculadora
        cout << "\t\nCalculadora" << endl;
        cout << "1. Suma" << endl;   // Opción para sumar
        cout << "2. Resta" << endl;  // Opción para restar
        cout << "3. Multiplicación" << endl;  // Opción para multiplicar
        cout << "4. División" << endl;  // Opción para dividir
        cout << "5. Potencia" << endl;  // Opción para calcular la potencia
        cout << "6. Raíz Cuadrada" << endl;  // Opción para calcular la raíz cuadrada
        cout << "7. Módulo" << endl;  // Opción para calcular el módulo
        cout << "8. Salir" << endl;  // Opción para salir del programa
        cout << "Selecciona una opción: ";  // Mensaje pidiendo al usuario que elija una opción
        cin >> opc;  // Leer la opción seleccionada por el usuario

        // Si la opción seleccionada requiere dos números, solicitarlos
        if(opc >= 1 && opc <= 3 || opc == 5 || opc == 7) {
            cout << "Introduce un número: ";  // Solicitar el primer número
            cin >> n1;  // Leer el primer número
            cout << "Introduce otro número: ";  // Solicitar el segundo número
            cin >> n2;  // Leer el segundo número
        }

        switch(opc) {
            case 1:  // Caso de la suma
                result = n1 + n2;  // Sumar los dos números
                cout << "Resultado: " << result << endl;  // Mostrar el resultado
                break;
            case 2:  // Caso de la resta
                result = n1 - n2;  // Restar los dos números
                cout << "Resultado: " << result << endl;  // Mostrar el resultado
                break;
            case 3:  // Caso de la multiplicación
                result = n1 * n2;  // Multiplicar los dos números
                cout << "Resultado: " << result << endl;  // Mostrar el resultado
                break;
            case 4:  // Caso de la división
                if(n2 == 0) {  // Verificar si el divisor es cero
                    cout << "Error. No se puede dividir entre cero." << endl;  // Mostrar un mensaje de error si n2 es cero
                } else {
                    result = n1 / n2;  // Dividir los dos números
                    cout << "Resultado: " << result << endl;  // Mostrar el resultado
                }
                break;
            case 5:  // Caso de la potencia
                result = pow(n1, n2);  // Calcular la potencia
                cout << "Resultado: " << result << endl;  // Mostrar el resultado
                break;
            case 6:  // Caso de la raíz cuadrada
                cout << "Introduce un número: ";  // Solicitar el número
                cin >> n1;  // Leer el número
                if(n1 < 0) {  // Verificar si el número es negativo
                    cout << "Error. No se puede calcular la raíz cuadrada de un número negativo." << endl;
                } else {
                    result = sqrt(n1);  // Calcular la raíz cuadrada
                    cout << "Resultado: " << result << endl;  // Mostrar el resultado
                }
                break;
            case 7:  // Caso del módulo
                result = fmod(n1, n2);  // Calcular el módulo
                cout << "Resultado: " << result << endl;  // Mostrar el resultado
                break;
            case 8:  // Caso de salir
                cout << "Saliendo del programa..." << endl;
                break;  // Salir del ciclo (termina el programa)
            default:  // Si se ingresa una opción no válida
                cout << "Por favor, introduce una opción válida." << endl;  // Mostrar mensaje de error
        }
    } while(opc != 8);  // El ciclo se repite mientras la opción seleccionada no sea 8 (salir)

    return 0;  // Fin del programa
}
