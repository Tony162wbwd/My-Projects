#include <iostream>
#include <string>
using namespace std;

int main() {
    int edad;
    double salario;
    string trabajando;

    // Solicitar la edad del usuario
    cout << "Por favor, ingresa tu edad: ";
    cin >> edad;

    if (edad < 18) {
        cout << "Eres menor de edad." << endl;
    } else if (edad >= 18 && edad <= 65) {
        cout << "Eres mayor de edad y puedes trabajar." << endl;
    } else {
        cout << "Eres una persona mayor." << endl;
    }

    // Solicitar el salario del usuario
    cout << "Por favor, ingresa tu salario: ";
    cin >> salario;

    if (salario < 1000) {
        cout << "Tu salario es bajo." << endl;
    } else if (salario >= 1000 && salario <= 5000) {
        cout << "Tu salario es promedio." << endl;
    } else {
        cout << "Tu salario es alto." << endl;
    }

    // Verificar si el usuario está trabajando o no
    cout << "¿Estás trabajando actualmente? (sí/no): ";
    cin >> trabajando;

    if (trabajando == "sí" || trabajando == "si") {
        cout << "¡Excelente! Sigue trabajando duro." << endl;
    } else if (trabajando == "no") {
        cout << "¡No te preocupes! Sigue buscando nuevas oportunidades." << endl;
    } else {
        cout << "Respuesta no válida." << endl;
    }

    // Comprobamos el rango de edad para definir un mensaje
    if (edad < 18) {
        cout << "Aprovecha el tiempo, ¡estás en una etapa de aprendizaje!" << endl;
    } else if (edad >= 18 && edad <= 25) {
        cout << "Estás en una etapa joven, ¡es tiempo de explorar nuevas experiencias!" << endl;
    } else if (edad > 25 && edad <= 40) {
        cout << "Estás en una etapa estable, ¡es hora de consolidar tus metas!" << endl;
    } else {
        cout << "¡Sigues siendo valioso, tu experiencia es clave!" << endl;
    }

    // Condición adicional que combina varios factores
    if (edad >= 18 && salario >= 1000 && (trabajando == "sí" || trabajando == "si")) {
        cout << "¡Estás en una excelente situación!" << endl;
    } else {
        cout << "Aún puedes mejorar, ¡no te rindas!" << endl;
    }

    return 0;
}
