package ProvaFinal;

public abstract class Veiculo {
    protected String marca;
    protected String modelo;
    protected int ano;
    public double valorParaLocacao;
	public double valorLoc;
    private Object veiculos;
    private Object cliente;
    private Object veiculo;
	public void getIdVeiculoLocado() {
    
    }

    // Adição de Veiculos
	void AdicVeiculo(Veiculo veiculo) {
		((Object) this.veiculos).add(veiculo);
		//Contador Carros Locado
		veiculo.getIdVeiculoLocado();
		((Object) this.cliente).qtdVeiculosLocados();
	}

	double PrecoTotal() {
		double total = 0;
		for (Veiculo veiculo : veiculo) {
			total += veiculo.valorLoc;
		}
		return total;
	}

}
