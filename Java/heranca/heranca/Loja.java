package heranca.heranca;

public class Loja {
    public static void main(String[] args) {
        Gerente usuarioUm = new Gerente("Carlos", "123456", 15000, "Produção");
        Funcionario usuarioDois = new Funcionario("Roberto","deuséfiel", 1000, "Produção");
        Cliente usuarioTres = new Cliente("Andressa", "qualquersenha", "89245000", "Rua Prefeito Martinho", 1010, 991976600);

        System.out.println(usuarioUm);
        System.out.println(usuarioDois);
        System.out.println(usuarioTres);
    }    
}
