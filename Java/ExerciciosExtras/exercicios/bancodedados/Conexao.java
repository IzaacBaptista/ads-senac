package ExerciciosExtras.exercicios.bancodedados;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class Conexao {
    public static Connection getConnection() throws Exception {
        try {
            //Properties props = getProps();
            final String url = "jdbc:mysql://localhost:3306/vendas";
            //final String url = props.getProperty("banco.url");
            final String user = "root";
            //final String user = props.getProperty("banco.usuario");
            final String password = "";
            //final String password = props.getProperty("banco.senha");

            return DriverManager.getConnection(url, user, password);
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
    }

    public static void createUser(
        Connection conexao,
        String userName, 
        String password, 
        String nome
    ) throws Exception {
        String sql = "INSERT INTO usuario " + 
                        "(user_name, password, name) " + 
                    "VALUES(?,?,?)";
        try{
            PreparedStatement statement = conexao.prepareStatement(sql);
            statement.setString(1, userName);
            statement.setString(2, password);
            statement.setString(3, nome);
            
            statement.execute();
        } catch(SQLException e){
            throw new RuntimeException(e);
        }
    }

    public static void updateUser(
        Connection conexao,
        int id, 
        String password
    ) throws Exception {
        String sql = "UPDATE usuario " + 
                        "SET password = ?" + 
                    "WHERE id = ?";
        try{
            PreparedStatement statement = conexao.prepareStatement(sql);
            statement.setString(1, password);
            statement.setInt(2, id);
            
            statement.execute();
        } catch(SQLException e){
            throw new RuntimeException(e);
        }
    }

    public static void removeUser(
        Connection conexao,
        int id
    ) throws Exception {
        String sql = "DELETE FROM usuario " + 
                    "WHERE id = ?";
        try{
            PreparedStatement statement = conexao.prepareStatement(sql);
            statement.setInt(1, id);
            
            statement.execute();
        } catch(SQLException e){
            throw new RuntimeException(e);
        }
    }

    public static void findUser(Connection conexao) throws Exception {
        String sql = "SELECT * FROM usuario";
        Statement statemente = conexao.createStatement();
        ResultSet resultados = statemente.executeQuery(sql);

        while(resultados.next()){
            Usuario user = new Usuario(
                resultados.getInt("id"),
                resultados.getString("user_name"),
                resultados.getString("password"),
                resultados.getString("name")
            );

            System.out.println(user);
        }

        
    }
}