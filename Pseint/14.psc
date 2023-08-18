Proceso SumaNPrimerosNaturales
    Definir limite, suma, i Como Entero
	
    Escribir "Ingrese un número límite:"
    Leer limite
	
    suma <- 0
	
    Para i <- 1 Hasta limite Con Paso 1 Hacer
        suma <- suma + i
    FinPara
	
    Escribir "La suma de los primeros ", limite, " números naturales es: ", suma
	
FinProceso
