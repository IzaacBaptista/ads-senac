package ExerciciosExtras.exercicios.orientacaoaobjeto;

public class Maquinas {
    public static void main(String[] args) {
        Computador computador = new Computador("Jubileu", "Intel", 1500);

        computador.processador.processar(500);

        computador.ligar();
        computador.processador.processar(500);
        computador.processador.processar(500);
        computador.processador.processar(500);
        computador.processador.processar(500);
        computador.processador.processar(500);
        computador.processador.processar(500);
        computador.processador.processar(500);

        computador.processador.liberarMemoria(2000);
        computador.processador.liberarMemoria(500);
        computador.processador.liberarMemoria(500);
        computador.processador.liberarMemoria(500);
        computador.processador.liberarMemoria(500);
        computador.processador.liberarMemoria(500);
        computador.processador.liberarMemoria(500);

        computador.desligar();
        computador.processador.processar(500);
        computador.processador.liberarMemoria(500);
    }
}