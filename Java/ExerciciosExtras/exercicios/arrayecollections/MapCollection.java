package ExerciciosExtras.exercicios.arrayecollections;


import java.util.HashMap;
import java.util.Map;
import java.util.Map.Entry;

public class MapCollection {
    public static void main(String[] args) {
        Map<Integer, String> map = new HashMap<>();

        map.put(1, "Primeiro Elemento");
        map.put(2, "Segundo Elemento");
        System.out.println(map.get(2));
        
        
        map.put(2, "Segundo Elemento Modificado");
        System.out.println(map.get(2));


        System.out.println(map.size());

        System.out.println(map);
        System.out.println(map.keySet());
        System.out.println(map.values());
        System.out.println(map.entrySet());

        System.out.println(map.containsKey(5));
        System.out.println(map.containsValue("Batata"));
        System.out.println(map.containsKey(1));
        System.out.println(map.containsValue("Primeiro Elemento"));


        for(Entry<Integer, String> value:map.entrySet()){
            System.out.println(value.getKey());
            System.out.println(value.getValue());
        }
    }
}