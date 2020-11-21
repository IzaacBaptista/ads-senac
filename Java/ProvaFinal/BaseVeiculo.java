package ProvaFinal;
//coments
public interface BaseVeiculo {
    public int quantidadeDeLocaçõesRealizadas();
    public default String seloDaEmpresa() {
        System.out.println("Locadora");
        return null;
    }
}