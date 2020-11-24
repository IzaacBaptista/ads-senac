package ProvaFinal;

import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.Properties;

import javax.management.RuntimeErrorException;

public class Conexao {
    
    public static Connection getConnection() throws Exception {
        try{
            Class.forName("com.mysql.jdbc.Driver");
            final String url = "jdbc:mysql://localhost:3306/sakila";
            final String user = "root";
            final String password = "";

            return DriverManager.getConnection(url, user, password);
        }   catch (SQLException e) {
            throw new RuntimeException(e);
        }
    }
    
}
