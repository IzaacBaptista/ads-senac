package ExerciciosExtras;

import java.util.Scanner;

public class ExercicioTresComplemento {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite a palavra oculta: ");
        String palavraOculta = scanner.next();
        int tentativas = 5;
        
        for(int contador=0; contador<tentativas; contador++){
            System.out.println("Digite a resposta:");
            String resposta = scanner.next();
            if(palavraOculta.equals(resposta)){
                System.out.println("Parabéns!");
                System.out.println("Você acertou na tentativa: " + (contador+1));
                break;
            } else {
                System.out.println("Você errou! Tem ainda "+ (tentativas - (contador+1)));
                switch(contador){
                    case 0:
                        System.out.println("xx Cabeça xx");
                        break;
                    case 1:
                        System.out.println("xx Tronco xx");
                        break;
                    case 2:
                        System.out.println("xx Braço xx");
                        break;
                    case 3:
                        System.out.println("xx Perna xx");
                        break;
                    case 4:
                        System.out.println("xx Pé xx");
                        break;
                }

                if(contador+1 == tentativas){
                    System.out.println("Você foi enforcado!");
                }
            }
        }
        
        scanner.close();
    }
}