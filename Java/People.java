public class People {
    protected String nome; 
    protected String localizacao;
    protected double preco;

    public People(String nome, String localizacao, double preco){
        this.nome = nome;
        this.localizacao = localizacao;
        this.preco = preco; 
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setLocalizacao(String localizacao) {
        this.localizacao = localizacao;
    }

    public void setPreco(double preco) {
        this.preco = preco;
    }

    public String getNome() {
        return this.nome;
    }

    public String getLocalizacao() {
        return this.localizacao;
    }

    public double getPreco() {
        return this.preco;
    }

    @Override
    public String toString() {
        return " ==== Pessoa ==== " +
        "\nNome: " + getNome() +
        "\nLocalização: " + getLocalizacao() +
        "\nPreço: " + getPreco();
    } 
}
