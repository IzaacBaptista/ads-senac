
/*
Crie uma classe que represente uma Conta Corrente, devendo ter as propriedades Número da Conta, 
Agência, Saldo, Nome do Titular e os métodos Depósito, Saque e Saldo Total.
*/
public class ContaCorrenteDois {
String numeroConta;
String agencia;
double saldo;
String nomeTitular;

public ContaCorrenteDois(String numeroConta, String agencia, String nomeTitular) {
    this.numeroConta = numeroConta;
    this.agencia = agencia;
    this.nomeTitular = nomeTitular; 
    this.saldo = 0;
}
public ContaCorrenteDois(int i, int j, double d, String string) {
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