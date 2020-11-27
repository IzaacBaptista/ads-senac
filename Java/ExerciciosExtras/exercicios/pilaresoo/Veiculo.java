package ExerciciosExtras.exercicios.pilaresoo;

public class Veiculo {
    protected String marca = "";
    protected String modelo = ""; 
    private final int rodas;
    private int velocidade = 0;
    private final int velocidadeMaxima;
    
    Veiculo(String marca, String modelo){
        this(marca,modelo,150,4);
    }

    Veiculo(String marca, String modelo, int velocidadeMaxima, int rodas){
        this.marca = marca;
        this.modelo = modelo;
        this.velocidadeMaxima = velocidadeMaxima;
        this.rodas = rodas;
    }

    void acelerar(int velocidade){
        if(this.velocidade + velocidade >= this.velocidadeMaxima){
            this.velocidade = this.velocidadeMaxima;
        } else {
            this.velocidade += velocidade;
        }        
    }

    void freiar(){
        if(this.velocidade - 20 <= 0){
            this.velocidade = 0;
        }else{
            this.velocidade -= 20;
        }
    }

    void imprimirVelocidade(){
        System.out.println(this.velocidade);
    }
}