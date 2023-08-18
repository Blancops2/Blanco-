Algoritmo CalcularCostoTeclados
	Definir cantidadTeclados, costoTotal Como Entero
	
	Escribir "Ingrese la cantidad de teclados a comprar:"
	Leer cantidadTeclados
	
	Si cantidadTeclados > 8 Entonces
		costoTotal <- cantidadTeclados * 85
		Sino Si cantidadTeclados >= 4 Entonces
		costoTotal <- cantidadTeclados * 90
	Sino
		costoTotal <- cantidadTeclados * 100
	FinSi
	
	Escribir "Número de teclados a comprar:", cantidadTeclados
	Escribir "Total a pagar:", costoTotal, " Lempiras"
FinAlgoritmo
