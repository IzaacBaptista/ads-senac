package heranca.heranca;

public class Gerente extends Usuario{
    private double orcamento;
    private String setor;

    public Gerente(
        String nome, 
        String senha,
        double orcamento,
        String setor
    ){
        super(nome, senha);
        this.orcamento = orcamento;
        this.setor = setor;
    }

    public void setOrcamento(double orcamento) {
        this.orcamento = orcamento;
    }

    public void setSetor(String setor)  {
        this.setor = setor;
    }

    public double getOrcamento() {
        return this.orcamento;
    }

    public String getSetor()  {
        return this.setor;
    }

    public String getNome() {
        return super.nome;
    }

    @Override
    public String toString() {
        return " ==== Gerente ====" +
        "\nNome: " + getNome() +
        "\nSetor: " + getSetor() +
        "\nOrcamento: " + getOrcamento();
    } 
}
