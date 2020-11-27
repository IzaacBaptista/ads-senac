package ExerciciosExtras.exercicios.tratamentodedados;

import java.util.Scanner;
import java.io.File;
import java.io.PrintWriter;
import java.io.FileNotFoundException;

public class ManipulacaoTexto {
    public static void main(String [] args){
        try{
            System.out.println("Avaliação do arquivo entrada.txt");

            File entrada = new File("./exercicios/tratamentodedados/entrada.txt");
            Scanner in = new Scanner(entrada);
            PrintWriter saida = new PrintWriter("./exercicios/tratamentodedados/saida.txt");
           
            while(in.hasNextInt()){
                boolean ehPrimo = true;
                int contador = 2;
                int valor = in.nextInt();
                while(contador <= (valor / 2 )){                    
                    if(valor % contador == 0){
                        ehPrimo = false;
                        break;
                    }
                    contador++;
                }
                if(ehPrimo)
                    saida.println(valor);
            }
            saida.close();
            in.close();
        }catch (FileNotFoundException e){
            System.out.println("Arquivo não encontrado. Tente novamente.");
        } catch (Exception e){
            System.out.println("Erro de execução: " + e.getMessage());
        }
    }
}