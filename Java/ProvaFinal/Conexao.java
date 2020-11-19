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
            Properties props = getProps();
            final String url = "jdbc:mysql://localhost:3306/sakila";
            //final String url = props.getProperty("banco.url");
            final String user = "root";
            //final String url = props.getProperty("banco.usuario");
            final String password = "";
            //final String url = props.getProperty("banco.senha");

            return DriverManager.getConnection(url, user, password);
        }   catch (SQLException | IOException e) {
            throw new RuntimeException(e);
        }
    }

    private static Properties getProps() throws IOException {
        Properties props = new Properties();
        String path = "/exercicios/bancodedados/conexao.properties";
        props.load(Conexao.class.getResourceAsStream(path));
        return props;
    }
}
