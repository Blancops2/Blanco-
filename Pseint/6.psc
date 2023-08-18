Algoritmo ContarPrimosVector
    Definir num1, num2, num3, num4, num5, num6, num7, num8, num9, num10 Como Entero
    Definir primos Como Entero
    primos <- 0
	
    num1 <- 5
    num2 <- 23
    num3 <- 8
    num4 <- 11
    num5 <- 15
    num6 <- 7
    num7 <- 2
    num8 <- 14
    num9 <- 19
    num10 <- 13
	
    // Verificar si num1 es primo
    Si num1 > 1 Entonces
        Si num1 MOD 2 <> 0 Entonces
            Definir esPrimo1 Como Booleano
            esPrimo1 <- Verdadero
            Definir i Como Entero
            Para i <- 3 Hasta num1/2 Con Paso 2 Hacer
                Si num1 MOD i = 0 Entonces
                    esPrimo1 <- Falso
                    Salir
                FinSi
            FinPara
            Si esPrimo1 Entonces
                primos <- primos + 1
            FinSi
        FinSi
    FinSi
	
    // Verificar si num2 es primo
    Si num2 > 1 Entonces
        Si num2 MOD 2 <> 0 Entonces
            Definir esPrimo2 Como Booleano
            esPrimo2 <- Verdadero
            Definir i Como Entero
            Para i <- 3 Hasta num2/2 Con Paso 2 Hacer
                Si num2 MOD i = 0 Entonces
                    esPrimo2 <- Falso
                    Salir
                FinSi
            FinPara
            Si esPrimo2 Entonces
                primos <- primos + 1
            FinSi
        FinSi
    FinSi
	
    // Repetir el mismo patrón para verificar los demás números num3 a num10
	
    Escribir "Cantidad de números primos en el vector:", primos
FinAlgoritmo

