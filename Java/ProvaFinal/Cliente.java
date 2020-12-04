
import java.util.ArrayList;
import java.util.Date;
import java.util.Scanner;

public class Cliente {
    protected static int idCliente;
    protected static String nome;
    protected static String dataDeNascimento;
    protected static String cpf;
    protected static int diasParaDevolucao;
    public ArrayList<Locacao> locacoes;
    public ArrayList<VeiculosLocados> veiculosLocados;
    public int diaDev;

    //classe database
    public static Database<Cliente> data = new Database();

    // constructor
    public Cliente(String nome, String dataDeNascimento, String cpf, int diasParaDevolucao) {
        this.idCliente = data.IdCliente;
        this.nome = nome;
        this.dataDeNascimento = dataDeNascimento;
        this.cpf = cpf;
        this.diasParaDevolucao = diasParaDevolucao;
        this.locacoes = new ArrayList<>();
        data.inserirValor(this);
    }

    // Método com a Quantidade de Veiculos Locados
    public int qtdVeiculosLocados() {
        return ((ArrayList<VeiculosLocados>) this.veiculosLocados).size();
    }

    // Método cadastrar cliente
    public static void addCliente() {
        Scanner input = new Scanner(System.in);
        System.out.println("Cadastro do cliente\n");

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
        this.locacoes = locacoes;
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

    public static ArrayList<Cliente>getClientes() {
        return data.getValores();
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
