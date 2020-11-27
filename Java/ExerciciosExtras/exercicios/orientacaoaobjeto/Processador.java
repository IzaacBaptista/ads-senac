package ExerciciosExtras.exercicios.orientacaoaobjeto;

public class Processador {

    String nomeProcessador;
    double qtdMaxProcessamento;
    double qtdEmProcessamento = 0;
    Computador computador;

    Processador(Computador computador, String processador, double qtdMaxProcessamento) {
        this.computador = computador;
        this.nomeProcessador = processador;
        this.qtdMaxProcessamento = qtdMaxProcessamento;
    }

    void processar(double qtdProcessamento){
        if (!this.computador.estaLigado()) {
            System.out.println("Computador está desligado");
        } else if (this.qtdEmProcessamento + qtdProcessamento > this.qtdMaxProcessamento) {
            System.out.println("Capacidade máxima de processamento atingida");
        } else {
            System.out.println("Alocada memória");
            this.qtdEmProcessamento += qtdProcessamento;
        }
    }

    void liberarMemoria(double qtdProcessamento){
        if (!this.computador.estaLigado()) {
            System.out.println("Computador está desligado");
        } else if (this.qtdEmProcessamento - qtdProcessamento < 0) {
            System.out.println("Processamento não pode liberar mais memória");
        } else {
            System.out.println("Desalocada memória");
            this.qtdEmProcessamento -= qtdProcessamento;
        }
    }

    void zerarMemoria(){
        this.qtdEmProcessamento = 0;
    }
}