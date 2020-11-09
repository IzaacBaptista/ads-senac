import java.util.ArrayList;

public class Heroi extends People{
    int idHeroi;
    String nome;
    String localizacao;
    String identidade;
    double preco;
    Franquia franquia;
    ArrayList<HeroisDoFilme> heroisDoFilmes;
    ArrayList<Filme> filmes;

    public Heroi(String nome, String localizacao, double preco, int idHeroi, String identidade, Franquia franquia) {
        super(nome, localizacao, preco);
        this.idHeroi = idHeroi;
        this.identidade = identidade;
        this.franquia = franquia;
        this.heroisDoFilmes = new ArrayList<>();
        this.filmes = new ArrayList<>();

        franquia.herois.add(this);
    }

    public void setFilme(Filme filme) {
        this.filmes.add(filme);
    }

    public void totalInvestimento() {
        System.out.println("orçamento estimado entre US$ 316 e US$ 400 milhões");
    }

    public void qntdFilmes() {
        System.out.println("");
    }

    public void setIdHeroi(int idHeroi) {
        this.idHeroi = idHeroi;
    }

    public void setNome(String nome) {
        super.nome = nome;
    }

    public void setLocalizacao(String localizacao) {
        super.localizacao = localizacao;
    }

    public void setPreco(double preco) {
        super.preco = preco;
    }

    public void setIdentidade(String identidade) {
        this.identidade = identidade;
    }

    public void setFranquia(Franquia franquia) {
        this.franquia = franquia;
    }

    public ArrayList<Filme>getFilmes() {
        return this.filmes;
    }

    public int getIdHeroi() {
       return this.idHeroi;
    }

    public String getNome() {
        return super.nome;
    }

    public String getLocalizacao() {
        return super.localizacao;
    }

    public double getPreco() {
        return super.preco;
    }

    public String getIdentidade() {
        return this.identidade;
    }

    public Franquia getFranquia() {
        return this.franquia;
    }

    @Override
    public boolean equals(Object o) {
        if  (o == this)
        return true;
        if  (!(o instanceof Heroi)) {
            return false;
        }
        Heroi heroi = (Heroi) o;
        return idHeroi == heroi.idHeroi;
    }

    @Override
    public String toString() {
        String print = " ==== Herói ==== " +
            "\nId: " + getIdHeroi() +
            "\nNome: " + getNome() +
            "\nLocalização: " + getLocalizacao() +
            "\nPreço: " + getPreco() +
            "\nIdentidade: " + getIdentidade() + 
            "\nFranquia: " + getFranquia();
        return print;
    }

}
