package heranca.heranca;

public class Animal {
    protected String nome; 
    protected double comprimento;
    protected int qtdPatas;
    protected String cor;
    protected String ambiente;
    
    public Animal(
        String nome, 
        double comprimento, 
        int qtdPatas, 
        String cor, 
        String ambiente
    ){
        this.nome = nome;
        this.comprimento = comprimento;
        this.qtdPatas = qtdPatas;
        this.cor = cor;
        this.ambiente = ambiente;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setComprimento(double comprimento) {
        this.comprimento = comprimento;
    }

    public void setQtdPatas(int qtdPatas) {
        this.qtdPatas = qtdPatas;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

    public void setAmbiente(String ambiente) {
        this.ambiente = ambiente;
    }

    /*
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
    */
}
