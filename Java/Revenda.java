
public class Revenda {
 public static void main(String[] args) {
 /*
 Menu
 */
 Moto primeiraMoto = new Moto();
 Moto segundaMoto = new Moto();
 Moto terceiraMoto = new Moto();
 primeiraMoto.carenagem = "Esportiva";
 primeiraMoto.placa = "ABC-5050";
 primeiraMoto.cilindradas = 600;
 primeiraMoto.cor = "Vermelho";
 primeiraMoto.embreagem = "No pé";
 primeiraMoto.tipoDeFarol = "Xenaum";
 primeiraMoto.formatoDoGuidao = "Guidão Motoboy";
 primeiraMoto.marca = "Honda";
 primeiraMoto.quantidadeMarchas = 6;
 primeiraMoto.velocidadeMaxima = 250;
 primeiraMoto.quantidadeAceleracao = 5;
 segundaMoto.velocidadeMaxima = 180;
 segundaMoto.quantidadeMarchas = 3;
 segundaMoto.placa = "CBA-1010";
 terceiraMoto.carenagem = "Esportiva";
 terceiraMoto.placa = "DFG-4040";
 terceiraMoto.cilindradas = 600;
 terceiraMoto.cor = "Vermelho";
 terceiraMoto.embreagem = "No pé";
 terceiraMoto.tipoDeFarol = "Xenaum";
 terceiraMoto.formatoDoGuidao = "Guidão Motoboy";
 terceiraMoto.marca = "Honda";
 terceiraMoto.quantidadeMarchas = 6;
 terceiraMoto.velocidadeMaxima = 250;
 terceiraMoto.quantidadeAceleracao = 5;
 primeiraMoto.buzinar();
 try{
 primeiraMoto.acelerar();
 } catch (Exception e) {
 System.out.println(e.getMessage());
 }
 try {
 primeiraMoto.ligar();
 } catch (Exception e) {
 System.out.println(e.getMessage());
 }
 
 try {
 System.out.println(primeiraMoto.acelerar());
 System.out.println(primeiraMoto.acelerar());
 System.out.println(primeiraMoto.acelerar());
 } catch (Exception e) {
 System.out.println(e.getMessage());
 }
 
 try {
 segundaMoto.ligar();
 System.out.println(segundaMoto.acelerar());
 System.out.println(segundaMoto.acelerar());
 System.out.println(segundaMoto.acelerar());
 } catch (Exception e) {
 System.out.println(e.getMessage());
 }
 }
}