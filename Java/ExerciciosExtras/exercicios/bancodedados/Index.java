package ExerciciosExtras.exercicios.bancodedados;

import java.sql.Connection;

public class Index {
    public static void main(String[] args) throws Exception {
        System.out.println("Iniciando o Banco de Dados");
        
        Connection connection = Conexao.getConnection();

        //System.out.println("Criando novo Usuário");
        //Conexao.createUser(connection, "usuario3", "456789", "Teste");

        //System.out.println("Alterando Usuário");
        //Conexao.updateUser(connection, 4, "987654");

        System.out.println("Removendo Usuário");
        Conexao.removeUser(connection, 4);

        DAO dao = new DAO();
        String insertUser = "INSERT INTO usuario " + 
                                "(user_name, password, name) " + 
                            "VALUES(?,?,?)";
        Object[] obj = { "usuario3", "456789", "Teste" };
        System.out.println(dao.insert(insertUser, obj));

        System.out.println("Exibindo os Usuários: ");
        Conexao.findUser(connection);
        connection.close();
    }
}