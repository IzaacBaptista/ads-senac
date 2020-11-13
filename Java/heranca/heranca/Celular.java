package heranca.heranca;

public class Celular extends Eletronico{
    private boolean chamada;

    public Celular(
        boolean chamada,
        String marca,
        boolean ligar,
        boolean desligar,
        boolean som,
        boolean visor,
        boolean energia,
        boolean wifi,
        double preco
    ){
        super(marca, ligar, desligar, som, visor, energia, wifi, preco);
        this.chamada = chamada;
    }

    public void setChamada(boolean chamada){
        this.chamada = chamada;
    }

    public void setMarca(String marca) {
        super.marca = marca;
    }

    public void setLigar(boolean ligar) {
        super.ligar = ligar;
    }

    public void setDesligar(boolean desligar) {
        super.desligar = desligar;
    }

    public void setSom(boolean som) {
        super.som = som;
    }

    public void setVisor(boolean visor) {
        super.visor = visor;
    }

    public void setEnergia(boolean energia) {
        super.energia = energia;
    }

    public void setWifi(boolean wifi) {
        super.wifi = wifi;
    }

    public void setPreco(double preco) {
        super.preco = preco;
    }

    public boolean getChamada() {
        return this.chamada;
    }

    public String getMarca() {
        return super.marca;
    }

    public boolean getLigar() {
        return super.ligar;
    }

    public boolean getDesligar() {
        return super.desligar;
    }

    public boolean getSom() {
        return super.som;
    }

    public boolean getVisor() {
        return super.visor;
    }

    public boolean getEnergia() {
        return super.energia;
    }

    public boolean getWifi() {
        return super.wifi;
    }

    public double getPreco() {
        return super.preco;
    }

    @Override
    public String toString() {
        return " ==== Celular ====" +
        "\nChamada: " + getChamada() +
        "\nMarca: " + getMarca() +
        "\nLigar: " + getLigar() +
        "\nDesligar: " + getDesligar() +
        "\nSom: " + getSom() +
        "\nVisor: " + getVisor() +
        "\nEnergia: " + getEnergia() +
        "\nWifi: " + getWifi() +
        "\nPreço: " + getPreco();
    }   
}
                