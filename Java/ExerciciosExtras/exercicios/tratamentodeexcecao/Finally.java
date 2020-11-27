package ExerciciosExtras.exercicios.tratamentodeexcecao;

public class Finally {
    public static void main(String[] args) {
        try {
            System.out.println(7 / 0);
        } finally {
            System.out.println("Saída abortada");
        }

        System.out.println("Saída normal");
    }
}