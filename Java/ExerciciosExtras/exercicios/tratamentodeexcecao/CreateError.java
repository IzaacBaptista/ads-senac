package ExerciciosExtras.exercicios.tratamentodeexcecao;

public class CreateError {
    public static void main(String[] args){

        String str = null;

        new Exception("Ocorreu um erro não exibido");

        try{
            erroTratado();
        } catch (Exception e){
            System.out.println(e.getMessage());
        }
        
        //erroNaoTratado();
        
        try{
            if(str == null){
                throw new StringVaziaException("str");
            }
        } catch(StringVaziaException e) {
            System.out.println(e.getMessage());
        }
        

    }

    static void erroNaoTratado() throws RuntimeException {
        throw new RuntimeException("Ocorreu um erro sem necessidade de tratamento");
    }

    static void erroTratado() throws Exception {
        throw new Exception("Ocorreu um erro com necessidade de tratamento");
    }
}