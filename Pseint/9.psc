Algoritmo OrdenarNumerosVectorSeleccion
    Definir vector Como Entero[10]
    Definir i, j, minIndex, temp Como Entero
	
    Escribir "Ingrese 10 números para el vector:"
    Para i <- 0 Hasta 9 Hacer
        Leer vector[i]
    FinPara
	
    Para i <- 0 Hasta 8 Hacer
        minIndex <- i
        Para j <- i + 1 Hasta 9 Hacer
            Si vector[j] < vector[minIndex] Entonces
                minIndex <- j
            FinSi
        FinPara
		
        Si minIndex <> i Entonces
            temp <- vector[i]
            vector[i] <- vector[minIndex]
            vector[minIndex] <- temp
        FinSi
    FinPara
	
    Escribir "Vector ordenado:"
    Para i <- 0 Hasta 9 Hacer
        Escribir vector[i]
    FinPara
FinAlgoritmo

