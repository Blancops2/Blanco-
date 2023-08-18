Algoritmo SegundosAHMS
	Escribir "Ingrese el número total de segundos:"
	Leer total_segundos
	horas <- total_segundos / 3600
	minutos <- (total_segundos MOD 3600) / 60
	segundos <- total_segundos MOD 60
	Escribir "Horas:", horas, "Minutos:", minutos, "Segundos:", segundos
FinAlgoritmo
