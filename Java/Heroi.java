import java.util.ArrayList;

public class Heroi {
    int id;
    String nome;
    String localizacao;
    String identidade;
    double preco;
    ArrayList<Franquia> franquias;
    ArrayList<HeroisDoFilme> heroisDoFilmes;

    public Heroi(int id, String nome, String localizacao, String identidade, double preco) {
        this.id = id;
        this.nome = nome;
        this.identidade = identidade;
        this.localizacao = localizacao;
        this.preco = preco;
        this.franquias = new ArrayList<>();
        this.heroisDoFilmes = new ArrayList<>();
    }

    public void totalInvestimento() {
        System.out.println("orçamento estimado entre US$ 316 e US$ 400 milhões");
    }

    public void qntdFilmes() {
        System.out.println("");
    }

}
