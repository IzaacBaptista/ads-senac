public class Ambulatorio {
    public static void main(String[] args) {
        ReceitaMedica receita1 = new ReceitaMedica("24/09/2020", "Dr. Dalisbor");
        Medicamento medicamento1 = new Medicamento("Dorflex", "8 x 8 horas", "Biopharma");

        receita1.addMedicamento(medicamento1);

        for (ReceitaMedica receita: medicamento1.receitas) {
            System.out.println(receita.data + " - " + receita.medico);
        }

        receita1.imprimirMedicamentos();
    }
}
