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

    public void getNome(String nome) {
        this.nome = nome;
    }
    
}
