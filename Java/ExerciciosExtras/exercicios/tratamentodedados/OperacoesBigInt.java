package ExerciciosExtras.exercicios.tratamentodedados;

import java.math.BigInteger;

public class OperacoesBigInt {
    public static void main(String[] args) {
        BigInteger numero1 = new BigInteger("1000000");
        BigInteger numero2 = new BigInteger("1000000");

        System.out.println("Somando Big Int");
        System.out.println(numero1.add(numero2));
        System.out.println("Subtraindo Big Int");
        System.out.println(numero1.subtract(numero2));
        System.out.println("Multiplicando Big Int");
        System.out.println(numero1.multiply(numero2));
        System.out.println("Dividindo Big Int");
        System.out.println(numero1.divide(numero2));
        System.out.println("Exponenciando Big Int");
        System.out.println(numero1.pow(10));
    }
}
