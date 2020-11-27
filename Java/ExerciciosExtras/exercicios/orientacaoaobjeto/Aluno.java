package ExerciciosExtras.exercicios.orientacaoaobjeto;

import java.util.ArrayList;
import java.util.List;

public class Aluno {
    final String nome;
    final List<Disciplina> disciplinas = new ArrayList<>();

    Aluno(String nome){
        this.nome = nome;
    }

    void adicionarDisciplina(Disciplina disciplina){
        this.disciplinas.add(disciplina);
        disciplina.alunos.add(this);
    }
}