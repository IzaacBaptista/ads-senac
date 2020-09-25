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
        contaCorrenteUm.transferencia(200.00);
        System.out.println("O saldo atual da ContaUm é: R$ " + contaCorrenteUm.saldoTotal());

        //contaDois
        System.out.println("O saldo inicial da ContaDois é: R$ " + contaCorrenteDois.saldoTotal());
        contaCorrenteDois.deposito(5000);
        contaCorrenteDois.saque(185.45);
        contaCorrenteDois.saque(578.97);
        contaCorrenteUm.transferencia(100.00);
        System.out.println("O saldo atual da ContaDois é: R$ " + contaCorrenteDois.saldoTotal());

        //contaTres
        System.out.println("O saldo inicial da ContaTres é: R$ " + contaCorrenteTres.saldoTotal());
        contaCorrenteTres.deposito(1800);
        contaCorrenteTres.saque(285.45);
        contaCorrenteTres.saque(378.97);
        contaCorrenteTres.deposito(800);
        contaCorrenteUm.transferencia(600.00);
        System.out.println("O saldo atual da ContaTres é: R$ " + contaCorrenteTres.saldoTotal());

        //contaQuatro
        System.out.println("O saldo inicial da ContaQuatro é: R$ " + contaCorrenteQuatro.saldoTotal());
        contaCorrenteQuatro.deposito(10000);
        contaCorrenteQuatro.saque(156.16);
        contaCorrenteQuatro.saque(1200.60);
        contaCorrenteQuatro.deposito(2600.10);
        contaCorrenteUm.transferencia(900.00);
        System.out.println("O saldo atual da ContaQuatro é: R$ " + contaCorrenteQuatro.saldoTotal());

        //contaCinco
        System.out.println("O saldo inicial da ContaCinco é: R$ " + contaCorrenteCinco.saldoTotal());
        contaCorrenteCinco.deposito(15000);
        contaCorrenteCinco.saque(1165.19);
        contaCorrenteCinco.saque(3578);
        contaCorrenteCinco.deposito(500);
        contaCorrenteUm.transferencia(1100.00);
        System.out.println("O saldo atual da ContaCinco é: R$ " + contaCorrenteCinco.saldoTotal());

        agenciaUm.imprimirContas();
    }
}
