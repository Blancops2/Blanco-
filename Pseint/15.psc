Algoritmo BuscarNumeroEnMatriz
    Dimension matriz[4, 5] Como Entero
    Definir numero, fila, columna Como Entero
	
    # Cargar la matriz con los primeros números naturales
    Para i <- 0 Hasta 3 Hacer
        Para j <- 0 Hasta 4 Hacer
            matriz[i, j] <- i * 5 + j + 1
        FinPara
    FinPara
	
    # Mostrar la matriz
    Escribir "Matriz:"
    Para i <- 0 Hasta 3 Hacer
        Para j <- 0 Hasta 4 Hacer
            Escribir matriz[i, j]
        FinPara
        Escribir "" # Salto de línea después de cada fila
    FinPara
	
    # Buscar un número en la matriz
    Escribir "Ingrese un número:"
    Leer numero
	
    fila <- -1
    columna <- -1
	
    Para i <- 0 Hasta 3 Hacer
        Para j <- 0 Hasta 4 Hacer
            Si matriz[i, j] = numero Entonces
                fila <- i
                columna <- j
                Detener
            FinSi
        FinPara
    FinPara
	
    Si fila <> -1 Y columna <> -1 Entonces
        Escribir "El número ", numero, " se encuentra en la fila ", fila, " y columna ", columna
    Sino
        Escribir "El número ", numero, " no se encuentra en la matriz."
    FinSi
	
FinAlgoritmo

