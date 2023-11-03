import java.util.Scanner;

public class Simpletron {

    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int acumulador = 0;
        int ContarInstrucciones = 0;
        int areglo[] = new int[100];

        System.out.println("* Bienvenido a Simpletron! *");
        System.out.println("* Por favor, introduzca en su programa una instruccion *");
        System.out.println("* (o palabra de datos) a la vez. Yo le mostrare *");
        System.out.println("* el numero de ubicacion y un signo de interrogacion (?) *");
        System.out.println("* Entonces usted escribira la palabra para esa ubicacion. *");
        System.out.println("* Teclee -9999 para dejar de introducir su programa. *");

        boolean loading = true;
        int AregloContador = 0;
        int value;
        while (loading) {
            System.out.printf("%02d ? ", AregloContador);
            value = entrada.nextInt();
            if (value == -9999) {
                loading = false;
            } else {
                areglo[AregloContador] = value;
                AregloContador++;
            }
        }


        System.out.println("* Se completo la carga del programa *");
        System.out.println("* Empieza la ejecucion del programa *");

        boolean running = true;
        int inputValue;
        int instruccion;
        int CodigoOperacion;
        int operando;
        while (running) {
            instruccion = areglo[ContarInstrucciones];
            CodigoOperacion = instruccion / 100;
            operando = instruccion % 100;

            switch (CodigoOperacion) {
                case 10: // Leer
                    System.out.print("Ingrese un valor: ");
                    inputValue = entrada.nextInt();
                    areglo[operando] = inputValue;
                    break;
                case 11: // Escribir
                    System.out.println("Salida: " + areglo[operando]);
                    ContarInstrucciones++;
                    break;
                case 20: // Cargar
                    acumulador = areglo[operando];
                    ContarInstrucciones++;
                    break;
                case 21: // Almacenar
                    areglo[operando] = acumulador;
                    ContarInstrucciones++;
                    break;
                case 30: // Sumar
                    acumulador += areglo[operando];
                    ContarInstrucciones++;
                    break;
                case 31: // Restar
                    acumulador -= areglo[operando];
                    ContarInstrucciones++;
                    break;
                case 32: // Dividir
                    acumulador /= areglo[operando];
                    ContarInstrucciones++;
                    break;
                case 33: // Multiplicar
                    acumulador *= areglo[operando];
                    ContarInstrucciones++;
                    break;
                case 40: // Bifurcar
                    ContarInstrucciones = operando;
                    break;
                case 41: // Bifurcar si negativo
                    if (acumulador < 0) {
                        ContarInstrucciones = operando;
                    }
                    break;
                case 42: // Bifurcar si cero
                    if (acumulador == 0) {
                        ContarInstrucciones = operando;
                    }
                    break;
                case 43: // Finalizar
                    running = false;
                    break;
            }
            
        }

        System.out.println("* Vaciado de la computadora *");
        System.out.println("Registro de Acumulador: " + acumulador);
        System.out.println("Contador de Instrucciones: " + ContarInstrucciones);
        System.out.println("Contenido de Memoria:");

        for (int i = 0; i < areglo.length; i++) {
            System.out.printf("%02d: %d%n", i, areglo[i]);
        }
    }
}