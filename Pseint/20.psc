Algoritmo CalculadoraAreas
    Escribir "Seleccione la figura para la cual desea calcular el área:"
    Escribir "1. Triángulo"
    Escribir "2. Cuadrado"
    Escribir "3. Rectángulo"
    Escribir "4. Círculo"
    Leer opcion
    Si opcion = 1 Entonces
        Escribir "Ingrese la base del triángulo:"
        Leer base
        Escribir "Ingrese la altura del triángulo:"
        Leer altura
        area <- (base * altura) / 2
        Escribir "El área del triángulo es:", area
    Sino Si opcion = 2 Entonces
			Escribir "Ingrese el lado del cuadrado:"
			Leer lado
			area <- lado * lado
			Escribir "El área del cuadrado es:", area
		Sino Si opcion = 3 Entonces
				Escribir "Ingrese el largo del rectángulo:"
				Leer largo
				Escribir "Ingrese el ancho del rectángulo:"
				Leer ancho
				area <- largo * ancho
				Escribir "El área del rectángulo es:", area
			Sino Si opcion = 4 Entonces
					Escribir "Ingrese el radio del círculo:"
					Leer radio
					area <- 3.14159 * radio * radio
					Escribir "El área del círculo es:", area
				Sino
					Escribir "Opción inválida."
				FinSi
			FinSi
		FinSi
	FinSi
	
FinAlgoritmo
