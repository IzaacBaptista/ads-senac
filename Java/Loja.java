public class Loja {

    public static void main(String[] args) {
        Cerveja brahmaPilsen = new Cerveja("Brahma", "Pilsen", 5, 15);
        Cerveja opaPuroMalte = new Cerveja("Opa", "Puro Malte", 7, 8);

        brahmaPilsen.beber();
        opaPuroMalte.beber();

        brahmaPilsen.nivelAlcool(6);
        opaPuroMalte.nivelAlcool(6);

    }
    
}
