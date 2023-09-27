import java.util.Scanner;

public class Fecha {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int dia1, mes1, no1, dia2, mes2, no2;
        int resultado1, resultado2, resultado3, total;

        System.out.println("¡Hola!\nEste programa calcula la diferencia entre dos fechas.");
        System.out.println("tomaremos ciertas libertades como por ejemplo los meses duran 30 dias y los años 365 dias.");
        System.out.println("Dame dos fechas para poder restarlas.");

        //primer fecha
        System.out.print("Fecha 1:\nDia: ");
        dia1 = entrada.nextInt();
        System.out.print("Mes: ");
        mes1 = entrada.nextInt();
        System.out.print("Año: ");
        no1 = entrada.nextInt();

        //segunda fecha
        System.out.println("\nFecha 2:");
        System.out.print("Dia: ");
        dia2 = entrada.nextInt();
        System.out.print("Mes: ");
        mes2 = entrada.nextInt();
        System.out.print("Año: ");
        no2 = entrada.nextInt();

        //filtros
        if(dia1>30||dia1<=0||dia2>30||dia2<=0){
            System.out.println("el formato establecido para dia no se cumple");
            return;

        }
        if(mes1>12||mes1<=0||mes2>12||mes2<=0){
            System.out.println("el formato establecido para mes no se cumple");
            return;

        }

        //calculando
        resultado1 = dia1 - dia2;
        resultado2 = mes1 - mes2;
        resultado3 = no1 - no2;

        if(resultado3==0){
            System.out.println("las fechas coinciden con el mismo año");

        }
        if(resultado3<0){
            System.out.println("la segunda fecha es mayor");
        }
        else{
            System.out.println("la primer fecha es mayor");
        }

        //convierto a positivo
        resultado1 = Math.abs(resultado1);
        resultado2 = Math.abs(resultado2);
        resultado3 = Math.abs(resultado3);
        

        //final
        System.out.println("la diferencia entre las fechas es de: \n");
        System.out.println(resultado1+" dias, "+resultado2+" meses, "+resultado3+" años");

        //calcular dias
        resultado2 = resultado2 * 30;
        resultado3 = resultado3 * 365;
        total = resultado1 + resultado2 +resultado3;
        System.out.println("lo que serian "+total+" dias");

    }
}
