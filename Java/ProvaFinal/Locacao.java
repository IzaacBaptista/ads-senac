package ProvaFinal;
//coments
import java.util.ArrayList;
import java.util.Date;
import java.text.DateFormat;
import java.util.List;
import java.util.Calendar;

public class Locacao {
    int idLocacao;
    int idCliente;
    Date dataDeLocacao;
    Date dataDeDevolucao;
    Cliente cliente;
    ArrayList<VeiculosLocados> veiculosLocados;
    //private Object veiculos;

    List<Veiculo> veiculos = new ArrayList<>();
	Calendar dataX = Calendar.getInstance();

    public Locacao(
        int idLocacao, 
        int idCliente, 
        Date dataDeLocacao, 
        Date dataDeDevolucao, 
        Cliente cliente, 
        ArrayList<VeiculosLocados> veiculosLocados
        )   
        {
            this.idLocacao = idLocacao;
            this.idCliente = idCliente;
            this.dataDeLocacao = dataDeLocacao;
            cliente.setCliente(this);
    }

	public void setCliente(Cliente cliente) {

    }
    
    // Adição de Veiculos
	void AdicVeiculo(Veiculo veiculo) {
		this.veiculos.add(veiculo);
		//Contador Carros Locado
		veiculo.getIdVeiculoLocado();
		this.cliente.qtdVeiculosLocados();
	}

	double PrecoTotal() {
		double total = 0;
		for (Veiculo veiculo : veiculos) {
			total += veiculo.valorLoc;
		}
		return total;
	}

	// Método com a Quantidade de Veiculos Locados
	int qtdVeiculosLocados() {
		return ((ArrayList<VeiculosLocados>) this.veiculosLocados).size();
	}

	// Calculo Data de Devolução
	String calculoData() {
		Date dataAtual = new Date();
		dataX.setTime(dataAtual);
		dataX.add(Calendar.DATE, cliente.diaDev);

		// Formatando a Impressão da Data
		DateFormat dataEdit = DateFormat.getDateInstance(DateFormat.SHORT);

		return dataEdit.format(dataX.getTime());
	}
}
