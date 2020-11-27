package ExerciciosExtras.exercicios.estruturadecontrole;

import java.util.Scanner;

public class EstruturaDoWhile {
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);

        String entrada = "sim";

        do {
            System.out.println("Você sabe JAVA?");
            entrada = scanner.nextLine();
        } while(!entrada.equalsIgnoreCase("Sim"));

        scanner.close();
    }
}