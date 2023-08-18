Algoritmo OrdenarMatriz
    Dimension matriz[3, 3] Como Entero
    Dimension matrizOrdenada[3, 3] Como Entero
    Definir temp Como Entero
	
    # Llenar la matriz con números aleatorios
    Para i <- 0 Hasta 2 Hacer
        Para j <- 0 Hasta 2 Hacer
            matriz[i, j] <- Aleatorio(1, 100) # Números aleatorios del 1 al 100
        FinPara
    FinPara
	
    # Mostrar la matriz original
    Escribir "Matriz original:"
    Para i <- 0 Hasta 2 Hacer
        Para j <- 0 Hasta 2 Hacer
            Escribir matriz[i, j],
        FinPara
        Escribir "" # Salto de línea después de cada fila
    FinPara
	
    # Ordenar la matriz en otra matriz utilizando el método de burbuja
    Para i <- 0 Hasta 2 Hacer
        Para j <- 0 Hasta 2 Hacer
            matrizOrdenada[i, j] <- matriz[i, j]
        FinPara
    FinPara
	
    Para i <- 0 Hasta 2 Hacer
        Para j <- 0 Hasta 1 Hacer
            Para k <- 0 Hasta 2 - j - 1 Hacer
                Si matrizOrdenada[i, k] > matrizOrdenada[i, k + 1] Entonces
                    temp <- matrizOrdenada[i, k]
                    matrizOrdenada[i, k] <- matrizOrdenada[i, k + 1]
                    matrizOrdenada[i, k + 1] <- temp
                FinSi
            FinPara
        FinPara
    FinPara
	
    # Mostrar la matriz ordenada
    Escribir "Matriz ordenada:"
    Para i <- 0 Hasta 2 Hacer
        Para j <- 0 Hasta 2 Hacer
            Escribir matrizOrdenada[i, j],
        FinPara
        Escribir "" # Salto de línea después de cada fila
    FinPara
	
FinAlgoritmo
