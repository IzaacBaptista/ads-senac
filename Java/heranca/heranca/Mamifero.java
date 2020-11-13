package heranca.heranca;

public class Mamifero extends Animal{
    private String alimento;

    public Mamifero(
        String alimento,
        String nome, 
        double comprimento, 
        int qtdPatas, 
        String cor, 
        String ambiente
    ) {
        super(nome, comprimento, qtdPatas, cor, ambiente);
        this.alimento = alimento;
    }

    public void setAlimento(String alimento) {
        this.alimento = alimento;
    }

    public String getAlimento() {
        return this.alimento;
    }

    public String getNome() {
        return super.nome;
    }

    public double getComprimento() {
        return super.comprimento;
    }

    public int getQtdPatas() {
        return super.qtdPatas;
    }

    public String getCor() {
        return super.cor;
    }

    public String getAmbiente() {
        return super.ambiente;
    }

    @Override
    public String toString() {
    return " ==== Mamífero ====" +
    "\nNome: " + getNome() +
    "\nComprimento: " + getComprimento() +
    "\nQuantidade de patas: " + getQtdPatas() +
    "\nCor: " + getCor() +
    "\nAmbiente: " + getAmbiente() +
    "\nAlimento: " + getAlimento();
    }    
}
