package ExerciciosExtras.exercicios.fundamentos;

public class AreaCircunferencia {
    public static void main(String[] args) {
        double raio = 3.4;
        
        double area = area(raio);

        System.out.println("Área = " + area + "m².");
    }

    public static double area(double raio) {
        final double PI = 3.14159;
        return PI * raio * raio;
    }
}