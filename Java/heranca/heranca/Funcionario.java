package heranca.heranca;

public class Funcionario extends Usuario{
    private double salario;
    private String setor;

    public Funcionario(
        String nome, 
        String senha,
        double salario,
        String setor
    ){
        super(nome, senha);
        this.salario = salario;
        this.setor = setor;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }

    public void setSetor(String setor)  {
        this.setor = setor;
    }

    public double getSalario() {
        return this.salario;
    }

    public String getSetor()  {
        return this.setor;
    }

    public String getNome() {
        return super.nome;
    }

    @Override
    public String toString() {
        return " ==== Funcionario ====" +
        "\nNome: " + getNome() +
        "\nSetor: " + getSetor() +
        "\nSalario: R$ " + getSalario();
    }
}
