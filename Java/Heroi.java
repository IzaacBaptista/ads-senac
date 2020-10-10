import java.util.ArrayList;
import Pessoa.Pessoa;

public class Heroi extends Pessoa{
    public int idHeroi;
    public String identidade;
    Franquia franquia;
    ArrayList<HeroisDoFilme> heroisDoFilmes;

    public Heroi(int idHeroi, String nome, String localizacao, String identidade, double preco, Franquia franquia) {
        this.idHeroi = idHeroi;
        super.nome = nome;
        super.localizacao = localizacao;
        this.identidade = identidade;
        super.precoCache = precoCache;
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
