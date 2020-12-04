import java.util.Scanner;

public abstract class Veiculo {
    protected String marca;
    protected String modelo;
    protected int ano;
	public double valorLoc;
    private static Object veiculo;

	//Contador Carros Locado
	public void getIdVeiculoLocado() {
		((Veiculo) veiculo).getIdVeiculoLocado();
	}

	// Adição de Veiculos
	public static void addVeiculo() {
        Scanner input = new Scanner(System.in);
		System.out.println("Cadastro do Veiculo\n");
        System.out.println("Marca?\n");
		String marca = input.nextLine();
		System.out.println("Modelo?\n");
		String modelo = input.nextLine();
		System.out.println("Ano?\n");
		String ano = input.nextLine();
		System.out.println("Valor?\n");
        String valor = input.nextLine();
	}
	/*
	double PrecoTotal() {
		double total = 0;
		for (Veiculo veiculo : veiculo) {
			total += veiculo.valorLoc;
		}
		return total;
	}*/

	//Método exibir veiculo
	public static void printVeiculo() {
		System.out.println();
	}
}
