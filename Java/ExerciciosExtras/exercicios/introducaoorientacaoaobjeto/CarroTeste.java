package ExerciciosExtras.exercicios.introducaoorientacaoaobjeto;

public class CarroTeste {
    public static void main(String[] args) {
        Carro carro1 = new Carro();
        carro1.marca = "Volkswagen";
        carro1.modelo = "Fox";
        carro1.preco = 10000;
        carro1.percentualDesconto = 10;

        Carro carro2 = new Carro();
        carro2.marca = "Volkswagen";
        carro2.modelo = "Fox";
        carro2.preco = 10000;
        carro2.percentualDesconto = 10;
        
        CarroComConstrutor carro3 = new CarroComConstrutor("Modelo");

        System.out.println(carro1.marca);
        System.out.println(carro1.desconto());
        System.out.println(carro2.marca);
        System.out.println(carro2.desconto());

        System.out.println(carro3.modelo);
    }
}