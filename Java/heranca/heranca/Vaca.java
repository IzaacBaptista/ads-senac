package heranca.heranca;

public class Vaca extends NovoAnimal{
    private String leite;

    public Vaca(String nome, int numeroPatas, String leite) {
        super(nome, numeroPatas);
        this.leite = leite;
    }

    public void setLeite(String leite) {
        this.leite = leite;
    }

    public String getLeite() {
        return this.leite;
    }

    @Override
    public String toString() {
        return super.toString() + "\n" +
            "Leite: " + this.getLeite();
    }
    @Override
    public void emitirSom() {
        System.out.println("muuuu");
    }

}