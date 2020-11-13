package ProvaFinal;
//coments
import java.util.ArrayList;

public class VeiculosPesados {
    int idVeiculosPesados;
    String restricoes;
    ArrayList<VeiculosLocados> veiculosLocados;

    public VeiculosPesados(int idVeiculosPesados, String restricoes)    {
        this.idVeiculosPesados = idVeiculosPesados;
        this.restricoes = restricoes;
    }

    public void setIdVeiculosPesados(int idVeiculosPesados) {
        this.idVeiculosPesados = idVeiculosPesados;
    }

    public void setRestricoes(String restricoes) {
        this.restricoes = restricoes;
    }

    public int getIdVeiculosPesados() {
        return this.idVeiculosPesados;
    }

    public String getRestricoes() {
        return this.restricoes;
    }

    @Override
    public boolean equals(Object o) {
        if (o == this)
            return true;
        if (!(o instanceof VeiculosPesados)) {
            return false;
        }
        VeiculosPesados veiculosPesados = (VeiculosPesados) o;
        return idVeiculosPesados == veiculosPesados.idVeiculosPesados;
    }

    @Override
    public String toString() {
        return " ==== Veiculos Pesados ==== " + 
               "\nId: " + getIdVeiculosPesados() + 
               "\nRestricoes: " + getRestricoes() ;
    }
}
