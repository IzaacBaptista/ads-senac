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

    public void beber() {
        if(temperatura > 10) {
            System.out.println("Tá galada");
        } else {
            System.out.println("Topzera");
        }
    }

    public void nivelAlcool(int nivel){
        if(nivel < this.teorAlcoolico) {
            System.out.println("Não dá de beber!");
        } else {
            System.out.println("Desce mais uma!");
        }
    }

}