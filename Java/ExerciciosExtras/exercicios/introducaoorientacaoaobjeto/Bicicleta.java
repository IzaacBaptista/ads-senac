package ExerciciosExtras.exercicios.introducaoorientacaoaobjeto;

public class Bicicleta {
    String cor;
    int aro;
    String marca;
    boolean comRodinha;
    int velocidade;
    static int marcha = 8;

    void pedalar(){
        velocidade++;
    }

    Bicicleta(String marca, int aro) {
        this.marca = marca;
        this.aro = aro;
        
        this.pedalar();
    }

    Bicicleta(){
        this("Marca", 10);
    }

}