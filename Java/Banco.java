/*
Crie um programa que receba a conta corrente e deposite e saque valores, ao final imprimindo o saldo existente.
*/
public class Banco {
    public static void main(String[] args) {
        Agencia agenciaUm = new Agencia("0145", "Rua Jaguariuna","Das 08 as 18");
        ContaCorrente contaCorrenteUm = new ContaCorrente("04798-5", agenciaUm, "Wanderley da Silva");
        ContaCorrente contaCorrenteDois = new ContaCorrente("05878-4", agenciaUm, "Lidiane Alves");

        System.out.println("O saldo inicial da ContaUm é: R$ " + contaCorrenteUm.saldoTotal());

        contaCorrenteUm.deposito(10000);
        contaCorrenteUm.saque(5485.45);
        contaCorrenteUm.saque(178.97);

        System.out.println("O saldo atual da ContaUm é: R$ " + contaCorrenteUm.saldoTotal());

        System.out.println("O saldo inicial da ContaDois é: R$ " + contaCorrenteDois.saldoTotal());

        contaCorrenteDois.deposito(5000);
        contaCorrenteDois.saque(185.45);
        contaCorrenteDois.saque(578.97);

        System.out.println("O saldo atual da ContaDois é: R$ " + contaCorrenteDois.saldoTotal());

        agenciaUm.imprimirContas();
    }
}
