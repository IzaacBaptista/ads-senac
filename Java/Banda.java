package Poo;

public class Banda {
 public static void main(String[] args) {
 Musica songOne = new Musica();
 songOne.autor = "Michael Jackson";
 songOne.melodia = "Biligean";
 songOne.letra = "Biligean you gotcha my hearth";
 songOne.segundos = 360;
 try{ 
    songOne.tocar();
    songOne.tocar();
    songOne.tocar();
    songOne.tocar();
    songOne.tocar();
    songOne.tocar();
    songOne.tocar();
    songOne.tocar();
    songOne.tocar();
    songOne.rebobinar();
    songOne.rebobinar();
    songOne.rebobinar();
    songOne.rebobinar();
    songOne.rebobinar();
    songOne.rebobinar();
    songOne.rebobinar();
    songOne.rebobinar();
    songOne.rebobinar();
    songOne.rebobinar();
    songOne.rebobinar();
} catch (Exception e) {
    System.out.println(e.getMessage());
}
 }
}