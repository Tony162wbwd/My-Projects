#include <iostream> 

// ============================================
// |        PROGRAMA PARA VERIFICAR           |
// |        SI ERES MAYOR DE EDAD O NO        |
// ============================================

using namespace std;

int main() {
    int age;

    // ------------------------------------
    // |    SOLICITAMOS LA EDAD AL USUARIO    |
    // ------------------------------------
    cout << "Enter your age: ";
    cin >> age;

    // ==============================
    // |   VERIFICAMOS LA EDAD       |
    // ==============================
    if (age >= 18) {
        cout << "Eres mayor de edad."; // Si tiene 18 o mas, es mayor de edad
    } else {
        cout << "Eres menor de edad."; // Si tiene menos de 18, es menor de edad
    }

    // ===========================
    // |   FINALIZA EL PROGRAMA   |
    // ===========================
    return 0;
}
