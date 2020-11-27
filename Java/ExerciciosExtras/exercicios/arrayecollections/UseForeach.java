package ExerciciosExtras.exercicios.arrayecollections;

public class UseForeach {
    public static void main(String[] args) {
        int[] vetor = new int[3];

        vetor[0] = 2;
        vetor[1] = 3;
        vetor[2] = 5;

        System.out.println("Com foreach");
        for(int vet: vetor){
            System.out.println(vet);
        }
        
        System.out.println("Com for");
        for(int i=0; i < vetor.length; i++){
            System.out.println(vetor[i]);
        }
    }    
}