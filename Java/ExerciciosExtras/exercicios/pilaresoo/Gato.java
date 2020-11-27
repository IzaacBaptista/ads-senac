package ExerciciosExtras.exercicios.pilaresoo;

public class Gato extends Animal {
    Pelo pelo = Pelo.LONGO;

    @Override
    String fala() {
        return "Miau";
    }
}