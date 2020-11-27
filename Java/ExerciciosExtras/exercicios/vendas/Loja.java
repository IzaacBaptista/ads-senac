package ExerciciosExtras.exercicios.vendas;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.util.Map.Entry;

public class Loja {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Map<Integer, Cliente> clientes = new HashMap<>();
        Map<Integer, Funcionario> funcionarios = new HashMap<>();
        Map<Integer, Produto> produtos = new HashMap<>();

        criarProdutos(produtos);

        System.out.println("==== Bem vindo a Loja Virtual ====");
        System.out.println("Escolha a Opção: ");
        int opcao = 0;
        do{
            imprimirOpcoes();
            opcao = scanner.nextInt();
            switch(opcao){
                case 1:
                    cadastrarCliente(scanner, clientes);
                    break;
                case 2:
                    cadastrarFuncionario(scanner, funcionarios);
                    break;
                case 3:
                    cadastrarVenda(clientes, funcionarios, produtos, scanner);
                    break;
                case 4:
                    imprimirObjeto(clientes);
                    break;
                case 5:
                    imprimirObjeto(funcionarios);
                    break;
                case 6:
                    imprimirCompras(clientes, scanner);
                    break;
                case 7:
                    imprimirVendas(funcionarios, scanner);
                    break;
                case 8:
                    realizarAutenticacao(clientes, funcionarios, scanner);
                    break;
                case 9:
                    System.out.println("Até a Pŕoxima!");
                    break;
                default:
                    System.out.println("Opção Inválida");    
                    break;
            }

        } while(opcao != 9);

        scanner.close();
    }

    private static void criarProdutos(Map<Integer, Produto> produtos){
        produtos.put(0, new Produto("Computador Desktop", 1500));
        produtos.put(1, new Produto("Notebook", 2000));
        produtos.put(2, new Produto("Mouse", 250));
        produtos.put(3, new Produto("Teclado", 150));
        produtos.put(4, new Produto("Mouse Pad", 30));
        produtos.put(5, new Produto("Headset", 250));
        produtos.put(6, new Produto("Placa de Vídeo", 340));
        produtos.put(7, new Produto("Caixa de Som", 200));
        produtos.put(8, new Produto("Cabo HDMI", 25));
        produtos.put(9, new Produto("Fone de Ouvido sem fio", 200));
    }

    private static void imprimirOpcoes(){
        System.out.println("Escolha a Opção: ");
        System.out.println("1 - Cadastrar Cliente");
        System.out.println("2 - Cadastrar Funcionário");
        System.out.println("3 - Cadastrar Venda");
        System.out.println("4 - Listar Clientes");
        System.out.println("5 - Listar Funcionários");
        System.out.println("6 - Listar Compras do Cliente");
        System.out.println("7 - Listar Vendas do Funcionário");
        System.out.println("8 - Validar Acesso");
        System.out.println("9 - Sair");
    }

    private static void cadastrarCliente(Scanner scanner, Map<Integer,Cliente> clientes){
        Cliente cliente = new Cliente();
        System.out.println("Digite o Usuário: ");
        cliente.setUserName(scanner.next());
        System.out.println("Digite a Senha: ");
        cliente.setPassword(scanner.next());
        System.out.println("Digite o Nome: ");
        cliente.setNome(scanner.next());
        System.out.println("Digite o Endereço: ");
        cliente.setEndereco(scanner.next());
        System.out.println("Digite o Telefone: ");
        cliente.setTelefone(scanner.next());

        clientes.put(clientes.size(), cliente);
    }

    private static void cadastrarFuncionario(Scanner scanner, Map<Integer,Funcionario> funcionarios){
        Funcionario funcionario = new Funcionario();
        System.out.println("Digite o Usuário: ");
        funcionario.setUserName(scanner.next());
        System.out.println("Digite a Senha: ");
        funcionario.setPassword(scanner.next());
        System.out.println("Digite o Nome: ");
        funcionario.setNome(scanner.next());
        System.out.println("Digite o Salário: ");
        funcionario.setSalario(scanner.nextDouble());
        System.out.println("Digite o Banco: ");
        funcionario.setBanco(scanner.next());
        
        funcionarios.put(funcionarios.size(), funcionario);
    }

    private static void cadastrarVenda(
        Map<Integer,Cliente> clientes, 
        Map<Integer,Funcionario> funcionarios, 
        Map<Integer,Produto> produtos,
        Scanner scanner
    ){
        Cliente cliente = (Cliente) retornaObjeto(clientes, "Digite o código do cliente: ", scanner);
        Funcionario funcionario = (Funcionario) retornaObjeto(funcionarios, "Digite o código do funcionário: ", scanner);

        Venda venda = new Venda(cliente, funcionario);
        do{
            Produto produto = (Produto) retornaObjeto(produtos, "Digite o código do produto: ", scanner);
            System.out.println("Digite a quantidade: ");
            int quantidade = scanner.nextInt();
            venda.adicionarProduto(produto, quantidade);
            System.out.println("Deseja adicionar um novo produto? Digite 'sim' para adicionar e qualquer outro valor para sair.");
        } while(scanner.next().equalsIgnoreCase("sim"));
    }

    private static Object retornaObjeto(Map<Integer, ?> map, String msg, Scanner scanner){
        Object obj = null;
        do{
            System.out.println(msg);
            int selection = scanner.nextInt();
            if (map.containsKey(selection)){
                obj = map.get(selection);
            } else {
                System.out.println("Informação não existe, tente novamente.");
            }
        }while(obj == null);

        return obj;
    }

    private static void imprimirObjeto(Map<Integer, ?> map){
        for(Entry<Integer,?> obj: map.entrySet()){
            System.out.print("ID: " + obj.getKey() + " ");
            System.out.print(obj.getValue().toString());
            System.out.print("\n");
        }
    }

    private static void imprimirCompras(Map<Integer,Cliente> clientes, Scanner scanner){
        Cliente cliente = (Cliente) retornaObjeto(clientes, "Digite o código do cliente: ", scanner);
        cliente.imprimirCompras();
    }

    private static void imprimirVendas(Map<Integer,Funcionario> funcionarios, Scanner scanner){
        Funcionario funcionario = (Funcionario) retornaObjeto(funcionarios, "Digite o código do funcionário: ", scanner);
        funcionario.qtdCompras();
    }

    private static void realizarAutenticacao(
        Map<Integer,Cliente> clientes,
        Map<Integer,Funcionario> funcionarios,
        Scanner scanner
    ){
        System.out.println("Digite o usuário: ");
        String usuario = scanner.next();
        System.out.println("Digite a senha: ");
        String senha = scanner.next();
        boolean find = false;
        for(Cliente cliente: clientes.values()){
            if(cliente.getUserName().equals(usuario)){
                find = true;
                cliente.autenticar(senha);
                break;
            }
        }
        if(!find){
            for(Funcionario funcionario: funcionarios.values()){
                if(funcionario.getUserName().equals(usuario)){
                    find = true;
                    funcionario.autenticar(senha);
                    break;
                }
            }
        }

        if(!find){
            System.out.println("Acesso Inválido.");
        }
    }
}