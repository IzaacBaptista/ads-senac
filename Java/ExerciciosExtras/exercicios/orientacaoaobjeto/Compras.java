package ExerciciosExtras.exercicios.orientacaoaobjeto;

public class Compras {
    public static void main(String[] args) {
        
        Item item1 = new Item("Notebook",2500,1,15);
        Item item2 = new Item("Mousepad",500,3,2.75);
        Item item3 = new Item("TV LED 62'' 4K",6500,3,10);

        Cart cart = new Cart("1");

        cart.adicionarItem(item1);
        cart.adicionarItem(item2);
        cart.adicionarItem(item3);

        System.out.println("Parabéns! O Total da sua compra foi de R$ " + cart.calcularPrecoFinal());
        System.out.println("O peso para o frete é de " + cart.calcularPesoFrete() + "kg.");
    }
}