# Solicitar la edad del usuario
edad = int(input("Por favor, ingresa tu edad: "))

if edad < 18:
    print("Eres menor de edad.")
elif edad >= 18 and edad <= 65:
    print("Eres mayor de edad y puedes trabajar.")
else:
    print("Eres una persona mayor.")

# Solicitar el salario del usuario
salario = float(input("Por favor, ingresa tu salario: "))

if salario < 1000:
    print("Tu salario es bajo.")
elif salario >= 1000 and salario <= 5000:
    print("Tu salario es promedio.")
else:
    print("Tu salario es alto.")

# Verificar si el usuario está trabajando o no
trabajando = input("¿Estás trabajando actualmente? (sí/no): ").lower()

if trabajando == "sí":
    print("¡Excelente! Sigue trabajando duro.")
elif trabajando == "no":
    print("¡No te preocupes! Sigue buscando nuevas oportunidades.")
else:
    print("Respuesta no válida.")

# Comprobamos el rango de edad para definir un mensaje
if edad < 18:
    print("Aprovecha el tiempo, ¡estás en una etapa de aprendizaje!")
elif edad >= 18 and edad <= 25:
    print("Estás en una etapa joven, ¡es tiempo de explorar nuevas experiencias!")
elif edad > 25 and edad <= 40:
    print("Estás en una etapa estable, ¡es hora de consolidar tus metas!")
else:
    print("¡Sigues siendo valioso, tu experiencia es clave!")

# Condición adicional que combina varios factores
if edad >= 18 and salario >= 1000 and trabajando == "sí":
    print("¡Estás en una excelente situación!")
else:
    print("Aún puedes mejorar, ¡no te rindas!")
