package ExerciciosExtras.exercicios.orientacaoaobjeto;

import java.util.ArrayList;
import java.util.List;

public class Disciplina {

    final String descricao;
    final List<Aluno> alunos = new ArrayList<>();

    Disciplina(String descricao){
        this.descricao = descricao;
    }

    void adicionarAluno(Aluno aluno){
        this.alunos.add(aluno);
        aluno.disciplinas.add(this);
    }
}