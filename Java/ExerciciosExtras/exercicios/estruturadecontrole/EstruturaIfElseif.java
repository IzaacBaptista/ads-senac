package ExerciciosExtras.exercicios.estruturadecontrole;

import java.util.Scanner;

public class EstruturaIfElseif {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Informe a nota do aluno: ");
        double nota = scanner.nextDouble();

        if(nota <= 10.0 && nota >= 7.0){
            System.out.println("Aprovado!");
            System.out.println("Muito bom!");
        } else if(nota < 7.0 && nota >= 4.5)
            System.out.println("Recuperação!");
        else
            System.out.println("Reprovado!");

        scanner.close();
    }
}