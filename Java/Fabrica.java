
public class Fabrica {
    public static void main(String[] args) throws Exception {
        Robo bubu = new Robo("bubu","Trabalhar na recepção",5, 2);

        try{
            bubu.repetirSeuNome("Marcos");
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }

        try{
            bubu.suaFuncao();
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }
    
}
