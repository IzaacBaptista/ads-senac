package ExerciciosExtras.exercicios.orientacaoaobjeto;

public class Cachorro {
    String nome;
    int fome = 10;
    
    Cachorro(String nome){
        this.nome = nome;
    }

    void comer(){
        this.fome--;
    }

    void descomer(){
        this.fome++;
    }
}