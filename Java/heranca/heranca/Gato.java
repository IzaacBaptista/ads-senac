package heranca.heranca;

public class Gato extends NovoAnimal{
    private String pelo;

    public Gato(String nome, int numeroPatas, String pelo) {
        super(nome, numeroPatas);
        this.pelo = pelo;
    }

    public void setPelo(String pelo) {
        this.pelo = pelo;
    }

    public String getPelo() {
        return this.pelo;
    }

    @Override
    public String toString() {
        return super.toString() + "\n" +
            "Pelo: " + this.getPelo();
    }
    @Override
    public void emitirSom() {
        System.out.println("miau");
    }

}