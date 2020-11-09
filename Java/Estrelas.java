import java.util.ArrayList;

public class Estrelas {
    public static void main(String[] args) {
        Franquia marvel = new Franquia(1, "Marvel Studios", "Marvel", "1978");

        Heroi wolverine = new Heroi("Logan", "Desconhecida", 1000, 1, "não-humano", marvel);

        Filme filme = new Filme(1, "Logan", "1980", 50000);

        //filme.setHeroi(wolverine);

        Ator hugeJackman = new Ator("Huge Jackman", "NYC", 1200, 3, "Experiente");

        //System.out.println(marvel);
        System.out.println(wolverine);
        System.out.println(filme);
        System.out.println(hugeJackman);
    }
}
