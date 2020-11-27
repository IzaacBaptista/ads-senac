package ExerciciosExtras.exercicios.introducaoorientacaoaobjeto;

public class CarroComConstrutor {
    String modelo;
    String marca;
    double preco;
    double percentualDesconto;

    double desconto(){
        return preco - ( preco * ( percentualDesconto / 100 ));
    }

    CarroComConstrutor(String modeloInicial){
        modelo = modeloInicial;
    }

    CarroComConstrutor(){
        
    }
}
