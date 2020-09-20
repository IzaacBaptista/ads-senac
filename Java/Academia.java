/*
Crie um programa que receba a pessoa criada e verifique qual o IMC.
IMC Classificação
Abaixo de 18,5 Abaixo do Peso
Entre 18,6 e 24,9 Peso Ideal
Entre 25,0 e 29,9 Levemente acima do peso
Entre 30,0 e 34,9 Obesidade Grau I
Entre 35,0 e 39,9 Obesidade Grau II
Acima de 40 Obesidade Grau III (mórbida)
*/
public class Academia {
 public static void main(String[] args) {
 Pessoa2 pessoaUm = new Pessoa2("João da Silva",125,1.80,"15/08/1995");
 System.out.println(pessoaUm.imc()); 
 }
}