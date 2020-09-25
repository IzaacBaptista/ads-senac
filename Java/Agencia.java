import java.util.ArrayList;

public class Agencia {
    String codigo;
    String endereco;
    String horarioAtendimento;
    ArrayList<ContaCorrente> contas;

    public Agencia(String codigo, String endereco, String horarioAtendimento) {
        this.codigo = codigo;
        this.endereco = endereco;
        this.horarioAtendimento = horarioAtendimento;
        this.contas = new ArrayList<>();
    }

    public void addContaCorrente(ContaCorrente conta) {
        this.contas.add(conta);
    }

    public void imprimirContas(){
        System.out.println("As contas correntes são: ");
        for (ContaCorrente contaCorrente : contas) {
            System.out.println(contaCorrente.numeroConta + " - " + contaCorrente.nomeTitular);
        }
    }
}
