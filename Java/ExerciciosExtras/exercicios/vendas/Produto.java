package ExerciciosExtras.exercicios.vendas;

import java.util.Objects;

public class Produto {

    private String nome;
    private double valor;

    public Produto() {
    }

    public Produto(String nome, int valor) {
        this.nome = nome;
        setValor(valor);
    }

    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public double getValor() {
        return this.valor;
    }

    public void setValor(double valor) {
        if(valor < 0){
            this.valor = 0;
        } else {
            this.valor = valor;
        }
    }

    @Override
    public boolean equals(Object o) {
        if (o == this)
            return true;
        if (!(o instanceof Produto)) {
            return false;
        }
        Produto produto = (Produto) o;
        return Objects.equals(nome, produto.nome);
    }

    @Override
    public int hashCode() {
        return Objects.hashCode(nome);
    }

    @Override
    public String toString() {
        return "{" +
            " nome='" + getNome() + "'" +
            "}";
    }

}