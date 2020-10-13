public class ModeloX extends TV implements ControleRemoto {
    public ModeloX(int tamanho) {
        super(tamanho);
    }

    public final String MODELO = "TV-X";

  public void ModeloSDX(int tamanho) {
  }

  public void desligar() {
    System.out.println("Obrigado por Utilizar a Televisão!");
    super.setLigada(false);
  }

  public boolean ligar() {
    super.setLigada(true);
    return false;
  }

  public void aumentarVolume(int taxa) { }
  public void diminuirVolume(int taxa) { }
  public void mudarCanal(int canal) { }
}