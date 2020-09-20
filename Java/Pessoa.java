
public class Pessoa {
    // Características
    String nome;
    double peso;
    double altura;
    int dataNascimento;
    double imc;
    // Ações
    public void subirNaBalanca() throws Exception {
        if (imc <= 18.5 ) {
            throw new Exception("Seu IMC é: " + peso /(altura * 2) + " Você está abaixo do peso");
        }
        if ((imc > 18.5 ) && (imc <= 25)){
            throw new Exception("Seu IMC é: " + peso /(altura * 2) + " Você está com peso normal");
        }
        
        if ((imc > 25) && ( imc <= 30)) {
            throw new Exception("Seu IMC é: " + peso /(altura * 2) + " Você está acima do peso");
        }
        
        if ( imc > 30) {
            throw new Exception("Seu IMC é: " + peso /(altura * 2) + " Você está obeso");
        }
            
    }    
}

