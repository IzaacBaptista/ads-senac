package ExerciciosExtras.exercicios.estruturadecontrole;

public class EstruturaContinueAndBreak {
    public static void main(String[] args) {
        
        for(int contador = 0; contador <= 10; contador++){
            if(contador < 2){
                continue;
            }
            
            System.out.println("Valor do contador " + contador);

            if(contador>7){
                break;
            }
        }
    }
}