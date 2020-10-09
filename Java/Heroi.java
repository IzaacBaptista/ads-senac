import java.util.ArrayList;
import Pessoa.Pessoa;

public class Heroi {
    private int id;
    private String nome;
    private String localizacao;
    private String identidade;
    private double preco;
    private Franquia franquia;
    private ArrayList<HeroisDoFilme> heroisDoFilmes;

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
