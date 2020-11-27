package ExerciciosExtras.exercicios.vendas;

import java.util.Objects;

public class VendaProduto {

    private int quantidade;
    private Produto produto;

    public VendaProduto() {
    }

    public VendaProduto(Produto produto, int quantidade) {
        this.quantidade = quantidade;
        this.produto = produto;
    }

    public int getQuantidade() {
        return this.quantidade;
    }

    public void setQuantidade(int quantidade) {
        this.quantidade = quantidade;
    }

    public Produto getProduto() {
        return this.produto;
    }

    public void setProduto(Produto produto) {
        this.produto = produto;
    }
    
    @Override
    public boolean equals(Object o) {
        if (o == this)
            return true;
        if (!(o instanceof VendaProduto)) {
            return false;
        }
        VendaProduto vendaProduto = (VendaProduto) o;
        return quantidade == vendaProduto.quantidade && produto.equals(vendaProduto.produto);
    }

    @Override
    public int hashCode() {
        return Objects.hash(quantidade, produto);
    }

    @Override
    public String toString() {
        return "{" +
            " quantidade='" + getQuantidade() + "'" +
            ", produto='" + getProduto() + "'" +
            "}";
    }

}