package ExerciciosExtras.exercicios.fundamentos;

public class Conversao {
    public static void main(String[] args) {
         // Tipos Numéricos
         byte byteValue = 127;
         short shortValue = 32727;
         int intValue = 2147483647;
         long longValue = 9223372036854775807L;
 
         // Tipos Numéricos - Ponto Flutuante
         float floatValue = 12000.01F;
         double doubleValue = 12000.01;
 

         // Impressao
        System.out.println("====== Conversão de Tipos ======");

        System.out.println("======      Numéricos     ======");
        long newLongValue;
        newLongValue = byteValue;
        System.out.println("Valor long: "+ newLongValue +" recebe valor byte: " + byteValue);
        newLongValue = shortValue;
        System.out.println("Valor long: "+ newLongValue +" recebe valor short: " + shortValue);
        newLongValue = intValue;
        System.out.println("Valor long: "+ newLongValue +" recebe valor int: " + intValue);
        newLongValue = longValue;
        System.out.println("Valor long: "+ newLongValue +" recebe valor long: " + longValue);

        System.out.println("====== Numéricos (Ponto) ======");
        double newDoubleValue;
        newDoubleValue = floatValue;
        System.out.println("Valor double: "+ newDoubleValue +" recebe valor float: " + floatValue);
        newDoubleValue = doubleValue;
        System.out.println("Valor double: "+ newDoubleValue +" recebe valor double: " + doubleValue);

        System.out.println("======      Char     ======");
        char newCharValue = 97;
        System.out.println("Valor char recebe númerico: " + newCharValue);

        System.out.println("====== Conversão de Tipos Usando CAST ======");
        byte newByte;
        newByte = (byte)longValue;
        System.out.println("Valor long: "+ longValue +" atribui em valor byte com cast: " + newByte);
        newByte = (byte)shortValue;
        System.out.println("Valor int: "+ intValue +" atribui em valor byte com cast: " + newByte);
        newByte = (byte)intValue;
        System.out.println("Valor short: "+ shortValue +" atribui em valor byte com cast: " + newByte);

        int newInt;
        newInt = (int)floatValue;
        System.out.println("Valor float: " + floatValue + " atribui em valor int com cast: " + newInt);
        newInt = (int)doubleValue;
        System.out.println("Valor double: " + doubleValue + " atribui em valor int com cast: " + newInt);

        System.out.println("======      String     ======");
        String str = "10";
        System.out.println("String: " + str);

        byte byteString = Byte.parseByte(str);
        System.out.println("Byte: " + byteString);
        short shortString = Short.parseShort(str);
        System.out.println("Short: " + shortString);
        int intString = Integer.parseInt(str);
        System.out.println("Int: " + intString);
        long longString = Long.parseLong(str);
        System.out.println("Long: " + longString);

        float floatString = Float.parseFloat(str);
        System.out.println("Float: " + floatString);
        double doubleString = Double.parseDouble(str);
        System.out.println("Double: " + doubleString);

        boolean booleanString = Boolean.parseBoolean("true");
        System.out.println("Boolean: " + booleanString);


        System.out.println("Numero para String: " + Integer.toString(10));
        System.out.println("Numero com Ponto para String: " + Double.toString(10.5));
        System.out.println("Boolean para String: " + Boolean.toString(true));
    }
}