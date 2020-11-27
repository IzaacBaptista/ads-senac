package ExerciciosExtras.exercicios.pilaresoo;

public class Moto extends Veiculo {

    Moto(String marca, String modelo){
        super(marca,modelo,299,2);
    }
    
    @Override
    void acelerar(int velocidade){
        super.acelerar(velocidade);
        super.acelerar(velocidade);     
    }
}