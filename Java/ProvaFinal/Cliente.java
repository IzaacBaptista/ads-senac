package ProvaFinal;
//coments
import java.util.ArrayList;
import java.util.Date;

public class Cliente {
    protected int idCliente;
    protected String nome;
    protected Date dataDeNascimento;
    protected String cpf;
    protected int diasParaDevolucao;
    public ArrayList<Locacao> locacoes;
    public ArrayList<VeiculosLocados> veiculosLocados;
    public Locacao locacao;
	public int diaDev;

    //constructor
    public Cliente(int idCliente, String nome, Date dataDeNascimento, String cpf, int diasParaDevolucao) {
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
    
    //sets

    public void setId(int idCliente) {
        this.idCliente = idCliente;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
    
    public void setDataDeNascimento(Date dataDeNascimento) {
        this.dataDeNascimento = dataDeNascimento;
    }

    public void setCpf(String cpf)  {
        this.cpf = cpf;
    }

    public void setDiasParaDevolucao(int diasParaDevolucao)  {
        this.diasParaDevolucao = diasParaDevolucao;
    }

    public void setLocacao(Locacao locacoes) {
        this.locacoes.add(locacoes);
        locacoes.setCliente(this);
    }

    public void setCliente(Locacao locacao) {
        this.locacao = locacao;
	}

    public int getIdCliente() {
        return this.idCliente;
    }

    //gets
    
    public String getNome() {
        return this.nome;
    }
    
    public Date getDataDeNascimento() {
        return this.dataDeNascimento;
    }

    public String getCpf()  {
        return this.cpf;
    }

    public int getDiasParaDevolucao()  {
        return this.diasParaDevolucao;
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
