package ExerciciosExtras.exercicios.arrayecollections;

import java.util.HashSet;
import java.util.Set;
import java.util.SortedSet;
import java.util.TreeSet;

public class SetCollection {
    @SuppressWarnings({"rawtypes","unchecked"})
    public static void main(String[] args) {
        // ------- Conjunto Heterogêneo --------
        HashSet hash = new HashSet();
        
        /* Como se tratam de valores primitivos serão convertidos 
        automáticos para o Wrapper correspondente */
        hash.add(8.5);
        hash.add(1);
        hash.add('c');
        hash.add(false);
        hash.add("Cenoura");

        System.out.print( "Valor do Hash: ");
        System.out.println(hash);
        System.out.print( "Tamanho do Hash: ");
        System.out.println(hash.size());

        System.out.println("Adiciona Arroz");
        hash.add("Arroz");
        System.out.print( "Tamanho do Hash: ");
        System.out.println(hash.size());

        System.out.println("Adiciona Cenoura");
        hash.add("Cenoura");
        System.out.print( "Tamanho do Hash: ");
        System.out.println(hash.size());


        System.out.print("Consegue remover Batata: ");
        System.out.println(hash.remove("Batata"));
        System.out.print( "Tamanho do Hash: ");
        System.out.println(hash.size());

        System.out.print("Consegue remover Cenoura: ");
        System.out.println(hash.remove("Cenoura"));
        System.out.print( "Tamanho do Hash: ");
        System.out.println(hash.size());

        System.out.print("Cenoura existe no Hash: ");
        System.out.println(hash.contains("Arroz"));

        // Union
        Set variables = new HashSet();
        variables.add("Pudim");
        variables.add(1);
        variables.add(6.5);

        System.out.print("Valor do conjunto hash: ");
        System.out.println(hash);
        System.out.print("Valor do conjunto variables: ");
        System.out.println(variables);

        hash.addAll(variables);

        System.out.print("Valor do conjunto hash: ");
        System.out.println(hash);

        // Intersection
        Set variables2 = new HashSet();
        variables2.add("Pudim");
        variables2.add(1);
        variables2.add(6.5);

        System.out.print("Valor do conjunto hash: ");
        System.out.println(hash);
        System.out.print("Valor do conjunto variables2: ");
        System.out.println(variables2);

        hash.retainAll(variables2);

        System.out.print("Valor do conjunto hash: ");
        System.out.println(hash);

        // Limpar valores
        hash.clear();
        System.out.print("Valor do conjunto hash: ");
        System.out.println(hash);


        // ------- Conjunto Homogêneo --------
        Set<String> set = new HashSet<String>();

        set.add("Batata");
        set.add("Cenoura");
        set.add("Arroz");

        System.out.print("Valor do conjunto set: ");
        System.out.println(set);

        for(String valores:set){
            System.out.println(valores);
        }

        SortedSet<String> sortedSet = new TreeSet<String>();

        sortedSet.add("Batata");
        sortedSet.add("Cenoura");
        sortedSet.add("Arroz");

        System.out.print("Valor do conjunto sortedSet: ");
        System.out.println(sortedSet);

        for(String valores:sortedSet){
            System.out.println(valores);
        }
    }
}