public class LojaVirtual {
    public static void main(String[] args) {
        Carrinho carrinho1 = new Carrinho("24/09/2020");

        carrinho1.addProduto("Processador Intel Pentium III", 15.0, 3);
        carrinho1.addProduto("Monitor 10''", 35.0, 1);

        for (Produto produto: carrinho1.produtos){
            System.out.println(produto.nome);
        }
    }
}
