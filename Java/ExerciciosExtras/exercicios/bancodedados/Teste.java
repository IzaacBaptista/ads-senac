package ExerciciosExtras.exercicios.bancodedados;

import java.sql.DriverManager;
import java.sql.SQLException;

public class Teste {
    public static void main(String[] args) throws SQLException {
        String url = "jdbc:mysql://localhost:3306/vendas";
        String user = "root";
        String password = "";

        DriverManager.getConnection(url, user, password);
    }
}