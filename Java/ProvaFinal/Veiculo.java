package ProvaFinal;

import java.util.Scanner;

public abstract class Veiculo {
    protected String marca;
    protected String modelo;
    protected int ano;
	public double valorLoc;
    private Object veiculos;
    private Object cliente;
    private static Object veiculo;

	//Contador Carros Locado
	public void getIdVeiculoLocado() {
		((Veiculo) veiculo).getIdVeiculoLocado();
	}

	// Adição de Veiculos
	public static void addVeiculo() {
		System.out.println("Cadastro do Veiculo\n");
        System.out.println("Marca?\n");
		String marca = Scanner.nextLine();
		System.out.println("Modelo?\n");
		String modelo = scanner.nextLine();
		System.out.println("Ano?\n");
		String ano = scanner.nextLine();
		System.out.println("Valor?\n");
        String valor = scanner.nextLine();
	}

	double PrecoTotal() {
		double total = 0;
		for (Veiculo veiculo : veiculo) {
			total += veiculo.valorLoc;
		}
		return total;
	}

	//Método exibir veiculo
	public static void printVeiculo() {
		System.out.println();
	}
}
