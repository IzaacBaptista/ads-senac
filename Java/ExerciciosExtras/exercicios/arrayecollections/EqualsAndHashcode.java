package ExerciciosExtras.exercicios.arrayecollections;


public class EqualsAndHashcode {
    public static void main(String[] args) {
        int[] v1 = { 1, 2, 3};
        int[] v2 = { 1, 2, 3};
        int[] v3 = { 1, 2, 3};
        
        System.out.println("Comparação Direta");
        System.out.println(v1 == v2);
        System.out.println(v2 == v3);

        System.out.println("Comparação com equals");
        System.out.println(v1.equals(v2));
        System.out.println(v2.equals(v3));
        
    }
}