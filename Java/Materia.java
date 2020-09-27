import java.util.ArrayList;

public class Materia {
    int id;
    String descricao;
    ArrayList<Professor> professores;
    ArrayList<Aluno> alunos;

    public Materia(int id, String descricao) {
        this.id = id;
        this.descricao = descricao;
        this.professores = new ArrayList<>();
        this.alunos = new ArrayList<>();
    }

    public void addProfessor(Professor professor) {
        this.professores.add(professor);
    }

    public void imprimirMateria() {
        System.out.println("Descrição " + this.descricao);
        for (Professor professor : professores) {
            System.out.println("Nome " + professor.nome + " Escolaridade " + professor.escolaridade);
        }
    }
}