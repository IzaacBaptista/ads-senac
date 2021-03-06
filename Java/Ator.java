import java.util.ArrayList;

public class Ator extends People implements Orcamento {
    int idAtor;
    public String nivelFamoso;
    private Object filmes;
    
    public Ator(String nome, String localizacao, double preco, int idAtor, String nivelFamoso) {
        super(nome, localizacao, preco);
        this.idAtor = idAtor;
        this.nivelFamoso = nivelFamoso;
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

    public void setIdAtor(int idAtor) {
        this.idAtor = idAtor;
    }

    public void setNivelFamoso(String nivelFamoso) {
        this.nivelFamoso = nivelFamoso;
    }

    public void setFilme(Filme filme) {
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

    public int getIdAtor() {
        return this.idAtor;
    }

    public String getNivelFamoso() {
        return this.nivelFamoso;
    }

    ArrayList<Filme> getFilme() {
        return super.filmes;
    }

    @Override
    public boolean equals(Object o) {
        if (o == this)
            return true;
        if (!(o instanceof Ator)) {
            return false;
        }
        Ator ator = (Ator) o;
        return idAtor == ator.idAtor;
    }

    @Override
    public String toString() {
        return " ==== Ator ==== " + 
               "\nId: " + getIdAtor() + 
               "\nNome: " + getNome() + 
               "\nLocalização: " + getLocalizacao() + 
               "\nPreço: " + getPreco() + 
               "\nNível de Famoso: " + getNivelFamoso() +
               "\nInvestimento: " + this.qtdInvestimento();
    }

    @Override
    public double qtdInvestimento() {
        double investimento = super.getPreco() * ((ArrayList<Filme>) this.filmes).size();
         return investimento;
    }    
}
