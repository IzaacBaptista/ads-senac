/*
Exercício 3: Criar a entidade Cerveja, com suas características (atributos) e ações (métodos) específicos, 
criando 2 TIPOS DE CERVEJAS em uma Loja e demonstrando as suas ações.
*/


public class Cerveja {
    String tipo;
    int teorAlcoolico;
    String fabricante;
    int temperatura;

    public Cerveja(String tipo, int teorAlcoolico, String fabricante, int temperatura) {
        this.tipo = tipo;
        this.teorAlcoolico = teorAlcoolico;
        this.fabricante = fabricante;
        this.temperatura = temperatura;
    }
}