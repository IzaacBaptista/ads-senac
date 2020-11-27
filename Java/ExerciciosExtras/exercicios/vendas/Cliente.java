package ExerciciosExtras.exercicios.vendas;

import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.Objects;

import ExerciciosExtras.exercicios.vendas.implementacoes.Nome;

public class Cliente extends Usuario implements Nome {

    private String endereco;
    private String telefone;
    private Date dtCadastro = new Date();
    private List<Venda> compras = new ArrayList<>();

    public Cliente() {
    }

    public Cliente(String userName, String password, String nome, String endereco, String telefone) {
        super(userName, password, nome);
        this.endereco = endereco;
        this.telefone = telefone;
    }

    public String getEndereco() {
        return this.endereco;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    public String getTelefone() {
        return this.telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }

    public Date getDtCadastro() {
        return this.dtCadastro;
    }

    public void setDtCadastro(Date dtCadastro) {
        this.dtCadastro = dtCadastro;
    }

    public void adicionarCompra(Venda venda){
        this.compras.add(venda);
    }

    @Override
    public String getNome(){
        return super.getNome();
    }

    @Override
    public boolean equals(Object o) {
        if (o == this)
            return true;
        if (!(o instanceof Cliente)) {
            return false;
        }
        Cliente cliente = (Cliente) o;
        return Objects.equals(endereco, cliente.endereco) && Objects.equals(telefone, cliente.telefone) && Objects.equals(dtCadastro, cliente.dtCadastro);
    }

    @Override
    public int hashCode() {
        return Objects.hash(endereco, telefone, dtCadastro);
    }

    @Override
    public String toString() {
        return "Nome: " + getNome() + " Endereço: " + getEndereco() + " Telefone: " + getTelefone();
    }

    public void imprimirCompras(){
        System.out.println("Cliente: " + this.getNome());
        System.out.println("Quantidade de Compras: " + this.quantidadeDeCompras());
        valorCompras();
    }

    private int quantidadeDeCompras(){
        return this.compras.size();
    }

    private void valorCompras(){
        for(Venda compra: this.compras){
            System.out.print("Data da Compra: " + compra.getDtVenda() + " ");
            System.out.print("Valor da Compra: " + compra.total() + "\n");
            System.out.println("Produtos: ");
            compra.produtos();
            System.out.print("\n");
        }
    }
}