package ExerciciosExtras.exercicios.pilaresoo;

public class Revenda {
    public static void main(String[] args) {
        Carro c1 = new Carro("VW","Fusca");
        Moto m1 = new Moto("Yamaha","XJ");

        c1.acelerar(10);
        c1.imprimirVelocidade();
        
        m1.acelerar(15);
        m1.imprimirVelocidade();
    }
}