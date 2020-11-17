package ProvaFinal;
//coments
import java.util.ArrayList;

public class VeiculosLeves extends Veiculo {
    int idVeiculosLeves;
    String cor;
    ArrayList<VeiculosLocados> veiculosLocados;


    public VeiculosLeves(
        int idVeiculosLeves, 
        String cor, 
        String marca,
        String modelo,
        int ano,
        double valorParaLocacao
        )    
        {
        this.idVeiculosLeves = idVeiculosLeves;
        this.cor = cor;
        super.marca = marca;
        super.modelo = modelo;
        super.ano = ano;
        super.valorParaLocacao = valorParaLocacao;
    }

    public void setIdVeiculosLeves(int idVeiculosLeves) {
        this.idVeiculosLeves = idVeiculosLeves;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

    public int getIdVeiculosLeves() {
        return this.idVeiculosLeves;
    }

    public String getCor() {
        return this.cor;
    }

    @Override
    public boolean equals(Object o) {
        if (o == this)
            return true;
        if (!(o instanceof VeiculosLeves)) {
            return false;
        }
        VeiculosLeves veiculosLeves = (VeiculosLeves) o;
        return idVeiculosLeves == veiculosLeves.idVeiculosLeves;
    }

    @Override
    public String toString() {
        return " ==== Veiculos Leves ==== " + 
               "\nId: " + getIdVeiculosLeves() + 
               "\nCor: " + getCor() ;
    }
}