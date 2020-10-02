import java.util.ArrayList;

public class Franquia {
    int id;
    String nome;
    String apelido;
    String dataDeCriacao;
    ArrayList<Heroi> herois;

    public Franquia(int id, String nome, String apelido, String dataDeCriacao) {
        this.id = id;
        this.nome = nome;
        this.apelido = apelido;
        this.dataDeCriacao = dataDeCriacao;
        this.herois = new ArrayList<>();
    }

    public void quantidadeDeHerois(Heroi heroi) {
        this.herois.add(heroi);
    }
}
