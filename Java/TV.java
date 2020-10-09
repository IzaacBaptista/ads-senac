public class TV {
    private int tamanho;
    private int canal;
    private int volume;
    private boolean ligada;
    public TV(int tamanho) {
      this.tamanho = tamanho;
      this.canal = 0;
      this.volume = 0;
      this.ligada = false;
    }
	public void setLigada(boolean b) {
	}
    
  }
  
  public interface ControleRemoto {
    void mudarCanal(int canal);
    void aumentarVolume (int taxa);
    void diminuirVolume (int taxa);
    boolean ligar();
    void desligar();
  }