import java.util.ArrayList;

public class Franquia {
    int id;
    String nome;
    String apelido;
    String DataDeCriação;
    ArrayList<Heroi> herois;

    public Franquia(int id, String nome, String apelido, String DataDeCriação) {
        this.id = id;
        this.nome = nome;
        this.apelido = apelido;
        this.DataDeCriação = DataDeCriação;
        this.herois = new ArrayList<>();
    }

    public void quantidadeDeHerois(Heroi heroi) {
        this.herois.add(heroi);
    }
}
