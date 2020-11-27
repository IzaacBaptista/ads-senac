package ExerciciosExtras;

public class ChamadaDeFuncao {
    public static void main(String[] args) {
        System.out.println("Hellow");

        if (chamadaDeFuncao("Hellow 3") != 1){
            System.out.println("É diferente de 1");
        }
    }

    public static int chamadaDeFuncao(String msg){
        System.out.println("Hellow 2");
        System.out.println(msg);
        if (msg.equals("Batata")){
            return 0;
        }
        return 1;
    }
}
