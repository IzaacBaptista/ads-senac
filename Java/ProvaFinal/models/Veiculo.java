package models;

import java.util.Scanner;

public abstract class Veiculo {
	public int id;
    public String marca;
    public String modelo;
    public int ano;
	public double valorLoc;
	private static Object veiculo;

	//Contador Carros Locado
	public int getIdVeiculoLocado() {
		return ((Veiculo) veiculo).getIdVeiculoLocado();
	}

	// Adição de Veiculos
	public static void addVeiculo() {

		//criando o scanner
		Scanner scanner;

		//inicializando o scanner
		scanner = new Scanner(System.in);  

		System.out.println("Cadastro do Veiculo\n");
        System.out.println("Marca: \n");
		String marca = scanner.nextLine();
		System.out.println("Modelo: \n");
		String modelo = scanner.nextLine();
		System.out.println("Ano: \n");
		String ano = scanner.nextLine();
		System.out.println("Valor: \n");
		String valor = scanner.nextLine();
		
		// fechando o scanner
		scanner.close();
	}
	
	//Método exibir veiculo
	public static void printVeiculo() {
		System.out.println();
	}
}
