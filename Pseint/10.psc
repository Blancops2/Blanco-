Algoritmo OperacionMatematica
	Definir num1, num2, resultado Como Entero
	Definir operador Como Caracter
	
	Escribir "Ingrese el primer número:"
	Leer num1
	
	Escribir "Ingrese el segundo número:"
	Leer num2
	
	Escribir "Ingrese el operador (+, -, x, /, mod):"
	Leer operador
	
	Segun operador Hacer
		caso "+":
			resultado <- num1 + num2
			Escribir "Resultado:", resultado
		caso "-":
			resultado <- num1 - num2
			Escribir "Resultado:", resultado
		caso "x":
			resultado <- num1 * num2
			Escribir "Resultado:", resultado
		caso "/":
			resultado <- num1 / num2
			Escribir "Resultado:", resultado
		caso "mod":
			resultado <- num1 MOD num2
			Escribir "Resultado:", resultado
		otro caso:
			Escribir "Operador no válido"
	FinSegun
FinAlgoritmo

