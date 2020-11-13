package heranca.heranca;

public class Eletronico {
    protected String marca;
    protected boolean ligar;
    protected boolean desligar;
    protected boolean som;
    protected boolean visor;
    protected boolean energia;
    protected boolean wifi;
    protected double preco;

    public Eletronico(
        String marca,
        boolean ligar,
        boolean desligar,
        boolean som,
        boolean visor,
        boolean energia,
        boolean wifi,
        double preco
    ){
        this.marca = marca;
        this.ligar = ligar;
        this.desligar = desligar;
        this.som = som;
        this.visor = visor;
        this.energia = energia;
        this.wifi = wifi;
        this.preco = preco;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public void setLigar(boolean ligar) {
        this.ligar = ligar;
    }

    public void setDesligar(boolean desligar) {
        this.desligar = desligar;
    }

    public void setSom(boolean som) {
        this.som = som;
    }

    public void setVisor(boolean visor) {
        this.visor = visor;
    }

    public void setEnergia(boolean energia) {
        this.energia = energia;
    }

    public void setPreco(double preco) {
        this.preco = preco;
    }

    public String getMarca() {
        return this.marca;
    }

    public boolean getLigar() {
        return this.ligar;
    }

    public boolean getDesigar() {
        return this.desligar;
    }

    public boolean getSom() {
        return this.som;
    }

    public boolean getVisor() {
        return this.visor;
    }

    public boolean getEnergia() {
        return this.energia;
    }

    public double getPreco() {
        return this.preco;
    }


}
