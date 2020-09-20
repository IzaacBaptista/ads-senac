/*
Exercício 1: 
Criar a entidade Remédio, com suas características (atributos) e ações (métodos) específicos, 
criando 2 remédios em uma Farmácia e demonstrando as suas ações.
*/


public class RemedioUm {
    String nome;
    double preco;
    int quantidade;
    String dataDeValidade;
    boolean alivio;

    public RemedioUm(String nome, double preco, int quantidade, String dataDeValidade, Boolean alivio){
        this.nome = nome;
        this.preco = preco;
        this.quantidade = quantidade;
        this.dataDeValidade = dataDeValidade;
        this.alivio = true;
    }

    public void curar(String doenca) {
        if(doenca == "dor de cabeça"){
            this.alivio = false;
        }
    }

}