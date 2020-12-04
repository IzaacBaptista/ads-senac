package view;

import java.awt.*;
import java.awt.event.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane; 


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
        /*
        ActionListener actionCadastrarCliente = new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                handleCadastrarCliente(e);
            }
        };

        ActionListener actionCadastrarVeiculo = new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                handleCadastrarVeiculo(e);
            }
        };

        ActionListener actionCadastrarLocacao = new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                handleCadastrarLocacao(e);
            }
        };
        */
        
        cadastrarCliente.addActionListener( new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                handleCadastrarCliente(e);
            }
        });

        cadastrarVeiculo.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                handleCadastrarVeiculo(e);
            }
        });

        cadastrarLocacao.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                handleCadastrarLocacao(e);
            }
        });

        listarClientes.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                handleListarClientes(e);
            }
        });

        listarVeiculos.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                handleListarVeiculos(e);
            }
        });

        listarLocacoes.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                handleListarLocacoes(e);
            }
        });
        
        /*
        cadastrarCliente.addActionListener(actionCadastrarCliente);
        cadastrarVeiculo.addActionListener(actionCadastrarVeiculo);
        cadastrarLocacao.addActionListener(actionCadastrarLocacao);
        */
        pane.add(minhaLoja);
        pane.add(cadastrarCliente);
        pane.add(cadastrarVeiculo);
        pane.add(cadastrarLocacao);
        pane.add(listarClientes);
        pane.add(listarVeiculos);
        pane.add(listarLocacoes);
        this.setSize(240, 300);
        this.setVisible(true);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLocationRelativeTo(null);
        this.setTitle("Menu Principal");
    }

    private void handleCadastrarCliente(ActionEvent e) {
        new TelaCadastroCliente("Cadastro Cliente");
    }

    private void handleCadastrarVeiculo(ActionEvent e) {
        new TelaCadastroVeiculo("Cadastro Veiculo");
    }

    private void handleCadastrarLocacao(ActionEvent e) {
        new TelaCadastroLocacao("Cadastro Locação");
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
