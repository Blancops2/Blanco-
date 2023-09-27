import java.time.LocalDate;
import java.time.temporal.ChronoUnit;

public class localdate {
    public static void main(String[] args) {
        // Definir las fechas
        LocalDate fecha1 = LocalDate.of(2019, 2, 5);
        LocalDate fecha2 = LocalDate.of(2022, 5, 7);

        // Calcular la diferencia en días
        long diasEntreFechas = ChronoUnit.DAYS.between(fecha1, fecha2);

        System.out.println("Días entre las dos fechas: " + diasEntreFechas);
    }
}
