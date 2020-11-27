package ExerciciosExtras.exercicios.pilaresoo;

public class Cachorro extends Animal {
    Pelo pelo = Pelo.MEDIO;

    @Override
    String fala() {
        return "Au-Au";
    }

    @Override
    void comer(){
        this.fome -= 2;
    }

    void jogarBola(){
        
    }
}