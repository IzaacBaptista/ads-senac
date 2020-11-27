package ExerciciosExtras;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Forca {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        List<String> list = new ArrayList<>();
        list.add("canastra");
        list.add("xadrez");
        list.add("imã");
        list.add("coentro");
        list.add("eleitor");
        list.add("janela");
        list.add("curso");
        list.add("constitucional");
        list.add("programa");
        list.add("react");


        double random = Math.random();
        int value = (int)(random * 10);

        String palavraOculta = list.get(value);
        
        String palavraTentativa = "";
        for(int i=0;i<palavraOculta.length();i++){
            palavraTentativa += "*";
        }

        boolean enforcado = false;
        int membros = 0;
        do{
            System.out.println(palavraTentativa);
            System.out.println("Digite a letra: ");
            String letra = scanner.next();
            char letraChar = letra.charAt(0);
            String resposta = "";
            boolean existe = false;
            for(int j=0; j<palavraOculta.length();j++){
                if(letraChar == palavraOculta.charAt(j)){
                    existe = true;
                    resposta += letraChar;
                } else {
                    resposta += palavraTentativa.charAt(j);
                }
            }
            palavraTentativa = resposta;

            if(!existe){
                System.out.println("Você errou!");
                switch(membros){
                    case 0:
                        System.out.println("xx Cabeça xx \n");
                        break;
                    case 1:
                        System.out.println("xx Tronco xx \n");
                        break;
                    case 2:
                        System.out.println("xx Braço xx \n");
                        break;
                    case 3:
                        System.out.println("xx Perna xx \n");
                        break;
                    case 4:
                        System.out.println("xx Pé xx \n");
                        enforcado = true;
                        break;
                }
                membros++;
            }

            if(palavraTentativa.equals(palavraOculta)){
                System.out.println(palavraTentativa);
                System.out.println("Parabéns! Você é o bichão!");
                break;
            }
        }while(!enforcado);
        
        if(enforcado){
            System.out.println("Perdeu! A palavra era: " + palavraOculta);
        }
        scanner.close();
    }
}