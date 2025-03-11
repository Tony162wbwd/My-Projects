// Solicitar la edad del usuario
let edad = prompt("Por favor, ingresa tu edad:");

edad = parseInt(edad); // Convertir a número

if (edad < 18) {
    console.log("Eres menor de edad.");
} else if (edad >= 18 && edad <= 65) {
    console.log("Eres mayor de edad y puedes trabajar.");
} else {
    console.log("Eres una persona mayor.");
}

// Solicitar el salario del usuario
let salario = prompt("Por favor, ingresa tu salario:");

salario = parseFloat(salario); // Convertir a número decimal

if (salario < 1000) {
    console.log("Tu salario es bajo.");
} else if (salario >= 1000 && salario <= 5000) {
    console.log("Tu salario es promedio.");
} else {
    console.log("Tu salario es alto.");
}

// Verificar si el usuario está trabajando o no
let trabajando = prompt("¿Estás trabajando actualmente? (sí/no):");

if (trabajando.toLowerCase() === "sí") {
    console.log("¡Excelente! Sigue trabajando duro.");
} else if (trabajando.toLowerCase() === "no") {
    console.log("¡No te preocupes! Sigue buscando nuevas oportunidades.");
} else {
    console.log("Respuesta no válida.");
}

// Comprobamos el rango de edad para definir un mensaje
if (edad < 18) {
    console.log("Aprovecha el tiempo, ¡estás en una etapa de aprendizaje!");
} else if (edad >= 18 && edad <= 25) {
    console.log("Estás en una etapa joven, ¡es tiempo de explorar nuevas experiencias!");
} else if (edad > 25 && edad <= 40) {
    console.log("Estás en una etapa estable, ¡es hora de consolidar tus metas!");
} else {
    console.log("¡Sigues siendo valioso, tu experiencia es clave!");
}

// Condición adicional que combina varios factores
if (edad >= 18 && salario >= 1000 && trabajando.toLowerCase() === "sí") {
    console.log("¡Estás en una excelente situación!");
} else {
    console.log("Aún puedes mejorar, ¡no te rindas!");
}
