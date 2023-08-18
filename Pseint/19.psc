Proceso ConvertirTemperatura
    Definir opcion Como Entero
    Definir celsius, fahrenheit Como Real
	
    Escribir "1. Celsius a Fahrenheit"
    Escribir "2. Fahrenheit a Celsius"
    Escribir "Ingrese una opción:"
    Leer opcion
	
    Si opcion = 1 Entonces
        Escribir "Ingrese la temperatura en grados Celsius:"
        Leer celsius
		
        fahrenheit <- (celsius * 9/5) + 32
		
        Escribir "La temperatura en grados Fahrenheit es: ", fahrenheit
		Sino Si opcion = 2 Entonces
        Escribir "Ingrese la temperatura en grados Fahrenheit:"
        Leer fahrenheit
		
        celsius <- (fahrenheit - 32) * 5/9
		
        Escribir "La temperatura en grados Celsius es: ", celsius
    Sino
        Escribir "Opción inválida."
    FinSi
FinSi

FinProceso
