package heranca.heranca;

public class Ovelha extends NovoAnimal{
    private String corDala;

    public Ovelha(String nome, int numeroPatas, String corDaLa) {
        super(nome, numeroPatas);
        this.corDala = corDaLa;
    }

    public void setCorDaLa(String corDaLa) {
        this.corDala = corDaLa;
    }

    public String getCorDaLa() {
        return this.corDala;
    }

    @Override
    public String toString() {
        return super.toString() + "\n" +
            "Cor da Lã: " + this.getCorDaLa();
    }
    @Override
    public void emitirSom() {
        System.out.println("béééé");
    }

}
