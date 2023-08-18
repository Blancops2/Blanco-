Proceso CalcularInteres
    Definir monto, meses, interes, totalPago Como Real
	
    Escribir "Ingrese el monto del préstamo:"
    Leer monto
	
    Escribir "Ingrese el número de meses:"
    Leer meses
	
    interes <- monto * 0.02 * meses
    totalPago <- monto + interes
	
    Escribir "El interés a pagar es: ", interes
    Escribir "El total a pagar es: ", totalPago
	
FinProceso
