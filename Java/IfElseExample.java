import java.util.Scanner;

public class IfElseExample {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Solicitar la edad del usuario
        System.out.print("Por favor, ingresa tu edad: ");
        int edad = scanner.nextInt();
        
        if (edad < 18) {
            System.out.println("Eres menor de edad.");
        } else if (edad >= 18 && edad <= 65) {
            System.out.println("Eres mayor de edad y puedes trabajar.");
        } else {
            System.out.println("Eres una persona mayor.");
        }
        
        // Solicitar el salario del usuario
        System.out.print("Por favor, ingresa tu salario: ");
        double salario = scanner.nextDouble();
        
        if (salario < 1000) {
            System.out.println("Tu salario es bajo.");
        } else if (salario >= 1000 && salario <= 5000) {
            System.out.println("Tu salario es promedio.");
        } else {
            System.out.println("Tu salario es alto.");
        }
        
        // Verificar si el usuario está trabajando o no
        System.out.print("¿Estás trabajando actualmente? (sí/no): ");
        String trabajando = scanner.next();
        
        if (trabajando.equalsIgnoreCase("sí")) {
            System.out.println("¡Excelente! Sigue trabajando duro.");
        } else if (trabajando.equalsIgnoreCase("no")) {
            System.out.println("¡No te preocupes! Sigue buscando nuevas oportunidades.");
        } else {
            System.out.println("Respuesta no válida.");
        }

        // Comprobamos el rango de edad para definir un mensaje
        if (edad < 18) {
            System.out.println("Aprovecha el tiempo, ¡estás en una etapa de aprendizaje!");
        } else if (edad >= 18 && edad <= 25) {
            System.out.println("Estás en una etapa joven, ¡es tiempo de explorar nuevas experiencias!");
        } else if (edad > 25 && edad <= 40) {
            System.out.println("Estás en una etapa estable, ¡es hora de consolidar tus metas!");
        } else {
            System.out.println("¡Sigues siendo valioso, tu experiencia es clave!");
        }

        // Condición adicional que combina varios factores
        if (edad >= 18 && salario >= 1000 && trabajando.equalsIgnoreCase("sí")) {
            System.out.println("¡Estás en una excelente situación!");
        } else {
            System.out.println("Aún puedes mejorar, ¡no te rindas!");
        }

        scanner.close();
    }
}
