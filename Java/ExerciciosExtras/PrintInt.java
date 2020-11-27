package ExerciciosExtras;

import java.util.ArrayList;
import java.util.List;

public class PrintInt {
    public static void main(String[] args) {
        List<Integer> listInteger = new ArrayList<>();

        listInteger.add(1);
        listInteger.add(3);
        listInteger.add(2);
        listInteger.add(4);

        for(int contador=0;contador<4;contador++){
            System.out.println(listInteger.get(contador));
        }

        int soma = 0;
        for(Integer var:listInteger){
            soma += var;
            System.out.println(var);
        }

        System.out.println(soma);
    }
}