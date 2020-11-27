package ExerciciosExtras.exercicios.orientacaoaobjeto;

import java.util.ArrayList;
import java.util.List;

public class Cart {

    String id;
    List<Item> itens = new ArrayList<>();

    Cart(String id){
        this.id = id;
    }

    void adicionarItem(Item item){
        this.itens.add(item);
    }

    double calcularPrecoFinal(){
        double total = 0;
        for(Item item: itens){
            total += item.preco * item.quantidade;
        }

        return total;
    }

    double calcularPesoFrete(){
        double total = 0;
        for(Item item: itens){
            total += item.peso;
        }

        return total;
    }

}