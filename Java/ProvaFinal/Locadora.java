
import java.util.Scanner;

public class Locadora {
    
    //criando o scanner
    static Scanner scanner;
	public static void main(String[] args) throws InstantiationException, IllegalAccessException    {

        System.out.println("====== Locadora de veiculos =======");

        //inicializando o scanner
        scanner = new Scanner(System.in); 
        
        int opt = 0;
        do {
            System.out.println("-------------------------");
            System.out.println("|    Digite uma opção   |");
            System.out.println("| (1) Cadastrar Cliente |");
            System.out.println("| (2) Cadastrar Veiculo |");
            System.out.println("| (3) Cadastrar Locação |");
            System.out.println("| (4)  Listar Clientes  |");
            System.out.println("| (5)  Listar Veiculos  |");
            System.out.println("| (6)  Listar Locação   |");
            System.out.println("| (7)  Conectar Banco   |");
            System.out.println("| (7)  Sair             |");
            System.out.println("-------------------------");

            try {
                opt = scanner.nextInt();
                scanner.nextLine();
            } catch (Exception e) {
                System.out.println("Opção inválida");
                opt = 00;
            }

            switch (opt)    {
                case 1:
                    Cliente.addCliente();
                    break;
                case 2:
                    Veiculo.addVeiculo();
                    break;
                case 3:
                    Locacao.addLocacao();
                    break;
                case 4:
                    Cliente.printCliente();
                    break;
                case 5:
                    Veiculo.printVeiculo();
                    break;
                case 6:
                    Locacao.printLocacao();
                    break;
                default:
                    break;
            }
        } while (opt != 0);

        // fechando o scanner
        scanner.close();
	}
}