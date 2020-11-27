package ExerciciosExtras.exercicios.orientacaoaobjeto;

public class Turma{
    public static void main(String[] args) {
        System.out.println("================================");
        System.out.println("Criando as Turmas...");
        System.out.println("================================");
        Aluno aluno1 = new Aluno("Ademir");
        Aluno aluno2 = new Aluno("Nicolau");
        Aluno aluno3 = new Aluno("Josefa");

        Disciplina disciplina1 = new Disciplina("Como plantar batatas");
        Disciplina disciplina2 = new Disciplina("Cultivo de bananas");
        Disciplina disciplina3 = new Disciplina("Pestes em granjas");

        aluno1.adicionarDisciplina(disciplina1);
        aluno2.adicionarDisciplina(disciplina1);
        aluno3.adicionarDisciplina(disciplina1);
        
        disciplina2.adicionarAluno(aluno1);
        disciplina2.adicionarAluno(aluno2);

        disciplina3.adicionarAluno(aluno1);
        disciplina3.adicionarAluno(aluno3);
        System.out.println("Turmas Criadas!!!");

        System.out.println("================================");
        System.out.println("Listando Matrículas...");
        System.out.println("================================");
        System.out.println("Disciplina " + disciplina1.descricao + "...");
        for(Aluno aluno: disciplina1.alunos){
            System.out.println("Aluno " + aluno.nome + " matriculado.");
        }
        System.out.println("================================");
        System.out.println("Disciplina " + disciplina2.descricao + "...");
        for(Aluno aluno: disciplina2.alunos){
            System.out.println("Aluno " + aluno.nome + " matriculado.");
        }
        System.out.println("================================");
        System.out.println("Disciplina " + disciplina3.descricao + "...");
        for(Aluno aluno: disciplina3.alunos){
            System.out.println("Aluno " + aluno.nome + " matriculado.");
        }
    }
}