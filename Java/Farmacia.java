package Poo;
import java.util.Date;

public class Farmacia {
 public static void main(String[] args) {
 Remedio dipirona = new Remedio("Dipirona",2020,15,"Dipirona + Cafeína",5);
 Remedio aspirina = new Remedio("Aspirina",2015,1,"Aspirina",3);
 try{
 dipirona.qtdReceitada(10);
 } catch (Exception e) {
 System.out.println(e.getMessage());
 }
 dipirona.validade();
 aspirina.validade();
 }
}