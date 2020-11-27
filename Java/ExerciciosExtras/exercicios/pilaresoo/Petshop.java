package ExerciciosExtras.exercicios.pilaresoo;

public class Petshop {
    public static void main(String[] args) {
        Animal animal = new Animal();
        
        System.out.println(animal.fala());
        System.out.println(animal.fome);
        System.out.println(animal.pelo);

        animal.comer();
        animal.comer();
        animal.comer();
        animal.comer();
        animal.comer();
        animal.comer();
        System.out.println(animal.fome);
        animal.brincar();
        animal.brincar();
        animal.brincar();
        System.out.println(animal.fome);

        Animal cachorro = new Cachorro();
        
        System.out.println(cachorro.fala());
        System.out.println(cachorro.fome);

        cachorro.comer();
        cachorro.comer();
        cachorro.comer();
        cachorro.comer();
        cachorro.comer();
        cachorro.comer();
        System.out.println(cachorro.fome);
        cachorro.brincar();
        cachorro.brincar();
        cachorro.brincar();
        System.out.println(cachorro.fome);

        Animal gato = new Gato();
        
        System.out.println(gato.fala());
        System.out.println(gato.fome);

        gato.comer();
        gato.comer();
        gato.comer();
        gato.comer();
        gato.comer();
        gato.comer();
        System.out.println(gato.fome);
        gato.brincar();
        gato.brincar();
        gato.brincar();
        System.out.println(gato.fome);

    }
}