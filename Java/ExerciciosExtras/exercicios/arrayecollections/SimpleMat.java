package ExerciciosExtras.exercicios.arrayecollections;

import java.util.Arrays;

public class SimpleMat{
    public static void main(String[] args) {
        int[][] matriz = new int[3][3];

        matriz[0][0] = 1;
        matriz[0][1] = 2;
        matriz[0][2] = 3;
        matriz[1][0] = 4;
        matriz[1][1] = 5;
        matriz[1][2] = 6;
        matriz[2][0] = 7;
        matriz[2][1] = 8;
        matriz[2][2] = 9;

        for(int i=0; i < matriz.length; i++){
            for(int f=0; f < matriz[0].length; f++){
                System.out.println(matriz[i][f]);
            }
        }

        System.out.println(Arrays.toString(matriz));

        for(int[] array: matriz){
            System.out.println(Arrays.toString(array));
        }
        
    }
}