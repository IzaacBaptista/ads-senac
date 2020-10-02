import java.util.ArrayList;

public class Filme {
    int id;
    String DataDeLançamento;
    double previsaoDeInvestimento;
    ArrayList<HeroisDoFilme> heroisDoFilmes;

    public Filme(int id, String DataDeLançamento, double previsaoDeInvestimento) {
        this.id = id;
        this.DataDeLançamento = DataDeLançamento;
        this.previsaoDeInvestimento = previsaoDeInvestimento;
        this.heroisDoFilmes = new ArrayList<>();
    }

    public void quantidadeDeHeroisNoFilme(HeroisDoFilme herois) {
        double valorInvestido = 0;
        double saldo = 0;
        if(valorInvestido > saldo) {
            System.out.println("Lucro");
        } else {
            System.out.println("Perda");
        }
    }

    public void totalInvestidoComOsHerois() {

    }


}
