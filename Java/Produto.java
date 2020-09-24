public class Produto {
    String nome;
    double preco;
    int quantidade;
    Carrinho carrinho;

    public Produto(String nome, double preco, int quantidade, Carrinho carrinho) {
        this.nome = nome;
        this.preco = preco;
        this.quantidade = quantidade;
        this.carrinho = carrinho;
    }
}
