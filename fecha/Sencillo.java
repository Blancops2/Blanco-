import java.time.LocalDate;
import java.time.temporal.ChronoUnit;
import java.util.Scanner;

public class Sencillo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Ingresa la primera fecha (yyyy-MM-dd):");
        String fechaStr1 = scanner.nextLine();

        System.out.println("Ingresa la segunda fecha (yyyy-MM-dd):");
        String fechaStr2 = scanner.nextLine();

        try {
            LocalDate fecha1 = LocalDate.parse(fechaStr1);
            LocalDate fecha2 = LocalDate.parse(fechaStr2);

            long diasEntreFechas = ChronoUnit.DAYS.between(fecha1, fecha2);

            System.out.println("Días entre las dos fechas: " + diasEntreFechas);
        } catch (Exception e) {
            System.out.println("Hubo un error al procesar las fechas. Asegúrate de ingresarlas en el formato correcto (yyyy-MM-dd).");
        } finally {
            scanner.close();
        }
    }
}
