package Animais;

public class Zoo {
    public static void main(String[] args) {
        Mamifero baleia = new Mamifero();
        Aves dodo = new Aves();

        baleia.Locomover();
        baleia.Mamar();
        dodo.Locomover();
        dodo.PorOvos();
        dodo.PorOvos("Amarelo");
        dodo.PorOvos(4);
    }
}
