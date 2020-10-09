import java.util.ArrayList;

public class Heroi {
    int id;
    String nome;
    String localizacao;
    String identidade;
    double preco;
    Franquia franquia;
    ArrayList<HeroisDoFilme> heroisDoFilmes;

    public Heroi(int id, String nome, String localizacao, String identidade, double preco, Franquia franquia) {
        this.id = id;
        this.nome = nome;
        this.localizacao = localizacao;
        this.identidade = identidade;
        this.preco = preco;
        this.franquia = franquia;
        this.heroisDoFilmes = new ArrayList<>();
    }

    public void totalInvestimento() {
        System.out.println("orçamento estimado entre US$ 316 e US$ 400 milhões");
    }

    public void qntdFilmes() {
        System.out.println("");
    }

}
