package heranca.heranca;

public class NovoAnimal {
    private String nome;
    private int numeroPatas;

    public NovoAnimal(String nome, int numeroPatas) {
        this.nome = nome;
        this.numeroPatas = numeroPatas;
    }

    protected void setNome(String nome) {
        this.nome = nome;
    }

    protected void setNumeroPatas(int numeroPatas) {
        this.numeroPatas = numeroPatas;
    }

    protected String getNome() {
        return this.nome;
    }

    protected int getNumeroPatas() {
        return this.numeroPatas;
    }

    @Override
    public String toString() {
        return "Nome: " + this.nome + "\n" +
        "N° Patas: " + this.numeroPatas;
    }

    protected void emitirSom() {
       System.out.println("Som desconhecido");
   }

}

