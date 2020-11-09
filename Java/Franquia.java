import java.util.ArrayList;

public class Franquia {
    int idFranquia;
    String nome;
    String apelido;
    String dataDeCriacao;
    ArrayList<Heroi> herois;

    public Franquia(int idFranquia, String nome, String apelido, String dataDeCriacao) {
        this.idFranquia = idFranquia;
        this.nome = nome;
        this.apelido = apelido;
        this.dataDeCriacao = dataDeCriacao;
        this.herois = new ArrayList<>();

        // franquias.add(this);
    }

    // referenciando (polimorfismo) o construtor FRANQUIA
    public Franquia(int idFranquia, String nome) {
        this(idFranquia, nome, "", "");
    }

    public void quantidadeDeHerois(Heroi heroi) {
        this.herois.add(heroi);
    }
    /*
    public void setIdFranquia(int idFranquia) {
        this.idFranquia = idFranquia;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setApelido(String apelido) {
        this.apelido = apelido;
    }

    public void setDataDeCriacao(String dataDeCriacao) {
        this.dataDeCriacao = dataDeCriacao;
    }

    public void setHeroi(ArrayList<Heroi> herois) {
        this.herois = herois;
    }

    public int getIdFranquia() {
        return this.idFranquia;
    }

    public String getNome() {
        return this.nome;
    }

    public String getApelido() {
        return this.apelido;
    }

    public String getDataDeCriacao() {
        return this.dataDeCriacao;
    }

    public ArrayList<Heroi> getHeroi() {
        return this.herois = herois;
    }

    @Override
    public boolean equals(Object o) {
        if  (o == this)
        return true;
        if  (!(o instanceof Franquia)) {
            return false;
        }
        Franquia franquia = (Franquia) o;
        return idFranquia == franquia.idFranquia;
    }

    @Override
    public String toString() {
        String print = " ==== Franquia ==== " +
            "\nId: " + getIdFranquia() +
            "\nNome: " + getNome() +
            "\nApelido: " + getApelido() +
            "\nData: " + getDataDeCriacao() +
            "\nHeroi: " + getHeroi(); 
        return print;
    }
    */
}
