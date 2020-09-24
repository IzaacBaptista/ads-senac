public class Chassi {
    String numero;
    String material;
    double comprimento;
    double largura;
    Motor motor;

    public Chassi(
        String numero, 
        String material, 
        double comprimento, 
        double largura, 
        int qtdPistoes,
        String materialMotor
    ) {
        this.numero = numero;
        this.material = material;
        this.comprimento = comprimento;
        this.largura = largura;
        this.motor = new Motor(qtdPistoes, materialMotor, this);
    }
}
