
public class Balanca {
    public static void main(String[] args) {
        Pessoa pesar = new Pessoa();
        pesar.nome = "Pessoa1";
        pesar.peso = 80;
        pesar.altura = 1.90;
        pesar.dataNascimento = 1993;
        pesar.imc = (pesar.peso /(pesar.altura * 2));
        try{ 
           pesar.subirNaBalanca();
           
       } catch (Exception e) {
           System.out.println(e.getMessage());
       }
        }
    
}
