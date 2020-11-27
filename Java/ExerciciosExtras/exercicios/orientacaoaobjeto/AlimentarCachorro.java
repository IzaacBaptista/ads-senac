package ExerciciosExtras.exercicios.orientacaoaobjeto;

public class AlimentarCachorro{
    public static void main(String[] args) {
        System.out.println("Criando os cachorros");
        Cachorro cao1 = new Cachorro("Lulu");
        Cachorro cao2 = new Cachorro("Pitu");

        cao1.descomer();
        cao1.descomer();
        cao1.descomer();
        cao1.descomer();
        cao1.descomer();

        cao2.comer();
        cao2.comer();
        cao2.comer();
        cao2.comer();
        cao2.comer();

        System.out.println(cao1.fome);
        System.out.println(cao2.fome);
    }
}