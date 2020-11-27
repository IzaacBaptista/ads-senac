package ExerciciosExtras.exercicios.estruturadecontrole;

import java.util.Scanner;

public class EstruturaWhile {
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);

        String entrada = "";

        while(!entrada.equals("exit")){
            System.out.println("Digite o que deseja fazer:");
            entrada = scanner.nextLine();
        }

        scanner.close();
    }
}