package heranca.heranca;

public class Fazenda {
    public static void main(String[] args) {
        Ovelha dolly = new Ovelha("Dolly", 4, "Cinza");
        Gato leo = new Gato("Léo", 4, "Malhado");
        Vaca mimosa = new Vaca("Mimosa", 4, "Pasteurizado");

        System.out.println(dolly);
        System.out.println(leo);
        System.out.println(mimosa);

        dolly.emitirSom();
        leo.emitirSom();
        mimosa.emitirSom();

    }
}
