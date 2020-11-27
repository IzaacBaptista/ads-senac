package ExerciciosExtras.exercicios.orientacaoaobjeto;

public class Computador {

    final String nomeMaquina;
    Processador processador;
    boolean ligado = false;

    Computador(String nomeMaquina, String processador, double qtdMaxProcessamento){
        this.nomeMaquina = nomeMaquina;
        this.processador = new Processador(this, processador, qtdMaxProcessamento);
    }

    void ligar(){
        this.ligado = true;
    }

    void desligar(){
        this.ligado = false;
        this.processador.zerarMemoria();
    }

    boolean estaLigado(){
        return this.ligado;
    }
}