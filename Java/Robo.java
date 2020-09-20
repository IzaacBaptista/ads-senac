
/*
Exercício 2: Criar a entidade Robô, com suas características (atributos) e ações (métodos) específicos, 
criando 2 robôs em uma Fábrica e demonstrando as suas ações.
*/

public class Robo {
    String nome;
    String funcao;
    int idade;
    int qtdBracos;

    public Robo(String nome, String funcao, int idade,int qtdBracos) {
        this.nome = nome;
        this.funcao = "Trabalhar na recepção";
        this.idade = idade;
        this.qtdBracos = qtdBracos;
    }

    public void repetirSeuNome(String nomeDaPessoa) throws Exception {
        System.out.println("Seu nome é: " + nomeDaPessoa);
    }

    public void suaFuncao() throws Exception {
        System.out.println(funcao);
    }

}
