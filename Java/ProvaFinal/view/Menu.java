package view;

import java.awt.*;
import java.awt.event.*;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;

public class Menu extends JFrame {

    private static final long serialVersionUID = 1L;

    JLabel minhaLoja = new JLabel("Revenda de Automóveis");
    JButton cadastrarCliente = new JButton("Cadastrar Cliente");
    JButton cadastrarVeiculo = new JButton("Cadastrar Veiculo");
    JButton cadastrarLocacao = new JButton("Cadastrar Locação");
    JButton listarClientes = new JButton("Listar Clientes");
    JButton listarVeiculos = new JButton("Listar Veiculo");
    JButton listarLocacoes = new JButton("Listar Locações");

    public Menu() {
        Container pane = this.getContentPane();
        pane.setLayout(new FlowLayout(FlowLayout.CENTER));

        cadastrarCliente.addActionListener(new addActionListener() {
            public void actionPerformed(ActionEvent e) {
                handleCadastrarCliente(e);
            }
        });

        cadastrarVeiculo.addActionListener(new addActionListener() {
            public void actionPerformed(ActionEvent e) {
                handleCadastrarVeiculo(e);
            }
        });

        cadastrarLocacao.addActionListener(new addActionListener() {
            public void actionPerformed(ActionEvent e) {
                handleCadastrarLocacao(e);
            }
        });

        listarClientes.addActionListener(new addActionListener() {
            public void actionPerformed(ActionEvent e) {
                handleListarClientes(e);
            }
        });

        listarVeiculos.addActionListener(new addActionListener() {
            public void actionPerformed(ActionEvent e) {
                handleListarVeiculos(e);
            }
        });

        listarLocacoes.addActionListener(new addActionListener() {
            public void actionPerformed(ActionEvent e) {
                handleListarLocacoes(e);
            }
        });

        pane.add(minhaLoja);
        pane.add(cadastrarCliente);
        pane.add(cadastrarVeiculo);
        pane.add(cadastrarLocacao);
        pane.add(listarClientes);
        pane.add(listarVeiculos);
        pane.add(listarLocacoes);
        this.setSize(240, 260);
        this.setVisible(true);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLocationRelativeTo(null);
    }

    private void handleCadastrarCliente(ActionEvent e) {
        
    }

    private void handleCadastrarVeiculo(ActionEvent e) {
        
    }

    private void handleCadastrarLocacao(ActionEvent e) {
        
    }

    private void handleListarVeiculos(ActionEvent e) {
        
    }

    private void handleListarClientes(ActionEvent e) {
        
    }

    private void handleListarLocacoes(ActionEvent e) {
        
    }

    public static void main(String[] args) {
        new Menu();
    }
}
