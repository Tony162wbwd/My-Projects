/*===============================================
|        SISTEMA DE GESTION DE CUENTAS BANCARIAS       |
=================================================*/

#include <iostream>  // Libreria para entrada y salida de datos
#include <fstream>   // Libreria para manejo de archivos
#include <vector>    // Libreria para manejo de vectores
#include <string>    // Libreria para manejo de cadenas de texto
#include <iomanip>   // Libreria para manipular la salida numerica

using namespace std;

// ===============================
// |   ESTRUCTURA DE LA CUENTA   |
// ===============================
// Define la estructura Cuenta con los atributos necesarios
struct Cuenta {
    string numeroCuenta;  // Numero de la cuenta bancaria
    string nombreTitular; // Nombre del titular de la cuenta
    double saldo;         // Saldo disponible en la cuenta
};

// =====================================
// |    FUNCION PARA MOSTRAR EL MENU   |
// =====================================
// Muestra el menu de opciones para el usuario
void mostrarMenu() {
    cout << "=====================================\n";
    cout << "      GESTION DE CUENTAS BANCARIAS   \n";
    cout << "=====================================\n";
    cout << "1. Crear nueva cuenta\n";
    cout << "2. Depositar dinero\n";
    cout << "3. Retirar dinero\n";
    cout << "4. Consultar saldo\n";
    cout << "5. Listar todas las cuentas\n";
    cout << "6. Guardar cuentas en archivo\n";
    cout << "7. Cargar cuentas desde archivo\n";
    cout << "8. Salir\n";
    cout << "=====================================\n";
    cout << "Seleccione una opcion: ";
}

// =====================================
// |    FUNCION PARA CREAR UNA CUENTA   |
// =====================================
// Permite al usuario registrar una nueva cuenta bancaria
void crearCuenta(vector<Cuenta>& cuentas) {
    Cuenta nuevaCuenta;
    cout << "Ingrese el numero de cuenta: ";
    cin >> nuevaCuenta.numeroCuenta;
    cout << "Ingrese el nombre del titular: ";
    cin.ignore();
    getline(cin, nuevaCuenta.nombreTitular);
    nuevaCuenta.saldo = 0.0; // Inicializa el saldo en 0
    cuentas.push_back(nuevaCuenta);
    cout << "Cuenta creada con exito!\n";
}

// ====================================
// |    FUNCION PARA DEPOSITAR DINERO   |
// ====================================
// Permite al usuario depositar dinero en una cuenta bancaria
void depositarDinero(vector<Cuenta>& cuentas) {
    string numeroCuenta;
    double cantidad;
    cout << "Ingrese el numero de cuenta: ";
    cin >> numeroCuenta;
    for (auto& cuenta : cuentas) {
        if (cuenta.numeroCuenta == numeroCuenta) {
            cout << "Ingrese la cantidad a depositar: ";
            cin >> cantidad;
            cuenta.saldo += cantidad; // Suma el monto al saldo existente
            cout << "Deposito realizado con exito!\n";
            return;
        }
    }
    cout << "Cuenta no encontrada.\n";
}

// ==================================
// |    FUNCION PARA RETIRAR DINERO   |
// ==================================
// Permite al usuario retirar dinero de una cuenta bancaria
void retirarDinero(vector<Cuenta>& cuentas) {
    string numeroCuenta;
    double cantidad;
    cout << "Ingrese el numero de cuenta: ";
    cin >> numeroCuenta;
    for (auto& cuenta : cuentas) {
        if (cuenta.numeroCuenta == numeroCuenta) {
            cout << "Ingrese la cantidad a retirar: ";
            cin >> cantidad;
            if (cuenta.saldo >= cantidad) {
                cuenta.saldo -= cantidad; // Resta el monto al saldo existente
                cout << "Retiro realizado con exito!\n";
            } else {
                cout << "Fondos insuficientes.\n";
            }
            return;
        }
    }
    cout << "Cuenta no encontrada.\n";
}

// ====================================
// |    FUNCION PARA CONSULTAR SALDO   |
// ====================================
// Permite al usuario consultar el saldo de una cuenta especifica
void consultarSaldo(const vector<Cuenta>& cuentas) {
    string numeroCuenta;
    cout << "Ingrese el numero de cuenta: ";
    cin >> numeroCuenta;
    for (const auto& cuenta : cuentas) {
        if (cuenta.numeroCuenta == numeroCuenta) {
            cout << "El saldo de la cuenta es: $" << fixed << setprecision(2) << cuenta.saldo << "\n";
            return;
        }
    }
    cout << "Cuenta no encontrada.\n";
}

// ====================================
// |    FUNCION PARA LISTAR CUENTAS   |
// ====================================
// Muestra todas las cuentas registradas en el sistema
void listarCuentas(const vector<Cuenta>& cuentas) {
    cout << "=====================================\n";
    cout << "          LISTADO DE CUENTAS        \n";
    cout << "=====================================\n";
    for (const auto& cuenta : cuentas) {
        cout << "Numero de cuenta: " << cuenta.numeroCuenta << "\n";
        cout << "Titular: " << cuenta.nombreTitular << "\n";
        cout << "Saldo: $" << fixed << setprecision(2) << cuenta.saldo << "\n";
        cout << "-------------------------------------\n";
    }
}

// ==========================
// |    FUNCION PRINCIPAL   |
// ==========================
// Maneja la ejecucion del programa y la interaccion con el usuario
int main() {
    vector<Cuenta> cuentas; // Vector que almacena todas las cuentas
    string nombreArchivo = "cuentas.txt"; // Nombre del archivo donde se guardan las cuentas
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1: crearCuenta(cuentas); break;
            case 2: depositarDinero(cuentas); break;
            case 3: retirarDinero(cuentas); break;
            case 4: consultarSaldo(cuentas); break;
            case 5: listarCuentas(cuentas); break;
            case 6: guardarCuentas(cuentas, nombreArchivo); break;
            case 7: cargarCuentas(cuentas, nombreArchivo); break;
            case 8: cout << "Saliendo del programa...\n"; break;
            default: cout << "Opcion no valida. Intente de nuevo.\n";
        }
    } while (opcion != 8);

    return 0;
}