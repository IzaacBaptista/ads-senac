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

        //franquias.add(this);
    }
    //referenciando (polimorfismo) o construtor FRANQUIA
    public Franquia (int idFranquia, String nome){
        this(idFranquia, nome, "", "");
    }

    public void quantidadeDeHerois(Heroi heroi) {
        this.herois.add(heroi);
    }
}
