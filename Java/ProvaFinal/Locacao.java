package ProvaFinal;

import java.util.ArrayList;
import java.util.Date;

public class Locacao {
    int idLocacao;
    int idCliente;
    Date dataDeLocacao;
    Date dataDeDevolucao;
    Cliente cliente;
    ArrayList<VeiculosLocados> veiculosLocados;

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
}
