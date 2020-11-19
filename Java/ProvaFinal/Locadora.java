package ProvaFinal;

import java.util.Scanner;

public class Locadora {
    
	public static void main(String[] args) {

		Scanner entrada = new Scanner(System.in); //Entrada IdCliente no switch

        Cliente cliente1 = new Cliente(0, null, null, null, 0);
        
        Locacao locacao1 = new Locacao(0, 0, null, null, cliente1, null);

        cliente1.getIdCliente();
        cliente1.qtdVeiculosLocados();

        locacao1.PrecoTotal();
        locacao1.AdicVeiculo(null);
        locacao1.calculoData();

		entrada.close();
	}
}