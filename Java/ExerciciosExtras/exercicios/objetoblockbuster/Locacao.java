package ExerciciosExtras.exercicios.objetoblockbuster;

import java.util.ArrayList;
import java.util.Calendar;
import java.util.Date;
import java.util.List;

public class Locacao {
    String id;
    Date dataLocacao;
    Date dataDevolucao;
    Cliente cliente;
    List<Filme> filmes = new ArrayList<>();

    Locacao(String id, Cliente cliente){
        this.id = id;
        this.cliente = cliente;
        this.dataLocacao = new Date();
        this.dataDevolucao = this.devolver(this.dataLocacao, this.cliente.diasDevolucao);
        cliente.locacoes.add(this);
    }

    Date devolver(Date dataLocacao, int diasDevolucao){
        Calendar calendario = Calendar.getInstance();
        calendario.setTime(dataLocacao);
        calendario.add(Calendar.DATE, diasDevolucao);

        return calendario.getTime();
    }

    void adicionarFilme(Filme filme){
        this.filmes.add(filme);
        filme.locacoes.add(this);
    }

    double valorLocacao(){
        double valor = 0;
        for(Filme filme:this.filmes){
            valor += filme.valor;
        }

        return valor;
    }
}