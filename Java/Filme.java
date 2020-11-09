import java.util.ArrayList;

public class Filme {
    int idFilme;
    String nome;
    String dataDeLancamento;
    double previsaoDeInvestimento;
    ArrayList<HeroisDoFilme> heroisDoFilme;
    ArrayList<Heroi> herois;

    public Filme(int idFilme, String nome, String dataDeLancamento, double previsaoDeInvestimento) {
        this.idFilme = idFilme;
        this.nome = nome;
        this.dataDeLancamento = dataDeLancamento;
        this.previsaoDeInvestimento = previsaoDeInvestimento;
        this.heroisDoFilme = new ArrayList<>();
        this.herois = new ArrayList<>();
    }

    public void quantidadeDeHeroisNoFilme(HeroisDoFilme herois) {
        double valorInvestido = 0;
        double saldo = 0;
        if (valorInvestido > saldo) {
            System.out.println("Lucro");
        } else {
            System.out.println("Perda");
        }
    }

    public void totalInvestidoComOsHerois() {

    }

    public void setIdFilme(int idFilme) {
        this.idFilme = idFilme;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setDataDeLancamento(String dataDeLancamento) {
        this.dataDeLancamento = dataDeLancamento;
    }

    public void setPrevisaoDeInvestimento(double previsaoDeInvestimento) {
        this.previsaoDeInvestimento = previsaoDeInvestimento;
    }

    public void setHeroi(ArrayList<Heroi> herois) {
        this.herois = herois;
    }

    public ArrayList<HeroisDoFilme>getFilmes() {
        return this.heroisDoFilme;
    }

    public int getIdFilme() {
        return this.idFilme;
    }

    public String getNome() {
        return this.nome;
    }

    public String getDataDeLancamento() {
        return this.dataDeLancamento;
    }

    public double getPrevisaoDeInvestimento() {
        return this.previsaoDeInvestimento;
    }

    public ArrayList<HeroisDoFilme> getHeroi() {
        return this.heroisDoFilme;
    }

    @Override
    public boolean equals(Object o) {
        if  (o == this)
        return true;
        if  (!(o instanceof Filme)) {
            return false;
        }
        Filme filme = (Filme) o;
        return idFilme == filme.idFilme;
    }

    @Override
    public String toString() {
        String print = " ==== Filme ==== " +
            "\nId: " + getIdFilme() +
            "\nNome: " + getNome() +
            "\nData de Lançamento: " + getDataDeLancamento() +
            "\nInvestimento: " + getPrevisaoDeInvestimento();
        return print;
    }
}
