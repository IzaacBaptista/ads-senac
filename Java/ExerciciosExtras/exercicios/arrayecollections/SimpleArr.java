package ExerciciosExtras.exercicios.arrayecollections;

import java.util.Arrays;

public class SimpleArr {
    public static void main(String[] args) {
        int[] vetor = new int[10];

        vetor[0] = 2;
        vetor[1] = 3;
        vetor[2] = 5;

        for(int i = 0; i < vetor.length; i++){
            System.out.println(vetor[i]);
        }
        System.out.println(vetor);

        System.out.println(Arrays.toString(vetor));

        int[] vetor2 = { 1, 2 , 3 };

        for(int i = 0; i < vetor2.length; i++){
            System.out.println(vetor2[i]);
        }
    }    
}