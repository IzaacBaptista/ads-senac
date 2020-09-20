    
public class Banco {
 public static void main(String[] args) {
     new ContaCorrente(1020, 0014 - 1, 50.00, "Correnteista01");
 
 System.out.println(ContaCorrente.saldo);
 try{ 
 ContaCorrente.depositar(10);
 } catch (Exception e) {
 System.out.println(e.getMessage());
 }
 }
}


