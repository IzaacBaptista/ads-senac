package ExerciciosExtras.exercicios.arrayecollections;


import java.util.ArrayList;

public class ListCollection {
    public static void main(String[] args) {
        ArrayList<String> list = new ArrayList<>();

        list.add("Valor 4");
        list.add("Valor 2");
        list.add("Valor 3");
        list.add("Valor 1");

        for(String value:list){
            System.out.println(value);
        }

        System.out.print("Valor no index 1: ");
        System.out.println(list.get(1));

        System.out.print("Remover o valor do index 1: ");
        System.out.println(list.remove(1));

        System.out.print("Remover o valor 'Valor 3': ");
        System.out.println(list.remove(new String("Valor 3")));

        System.out.print("Verifica se 'Valor 1' existe: ");
        System.out.println(list.contains(new String("Valor 1")));
    }
}