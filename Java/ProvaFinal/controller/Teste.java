package controller;

import java.sql.Connection;

public class Teste {
    public static void main(String[] args) throws Exception {
    /* 
        String url = "";
        String user = "";
        String password = "";

        Connection connection = DriverManager
            .getConnection(url, user, password);
    */

        try {
            Connection conexao = Conexao.getConnection();
            System.out.println("Conexão OK" + conexao);
        }   catch (Exception e) {
            System.out.println(e.getMessage());
        }

    }
}
