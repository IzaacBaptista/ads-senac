
import java.util.ArrayList;
import java.util.Date;
//import java.util.Scanner;
import java.util.Scanner;

public class Cliente {
    protected static int idCliente;
    protected static String nome;
    protected static String dataDeNascimento;
    protected static String cpf;
    protected static int diasParaDevolucao;
    public ArrayList<Locacao> locacoes;
    public ArrayList<VeiculosLocados> veiculosLocados;
    public Locacao locacao;
    public int diaDev;

    // constructor
    public Cliente(int idCliente, String nome, String dataDeNascimento, String cpf, int diasParaDevolucao) {
        this.idCliente = idCliente;
        this.nome = nome;
        this.dataDeNascimento = dataDeNascimento;
        this.cpf = cpf;
        this.diasParaDevolucao = diasParaDevolucao;
        this.locacoes = new ArrayList<>();
    }

    // Método com a Quantidade de Veiculos Locados
    public int qtdVeiculosLocados() {
        return ((ArrayList<VeiculosLocados>) this.veiculosLocados).size();
    }

    // Método cadastrar cliente
    public static void addCliente() {
        Scanner input = new Scanner(System.in);
        System.out.println("Cadastro do cliente\n");
        System.out.println("Nome do Clente?\n");
        String nome = input.nextLine();
        System.out.println("Data de nascimento?\n");
        String dataDeNascimento = input.nextLine();
        System.out.println("CPF do Clente?\n");
        String cpf = input.nextLine();
    }

    // Método exibir cliente
    public static void printCliente() {
        System.out.println(" ==== Cliente ==== " + 
        "\nId: " + getIdCliente() + 
        "\nNome: " + getNome() + 
        "\nData de Nascimento: " +  getDataDeNascimento() + 
        "\nCPF: " + getCpf() + 
        "\nDias para Devolução: " + getDiasParaDevolucao());
	}

    // sets

    public void setId(int idCliente) {
        Cliente.idCliente = idCliente;
    }

    public void setNome(String nome) {
        Cliente.nome = nome;
    }

    public void setDataDeNascimento(String dataDeNascimento) {
        Cliente.dataDeNascimento = dataDeNascimento;
    }

    public void setCpf(String cpf) {
        Cliente.cpf = cpf;
    }

    public void setDiasParaDevolucao(int diasParaDevolucao) {
        Cliente.diasParaDevolucao = diasParaDevolucao;
    }

    public void setLocacao(Locacao locacoes) {
        this.locacoes.add(locacoes);
        locacoes.setCliente(this);
    }

    public void setCliente(Locacao locacao) {
        this.locacao = locacao;
    }

    public static int getIdCliente() {
        return Cliente.idCliente;
    }

    // gets

    public static String getNome() {
        return Cliente.nome;
    }

    public static String getDataDeNascimento() {
        return Cliente.dataDeNascimento;
    }

    public static String getCpf() {
        return Cliente.cpf;
    }

    public static int getDiasParaDevolucao() {
        return Cliente.diasParaDevolucao;
    }

    @Override
    public boolean equals(Object o) {
        if (o == this)
            return true;
        if (!(o instanceof Cliente)) {
            return false;
        }
        Cliente cliente = (Cliente) o;
        return idCliente == cliente.idCliente;
    }

    @Override
    public String toString() {
        return " ==== Cliente ==== " + 
               "\nId: " + getIdCliente() + 
               "\nNome: " + getNome() + 
               "\nData de Nascimento: " +  getDataDeNascimento() + 
               "\nCPF: " + getCpf() + 
               "\nDias para Devolução: " + getDiasParaDevolucao();
    }   
}
