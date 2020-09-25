/*
Crie uma classe que represente uma Conta Corrente, devendo ter as propriedades Número da Conta, 
Agência, Saldo, Nome do Titular e os métodos Depósito, Saque e Saldo Total.
*/
public class ContaCorrente {
    String numeroConta;
    double saldo;
    String nomeTitular;
    Agencia agencia;

    public ContaCorrente(String numeroConta, Agencia agencia, String nomeTitular) {
        this.numeroConta = numeroConta;
        this.agencia = agencia;
        this.nomeTitular = nomeTitular;
        this.saldo = 0;

        agencia.addContaCorrente(this);
    }

    public void deposito(double valor) {
        this.saldo += valor;
    }

    public void saque(double valor) {
        this.saldo -= valor;
    }

    public double saldoTotal() {
        return saldo;
    }
}
