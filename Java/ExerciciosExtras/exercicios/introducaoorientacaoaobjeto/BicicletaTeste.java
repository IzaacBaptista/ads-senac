package ExerciciosExtras.exercicios.introducaoorientacaoaobjeto;

public class BicicletaTeste {
    public static void main(String[] args) {
        System.out.println(Bicicleta.marcha);
        Bicicleta b1 = new Bicicleta("Marca", 17);
        Bicicleta b2 = new Bicicleta("Marca", 17);
        System.out.println(b1.marcha);

        b1.marcha = 12;

        System.out.println(b1.marcha);
        System.out.println(b2.marcha);
    }
}