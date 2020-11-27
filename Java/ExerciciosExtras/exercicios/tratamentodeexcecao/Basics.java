package ExerciciosExtras.exercicios.tratamentodeexcecao;

public class Basics {
    public static void main(String[] args) {

        /*String str = null;
        try{  
            System.out.println(str.equals("ola"));
        } catch(Exception excecao){
            System.out.println("Ocorreu um erro no momento de imprimir a comparação");
        }*/
        
        try{
            System.out.println(7 / 0);
        } catch(ArithmeticException e){
            System.out.println("Ocorreu o erro: " + e.getMessage());
        }
        
        System.out.println("Encerrou corretamente");
    }
}