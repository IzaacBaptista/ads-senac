package ExerciciosExtras.exercicios.pilaresoo;

public class Animal{

    int fome = 10;
    Pelo pelo = Pelo.CURTO;
    
    void comer(){
        this.fome--;
    }

    void brincar(){
        this.fome++;
    }

    String fala(){
        return "";
    }
}