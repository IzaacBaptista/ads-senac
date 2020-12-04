import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

import javax.swing.JOptionPane;

class Filiais extends Locadora {
    void menu() throws Exception {
        String menu;
        int valor;
        do {
            menu = JOptionPane.showInputDialog(
                    "FILIAIS\n\nDigite o numero de acordo com o menu abaixo:\n1 listagem\n2 remover\n3 cadastro\n0 voltar ao menu principal");
            // Se a pessoa escreveu um numero
            if (menu != null && menu.matches("[0-9]"))
                valor = Integer.parseInt(menu);
            else
                valor = 4;
            switch (valor) {
                case 1:
                    // Listando as filiais
                    try {
                        Connection con = abre_mysql();
                        Statement s = con.createStatement();
                        ResultSet rs = s
                                .executeQuery("select codigo, cidade, endereco from filial order by cidade, endereco");
                        System.out.println("CODIGO\t| Cidade\t\t| Endereco");
                        while (rs.next()) {
                            String codigo = (rs.getObject("codigo").toString());
                            String cidade = (rs.getObject("cidade").toString());
                            String endereco = (rs.getObject("endereco").toString());
                            System.out.println(codigo + "\t| " + cidade + "\t| " + endereco);
                        }
                        rs.close();
                        con.close();
                    } catch (SQLException e) {
                        System.out.println("Erro listando filiais");
                        throw (e);
                    }
                    break;
                case 2:
                    // Remover filiais pelo codigo
                    String ler;
                    // Padrão 0 pra se a pessoa não escolher nenhum ele nem verificar no banco de
                    // dados (vamos usar poucos recursos)
                    int qual = 0;
                    System.out.println("Removendo uma filial");
                    ler = JOptionPane.showInputDialog("FILIAIS\n\nDigite o Codigo da filial a remover");
                    if (ler != null && ler.matches("[0-9]+"))
                        qual = Integer.parseInt(ler);
                    if (qual == 0)
                        System.out.println(
                                "Você precisa digitar o codigo da filial a ser removida\nDICA: Liste e selecione o codigo desejado");
                    else {
                        try {
                            Connection con = abre_mysql();
                            Statement s = con.createStatement();
                            ResultSet rs = s
                                    .executeQuery("select codigo, cidade from filial where codigo='" + qual + "'");
                            if (rs.next()) {
                                String cidade = (rs.getObject("cidade").toString());
                                System.out.println("Removendo a filial " + qual + " da cidade " + cidade);
                                rs.close();
                                s.execute("delete from filial where codigo='" + qual + "'");
                                s.close();
                            } else
                                System.out.println("Nao existe a filial de codigo " + qual);
                            con.close();
                        } catch (SQLException e) {
                            System.out.println("Erro removendo filial");
                            throw (e);
                        }
                    }
                    break;
                case 3:
                    // Vamos cadastrar filiais :)
                    int criarOutro;
                    do {
                        criarOutro = 0;
                        String verificar, cidade, endereco, telefone;
                        System.out.println("Adicionando uma filial");
                        cidade = JOptionPane.showInputDialog("FILIAIS\n\nDigite a cidade");
                        if (cidade == null || cidade.matches("[^a-zA-Z0-9 .-]+"))
                            System.out.println("Voce precisa digitar uma cidade");
                        else {
                            endereco = JOptionPane.showInputDialog("FILIAIS\n\nDigite o endereco");
                            if (endereco == null || endereco.matches("[^a-zA-Z0-9 .-]+"))
                                System.out.println("Voce precisa digitar um endereco");
                            else {
                                telefone = JOptionPane.showInputDialog("FILIAIS\n\nDigite o telefone");
                                if (telefone == null || telefone.matches("[^a-zA-Z0-9 .-]+"))
                                    System.out.println("Voce precisa digitar o telefone");
                                else {
                                    // Só chega aqui se a pessoa digitar uma cidade, um endereço e um telefone (não
                                    // fazemos verificação dos dados - ainda por implementar)
                                    try {
                                        Connection con = abre_mysql();
                                        Statement s = con.createStatement();
                                        s.execute("insert into filial set cidade=\"" + cidade + "\", endereco=\""
                                                + endereco + "\", telefone=\"" + telefone + "\"");
                                        s.close();
                                        con.close();
                                        System.out.println("Adicionada filial em " + cidade);
                                    } catch (SQLException e) {
                                        System.out.println("Erro incluindo filial");
                                        throw (e);
                                    }
                                }
                            }
                        }
                        verificar = JOptionPane.showInputDialog("FILIAIS\n\nDeseja adicionar outra filial? [s/N]");
                        if (verificar != null && verificar.equalsIgnoreCase("s"))
                            criarOutro = 1;
                    } while (criarOutro == 1);
                    break;
            }
        } while (valor != 0);
    }

    private Connection abre_mysql() {
        return null;
    }
}