package ExerciciosExtras.exercicios.objetoblockbuster;

import java.util.ArrayList;
import java.util.Date;
import java.util.List;

public class Cliente {
    String id;
    String nome;
    Date dtNasc;
    String cpf;
    int diasDevolucao;
    List<Locacao> locacoes = new ArrayList<>();

    Cliente(String id, String nome, Date dtNasc, String cpf, int diasDevolucao){
        this.id = id;
        this.nome = nome;
        this.dtNasc = dtNasc;
        this.cpf = cpf;
        this.diasDevolucao = diasDevolucao;
    }

    int filmesLocados(){
        int filmes = 0;

        for(Locacao locacao:this.locacoes){
            for(Filme filme:locacao.filmes){
                filmes++;
            }
        }

        return filmes;
    }
}