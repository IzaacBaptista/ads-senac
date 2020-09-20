
public class ContaCorrente {
 // Características
 int numeroDaConta;
 int agencia;
 static double saldo = 0;
 String nomeDoTitular;

 public ContaCorrente(int paramNumeroDaConta, int paramAgencia, double paramSaldo, String paramNomeDoTitular) {
     nomeDoTitular = paramNomeDoTitular;
     numeroDaConta = paramNumeroDaConta;
     agencia = paramAgencia;
     saldo = paramSaldo;
 }

 // Ações
 public static double depositar(double deposito){
    saldo=saldo+deposito;
    return saldo;
}
    
public double getSaldo(){
    return saldo;
}
}