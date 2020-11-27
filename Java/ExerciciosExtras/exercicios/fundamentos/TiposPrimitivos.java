package ExerciciosExtras.exercicios.fundamentos;

public class TiposPrimitivos {
    public static void main(String[] args) {
        
        // Tipos Numéricos
        byte byteValue = 127;
        short shortValue = 32727;
        int intValue = 2147483647;
        long longValue = 9223372036854775807L;

        // Tipos Numéricos - Ponto Flutuante
        float floatValue = 12000.01F;
        double doubleValue = 12000.01;

        // Tipo Boolean
        boolean booleanValue = true;

        // Tipo Char
        char charValue = 'a';
        char charNumberValue = 97;
        char charUnicodeValue = '\u0061';

        // Impressao
        System.out.println("====== Tipos Primitivos ======");
        System.out.println("======     Numéricos    ======");
        System.out.println("Este é um valor em byte: " + byteValue);
        System.out.println("Este é um valor em short: " + shortValue);
        System.out.println("Este é um valor em int: " + intValue);
        System.out.println("Este é um valor em long: " + longValue);
        
        System.out.println("====== Numéricos (Ponto) ======");
        System.out.println("Este é um valor em float: " + floatValue);
        System.out.println("Este é um valor em double: " + doubleValue);

        System.out.println("======      Boolean     ======");
        System.out.println("Este é um valor em boolean: " + booleanValue);

        System.out.println("======        Char      ======");
        System.out.println("Este é um valor em char: " + charValue);
        System.out.println("Este é um valor em char atribuído como numérico: " + charNumberValue);
        System.out.println("Este é um valor em char atribuído como unicode: " + charUnicodeValue);

    }
}