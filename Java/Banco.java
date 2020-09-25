/*
Crie um programa que receba a conta corrente e deposite e saque valores, ao final imprimindo o saldo existente.
*/
public class Banco {
    public static void main(String[] args) {
        Agencia agenciaUm = new Agencia("0145", "Rua Jaguariuna","Das 08 as 18");
        ContaCorrente contaCorrenteUm = new ContaCorrente("04798-5", agenciaUm, "Wanderley da Silva");
        ContaCorrente contaCorrenteDois = new ContaCorrente("05878-4", agenciaUm, "Lidiane Alves");
        ContaCorrente contaCorrenteTres = new ContaCorrente("01256-1", agenciaUm, "Marcos Barbosa");
        ContaCorrente contaCorrenteQuatro = new ContaCorrente("00633-6", agenciaUm, "Renato Almeida");
        ContaCorrente contaCorrenteCinco = new ContaCorrente("09876-5", agenciaUm, "Suelen Pompeu");

        //contaUm
        System.out.println("O saldo inicial da ContaUm é: R$ " + contaCorrenteUm.saldoTotal());
        contaCorrenteUm.deposito(10000);
        contaCorrenteUm.saque(5485.45);
        contaCorrenteUm.saque(178.97);
        System.out.println("O saldo atual da ContaUm é: R$ " + contaCorrenteUm.saldoTotal());

        //contaDois
        System.out.println("O saldo inicial da ContaDois é: R$ " + contaCorrenteDois.saldoTotal());
        contaCorrenteDois.deposito(5000);
        contaCorrenteDois.saque(185.45);
        contaCorrenteDois.saque(578.97);
        System.out.println("O saldo atual da ContaDois é: R$ " + contaCorrenteDois.saldoTotal());

        //contaTres
        System.out.println("O saldo inicial da ContaTres é: R$ " + contaCorrenteTres.saldoTotal());
        contaCorrenteTres.deposito(5000);
        contaCorrenteTres.saque(185.45);
        contaCorrenteTres.saque(578.97);
        System.out.println("O saldo atual da ContaTres é: R$ " + contaCorrenteDois.saldoTotal());

        //contaQuatro
        System.out.println("O saldo inicial da ContaQuatro é: R$ " + contaCorrenteQuatro.saldoTotal());
        contaCorrenteQuatro.deposito(5000);
        contaCorrenteQuatro.saque(185.45);
        contaCorrenteQuatro.saque(578.97);
        System.out.println("O saldo atual da ContaQuatro é: R$ " + contaCorrenteDois.saldoTotal());

        //contaCinco
        System.out.println("O saldo inicial da ContaCinco é: R$ " + contaCorrenteCinco.saldoTotal());
        contaCorrenteCinco.deposito(5000);
        contaCorrenteCinco.saque(185.45);
        contaCorrenteCinco.saque(578.97);
        System.out.println("O saldo atual da ContaCinco é: R$ " + contaCorrenteDois.saldoTotal());

        agenciaUm.imprimirContas();
    }
}
