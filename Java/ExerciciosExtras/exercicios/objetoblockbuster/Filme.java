package ExerciciosExtras.exercicios.objetoblockbuster;

import java.util.ArrayList;
import java.util.List;

public class Filme {
    String id;
    String nome;
    String anoLancamento;
    String sinopse;
    double valor;
    int estoque;
    List<Locacao> locacoes = new ArrayList<>();

    Filme(String paramId, String nome, String anoLancamento, String sinopse, double valor, int estoque){
        this.id = paramId;
        this.nome = nome;
        this.anoLancamento = anoLancamento;
        this.sinopse = sinopse;
        this.valor = valor;
        this.estoque = estoque;
    }

    int qtdLocacoes(){
        return this.locacoes.size();
    }
}