package models;

import java.util.ArrayList;
import java.util.Date;
import java.text.DateFormat;
import java.util.List;
import java.util.Calendar;

public class Locacao {
    protected int idLocacao;
    protected int idCliente;
    protected Date dataDeLocacao;
    protected Date dataDeDevolucao;
    protected Cliente cliente;
    ArrayList<VeiculosLocados> veiculosLocados;
    List<Veiculo> veiculos = new ArrayList<>();
	Calendar dataX = Calendar.getInstance();

    //constructor
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

    // Método adicionar locação
    public static void addLocacao() {
	}

    // Método exibir locação
	public static void printLocacao() {
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

    //sets

    public void setIdLocacao(int idlocacao) {
        this.idLocacao = idLocacao;
    }

    public void setIdCliente(int idCliente) {
        this.idCliente = idCliente;
    }

	public void setCliente(Cliente cliente) {
        this.cliente = cliente;
    }

    //gets

    public int getIdLocacao() {
        return this.idLocacao;
    }

    public int getIdCliente() {
        return this.idCliente;
    }

	public Cliente getCliente() {
        return this.cliente;
    }

    @Override
    public boolean equals(Object o) {
        if (o == this)
            return true;
        if (!(o instanceof Locacao)) {
            return false;
        }
        Locacao locacao = (Locacao) o;
        return idLocacao == locacao.idLocacao;
    }

    @Override
    public String toString() {
        return " ==== Locação ==== " + 
               "\nId: " + getIdCliente() + 
               "\nLocação: " + getIdLocacao() + 
               "\nCliente: " +  getCliente();
    }
}
