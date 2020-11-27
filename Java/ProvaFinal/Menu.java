package ProvaFinal;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
//import javax.swing.JTextArea;

import java.awt.*;

public class Menu extends JFrame{

    private static final long serialVersionUID = 1L;

    JLabel minhaLoja = new JLabel("Revenda de Automóveis");
    JButton cadastrarCliente = new JButton("Cadastrar Cliente");
    JButton cadastrarVeiculo = new JButton("Cadastrar Veiculo");
    JButton cadastrarLocacao = new JButton("Cadastrar Locação");
    JButton ListarClientes = new JButton("Listar Clientes");
    JButton ListarVeiculos = new JButton("Listar Veiculo");
    JButton ListarLocacoes = new JButton("Listar Locações");

    public Menu() {
        Container pane = this.getContentPane();
        pane.setLayout(new FlowLayout());
        pane.add(minhaLoja);
        pane.add(cadastrarCliente);
        pane.add(cadastrarVeiculo);
        pane.add(cadastrarLocacao);
        pane.add(ListarClientes);
        pane.add(ListarVeiculos);
        pane.add(ListarLocacoes);
        this.setSize(240,260);
        this.setVisible(true);
    }
    
    public static void main(String[] args) {
        new Menu();
    }
}
