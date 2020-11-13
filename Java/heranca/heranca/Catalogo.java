package heranca.heranca;

public class Catalogo {
    public static void main(String[] args) {
        Celular samsumg = new Celular(true, "Samsumg", true, true, true, true, true, true, 1890);
        Notebook dell = new Notebook(false, "Dell", true, true, true, true, true, true, 3500);
        Tv lg = new Tv(false, "LG", true, true, true, true, true, true, 4000);
        
        System.out.println(samsumg);
        System.out.println(dell);
        System.out.println(lg);
    }
}
