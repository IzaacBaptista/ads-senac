import java.util.ArrayList;

public class Aluno {
    int id;
    String nome;
    double notaAluno;
    ArrayList<Professor> professores;
    ArrayList<Materia> materias;

    public Aluno(int id, String nome, double notaAluno) {
        this.id = id;
        this.nome = nome;
        this.notaAluno = notaAluno;
        this.professores = new ArrayList<>();
        this.materias = new ArrayList<>();
    }

}
