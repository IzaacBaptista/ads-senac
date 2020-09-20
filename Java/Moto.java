package Poo;

public class Moto {
 /*
 ==== Características ====
 Duas Rodas
 Guidão
 Motor
 Marcha
 Cor
 Embreagem
 Farol
 Carenagem
 Cilindradas
 Marca
 */
 final int quantidadeRodas = 2;
 String placa;
 String formatoDoGuidao;
 String motor;
 int quantidadeMarchas;
 String cor;
 String embreagem;
 String tipoDeFarol;
 String carenagem;
 int cilindradas;
 String marca;
 int velocidadeMaxima;
 int quantidadeAceleracao = 1;
 boolean luzFarol = false;
 boolean somBuzina = false;
 int velocidadeAtual = 0;
 boolean ligado = false;
 
 /*
 ==== Comportamentos ====
 Buzinar
 Ligar
 Desligar
 Acender Farol
 Acelerar
 Freiar
 */
 public void buzinar() {
 somBuzina = !somBuzina;
 if(somBuzina) {
 System.out.println("Bi! Bi!");
 } else {
 System.out.println("Off");
 }
 }
 public void ligar() throws Exception {
 if(ligado) {
 throw new Exception("Moto já está ligada!");
 }
 ligado = true;
 System.out.println("Frum! Frum!");
 }
 public void desligar() throws Exception {
 if(ligado) {
 throw new Exception("Moto já está desligada!");
 }
 ligado = false;
 System.out.println("Off");
 }
 public void acenderFarol() {
 luzFarol = !luzFarol;
 if(luzFarol) {
 System.out.println("Shiny");
 } else {
 System.out.println("Off");
 }
 }
 /**
 * Acelera a moto
 * @return velocidadeAtual
 * @throws Exception Moto não está ligada!
 * @throws Exception Velocidade máxima atingida!
 */
 public int acelerar() throws Exception {
 if(!ligado)
 throw new Exception("Moto não está ligada!");
 if((velocidadeAtual + quantidadeAceleracao) > velocidadeMaxima)
 throw new Exception("Velocidade máxima atingida!");
 velocidadeAtual += quantidadeAceleracao;
 return velocidadeAtual;
 }
 public int freiar() throws Exception {
 if(!ligado)
 throw new Exception("Moto não está ligada!");
 if((velocidadeAtual - quantidadeAceleracao) < 0)
 throw new Exception("Moto já está parada!");
 velocidadeAtual -= quantidadeAceleracao;
 return velocidadeAtual;
 }
}