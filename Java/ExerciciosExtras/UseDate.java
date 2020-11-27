package ExerciciosExtras;

import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;

public class UseDate {
    public static void main(String[] args) {

        System.out.println("new Date");
        Date data = new Date();
        System.out.println(data);
        
        System.out.println("Calendar");
        Calendar calendario = Calendar.getInstance();
        System.out.println(calendario);
        System.out.println(calendario.getTime());

        System.out.println("Data Alterada:");
        calendario.set(Calendar.YEAR,1995);
        calendario.set(Calendar.MONTH,7);
        System.out.println(calendario.getTime());

        System.out.println("Data Formatada");
        DateFormat format = DateFormat.getDateInstance(DateFormat.SHORT);
        System.out.println(format.format(data));

        SimpleDateFormat simpleFormat = new SimpleDateFormat("dd/MM/yyyy");
        System.out.println(simpleFormat.format(data));
        try{
            System.out.println(format.parse("12/01/1995"));
            System.out.println(simpleFormat.parse("12/01/1995"));
        } catch (Exception e){
            System.out.println(e.getMessage());
        }
        
    }
}