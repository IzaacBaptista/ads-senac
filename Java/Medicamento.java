import java.util.ArrayList;

public class Medicamento {
    String nome;
    String posologia;
    String fabricante;
    ArrayList<ReceitaMedica> receitas = new ArrayList<>();

    public Medicamento(String nome, String posologia, String fabricante) {
        this.nome = nome;
        this.posologia = posologia;
        this.fabricante = fabricante;
    }

    public void addReceita(ReceitaMedica receita) {
        this.receitas.add(receita);
    }
}
