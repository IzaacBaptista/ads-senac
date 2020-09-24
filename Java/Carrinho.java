import java.util.ArrayList;

public class Carrinho {
    String dataCompra;
    ArrayList<Produto> produtos = new ArrayList<>();

    public Carrinho(String dataCompra) {
        this.dataCompra = dataCompra;
    }

    public void addProduto(String nome, double preco, int quantidade) {
        Produto produto = new Produto(nome, preco, quantidade, this);
        this.produtos.add(produto);
    }
}
