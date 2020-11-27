package ExerciciosExtras.exercicios.vendas;

import java.util.ArrayList;
import java.util.Date;
import java.util.HashSet;
import java.util.List;
import java.util.Objects;
import java.util.Set;

public class Venda {

    private Date dtVenda = new Date();
    private Cliente cliente;
    private Funcionario funcionario;
    private List<VendaProduto> vendaProdutos = new ArrayList<>();

    public Venda() {
    }

    public Venda(Cliente cliente, Funcionario funcionario) {
        this.cliente = cliente;
        this.funcionario = funcionario;

        cliente.adicionarCompra(this);
        funcionario.adicionarVenda(this);
    }

    public Date getDtVenda() {
        return this.dtVenda;
    }

    public void setDtVenda(Date dtVenda) {
        this.dtVenda = dtVenda;
    }

    public Cliente getCliente() {
        return this.cliente;
    }

    public void setCliente(Cliente cliente) {
        this.cliente = cliente;
    }

    public Funcionario getFuncionario() {
        return this.funcionario;
    }

    public void setFuncionario(Funcionario funcionario) {
        this.funcionario = funcionario;
    }

    public void adicionarProduto(Produto produto, int quantidade){
        this.vendaProdutos.add(new VendaProduto(produto, quantidade));
    }

    public double total(){
        double total = 0.0;
        for(VendaProduto venda: this.vendaProdutos){
            total += (venda.getQuantidade() * venda.getProduto().getValor());
        }

        return total;
    }

    public void produtos(){
        Set<String> produtos = new HashSet<>();
        for(VendaProduto venda: this.vendaProdutos){
            produtos.add(venda.getProduto().getNome());
        }
        for(String produto: produtos){
            System.out.println(produto);
        }
    }

    @Override
    public boolean equals(Object o) {
        if (o == this)
            return true;
        if (!(o instanceof Venda)) {
            return false;
        }
        Venda venda = (Venda) o;
        return Objects.equals(dtVenda, venda.dtVenda) && 
            cliente.equals(venda.cliente) && 
            funcionario.equals(venda.funcionario);
    }

    @Override
    public int hashCode() {
        return Objects.hash(dtVenda, cliente, funcionario);
    }

    @Override
    public String toString() {
        return "{" +
            " dtVenda='" + getDtVenda() + "'" +
            ", cliente='" + getCliente() + "'" +
            ", funcionario='" + getFuncionario() + "'" +
            "}";
    }
    
}