package ProvaFinal;

import java.util.ArrayList;
public class VeiculosLocados {
    protected int idVeiculoPesado;
    protected int idVeiculoLeve;
    protected int idVeiculoLocado;
    ArrayList<Locacao> locacoes;

    //constructor
    public VeiculosLocados(int idVeiculoPesado, int VeiculoLeve, int idVeiculoLocado)    {
        this.idVeiculoPesado = idVeiculoPesado;
        //this.idVeiculoLeve = idVeiculoLeve;
        this.idVeiculoLocado = idVeiculoLocado;
    }

    //sets
    public void setIdVeiculoLocado(int idVeiculoPesado) {
        this.idVeiculoPesado = idVeiculoPesado;
    }

    public void setIdVeiculoLeve(int idVeiculoLeve) {
        this.idVeiculoLeve = idVeiculoLeve;
    }

    public void setidVeiculoLocado(int idVeiculoLocado) {
        this.idVeiculoLocado = idVeiculoLocado;
    }

    //gets
    public int getIdVeiculoPesado() {
        return this.idVeiculoPesado;
    }

    public int getIdVeiculoLeve() {
        return this.idVeiculoLeve;
    }
    
    public int getIdVeiculoLocado() {
        return this.idVeiculoLocado;
    }

    @Override
    public boolean equals(Object o) {
        if (o == this)
            return true;
        if (!(o instanceof VeiculosLocados)) {
            return false;
        }
        VeiculosLocados veiculoLocado = (VeiculosLocados) o;
        return idVeiculoLocado == veiculoLocado.idVeiculoLocado;
    }

    @Override
    public String toString() {
        return " ==== Veiculos Locados ==== " + 
               "\nId: " + getIdVeiculoPesado() + 
               "\nVeiculo Leve: " + getIdVeiculoLeve() +
               "\nVeiculo Locado: " + getIdVeiculoLocado() ;
    }
}
