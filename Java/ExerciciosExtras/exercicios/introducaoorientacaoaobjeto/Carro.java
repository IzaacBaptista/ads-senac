package ExerciciosExtras.exercicios.introducaoorientacaoaobjeto;

public class Carro {
    String modelo;
    String marca;
    double preco;
    double percentualDesconto;

    double desconto(){
        return preco - ( preco * ( percentualDesconto / 100 ));
    }
}
