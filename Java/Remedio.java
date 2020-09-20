package Poo;

import java.util.Date;
public class Remedio {
    String nome;
    int anoFabricacao;
    int anosValidade;
    int qtdComprimidos;
    String composicao;

    public Remedio(String nome, int anoFabricacao, int qtdComprimidos, String composicao, int anosValidade) {
        this.nome = nome;
        this.anoFabricacao = anoFabricacao;
        this.qtdComprimidos = qtdComprimidos;
        this.composicao = composicao;
    }

public void qtdReceitada(int qtdComprimidos) throws Exception {
    if(this.qtdComprimidos < qtdComprimidos) {
        throw new Exception("Remédio não pode ser vendido.");
    }
        System.out.println("Remédio OK!");
}

public void validade() {
    Date today = new Date();
        if((this.anoFabricacao + this.anosValidade) < today.getYear()) {
            System.out.println("Validade do remédio " + this.nome + " está OK!");
    } 
}
}


