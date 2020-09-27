public class Escola {
    public static void main(String[] args) {
        Materia matematica = new Materia(1, "Matemática");
        Materia portugues = new Materia(2, "Portugues");
        Materia ingles = new Materia(3, "Inglês");
        Materia fisica = new Materia(4, "Física");

        Professor charles = new Professor(1, "Charles da Cunha", "Pós-graduação");
        Professor elena = new Professor(2, "Elena da Rosa", "Pós-doutorado");

        charles.addMateria(matematica);
        charles.addMateria(ingles);
        charles.addMateria(fisica);

        elena.addMateria(portugues);
        elena.addMateria(ingles);
        elena.addMateria(matematica);

        charles.imprimirProfessor();
        elena.imprimirProfessor();

        matematica.imprimirMateria();
        portugues.imprimirMateria();
        ingles.imprimirMateria();
        fisica.imprimirMateria();
    }
}