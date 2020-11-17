package ProvaFinal;
//coments
import java.util.ArrayList;
import java.util.Date;

public class Cliente {
    int idCliente;
    String nome;
    Date dataDeNascimento;
    String cpf;
    int diasParaDevolucao;
    ArrayList<Locacao> locacoes;
    private Locacao locacao;

    public Cliente(int idCliente, String nome, Date dataDeNascimento, String cpf, int diasParaDevolucao) {
        this.idCliente = idCliente;
        this.nome = nome;
        this.dataDeNascimento = dataDeNascimento;
        this.cpf = cpf;
        this.diasParaDevolucao = diasParaDevolucao;
        this.locacoes = new ArrayList<>();
    }

    public void qtdVeiculosLocados(){

    }

    public void setId(int id) {
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
