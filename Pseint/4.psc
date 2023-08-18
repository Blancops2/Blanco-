Algoritmo ElementosMayoresQueNumero
    Definir numero, elemento Como Entero
	
    Escribir "Ingrese un número:"
    Leer numero
	
    Escribir "Ingrese 10 números para el arreglo:"
    Para i <- 1 Hasta 10 Hacer
        Leer elemento
        Si elemento > numero Entonces
            Escribir elemento
        FinSi
    FinPara
FinAlgoritmo
