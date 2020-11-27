package ExerciciosExtras.exercicios.tratamentodedados;

import java.util.Scanner;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class ArquivoDeTexto {
    public static void main(String[] args) {
        try{
            BufferedWriter escrita = new BufferedWriter(new FileWriter("./exercicios/tratamentodedados/saidadoconsole.txt"));
            
            String digitado = "";
            Scanner in = new Scanner(System.in);
            digitado = in.nextLine();

            in.close();
            escrita.append(digitado + "\n");
            escrita.close();
        } catch (IOException exception){
            System.out.println("Erro de exceção I/O: " + exception.getMessage());
        }

        try{
            BufferedReader leitura = new BufferedReader(new FileReader("./exercicios/tratamentodedados/saidadoconsole.txt"));
            String value = "";
            while (true){
                if(value != null)
                    System.out.println(value);
                else
                    break;
                
                value = leitura.readLine();

            }
            leitura.close();
        } catch (IOException exception){
            System.out.println("Erro de exceção I/O: " + exception.getMessage());
        }
        
    }
}