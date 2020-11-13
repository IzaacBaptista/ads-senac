package heranca.heranca;

public class Peixe extends Animal{
    private String escamas;

    public Peixe(
        String escamas,
        String nome, 
        double comprimento, 
        int qtdPatas, 
        String cor, 
        String ambiente
    ) {
        super(nome, comprimento, qtdPatas, cor, ambiente);
        this.escamas = escamas;
    }

    public void setEscamas(String escamas) {
        this.escamas = escamas;
    }

    public String getEscamas() {
        return this.escamas;
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
        return " ==== Peixe ====" +
        "\nNome: " + getNome() +
        "\nComprimento: " + getComprimento() +
        "\nQuantidade de patas: " + getQtdPatas() +
        "\nCor: " + getCor() +
        "\nAmbiente: " + getAmbiente() +
        "\nEscamas: " + getEscamas();
    }    
}
