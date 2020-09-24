import java.util.ArrayList;

public class ReceitaMedica {
    String data;
    String medico;
    ArrayList<Medicamento> medicamentos = new ArrayList<>();

    public ReceitaMedica(String data, String medico) {
        this.data = data;
        this.medico = medico;
    }

    public void addMedicamento(Medicamento medicamento) {
        this.medicamentos.add(medicamento);
        medicamento.addReceita(this);
    }

    public void imprimirMedicamentos() {
        for (Medicamento medicamento: this.medicamentos) {
            System.out.println(medicamento.nome);
        }
    }
}
