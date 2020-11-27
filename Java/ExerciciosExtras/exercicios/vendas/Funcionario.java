package ExerciciosExtras.exercicios.vendas;

import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.Objects;

import ExerciciosExtras.exercicios.vendas.implementacoes.Nome;

public class Funcionario extends Usuario implements Nome {

    private double salario;
    private String banco;
    private Date dtAdmissao = new Date();
    private List<Venda> vendas = new ArrayList<>();

    public Funcionario() {
    }

    public Funcionario(String userName, String password, String nome, double salario, String banco) {
        super(userName, password, nome);
        this.salario = salario;
        this.banco = banco;
    }

    public double getSalario() {
        return this.salario;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }

    public String getBanco() {
        return this.banco;
    }

    public void setBanco(String banco) {
        this.banco = banco;
    }

    public Date getDtAdmissao() {
        return this.dtAdmissao;
    }

    public void setDtAdmissao(Date dtAdmissao) {
        this.dtAdmissao = dtAdmissao;
    }

    public void adicionarVenda(Venda venda){
        this.vendas.add(venda);
    }

    public void qtdCompras() {
        System.out.print("Nome: " + this.getNome()+ " ");
        System.out.print("Tempo de Contrato: " + tempoContrato() + " ");
        System.out.print("Quantidade de Vendas: " + qtdVendas() + "\n");
    }

    private long tempoContrato() {
        return Math.abs(new Date().getTime() - this.dtAdmissao.getTime());
    }

    private int qtdVendas() {
        return this.vendas.size();
    }

    @Override
    public String getNome(){
        return super.getNome();
    }

    @Override
    public boolean equals(Object o) {
        if (o == this)
            return true;
        if (!(o instanceof Funcionario)) {
            return false;
        }
        Funcionario funcionario = (Funcionario) o;
        return salario == funcionario.salario && Objects.equals(banco, funcionario.banco) && Objects.equals(dtAdmissao, funcionario.dtAdmissao);
    }

    @Override
    public int hashCode() {
        return Objects.hash(salario, banco, dtAdmissao);
    }

    @Override
    public String toString() {
        return "Nome: " + getNome();
    }

}