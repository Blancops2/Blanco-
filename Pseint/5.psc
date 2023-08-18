Algoritmo ConcatenarNumeros
    Definir numerosConcatenados Como Cadena
    Definir numero, numConcatenado Como Entero
	
    numerosConcatenados <- ""
    numConcatenado <- 0
	
    Repetir
        Escribir "Ingrese un número (ingrese 0 para terminar):"
        Leer numero
		
        Si numero > 0 Entonces
            numConcatenado <- numConcatenado * 10 + numero
            numerosConcatenados <- numerosConcatenados + ConvertirATexto(numero)
        FinSi
    Hasta Que numero <= 0
	
    Escribir "Números concatenados:", numConcatenado
FinAlgoritmo
