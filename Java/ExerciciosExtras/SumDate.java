package ExerciciosExtras;

import java.util.Calendar;
import java.util.Date;

public class SumDate {
    public static void main(String[] args) {
        Date data = new Date(); // Data Atual
        Calendar calendario = Calendar.getInstance();

        calendario.setTime(data); // Define o calendario com a data atual

        calendario.add(Calendar.DATE, 10); // Soma 10 dias no calendario

        System.out.println(calendario.getTime());

    }
}