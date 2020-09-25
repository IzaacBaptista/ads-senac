    
public class Banco {

    public static void main(String[] args) {
    ContaCorrenteDois new ContaCorrenteDois (1020, 0014 - 1, 50.00, "Correntista01");
 
    System.out.println(ContaCorrente.saldo);
    
    try{ 
        ContaCorrente.depositar(10);
    } catch (Exception e) {
        System.out.println(e.getMessage());
    }
    }
}


