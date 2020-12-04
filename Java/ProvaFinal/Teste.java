
import java.sql.Connection;
import java.sql.DriverManager;


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
            System.out.println("Conectado ao banco");
        }   catch (Exception e) {
            System.out.println(e.getMessage());
        }

    }
}


/*
c:\Users\izaac\.vscode\extensions\vscjava.vscode-java-debug-0.29.0\scripts\launcher.bat "C:\Program Files\Java\jdk-11.0.8\bin\java.exe" -Dfile.encoding=UTF-8 -cp C:\Users\izaac\AppData\Roaming\Code\User\workspaceStorage\bdf46847e879933fee85c878b9995eb9\redhat.java\jdt_ws\ProvaFinal_81ef81ce\bin;mysql-connector-java-8.0.18.jar Teste
*/