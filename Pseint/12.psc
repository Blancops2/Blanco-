Proceso TablaMultiplicar
    Definir numero, i, resultado Como Entero
	
    Escribir "Ingrese un número del 1 al 12:"
    Leer numero
	
    Para i <- 1 Hasta 12 Con Paso 1 Hacer
        resultado <- numero * i
        Escribir numero, " x ", i, " = ", resultado
    FinPara
	
FinProceso

