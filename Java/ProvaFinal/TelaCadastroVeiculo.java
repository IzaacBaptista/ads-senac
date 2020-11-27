package ProvaFinal;

import java.awt.Container;
import java.awt.GridLayout;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class TelaCadastroVeiculo extends JFrame {

    JTextField campoPlaca = new JTextField();
    JTextField campoRenavam = new JTextField();
    JTextField campoMarca = new JTextField();
    JTextField campoModelo = new JTextField();
    JTextField campoChassi = new JTextField();
    JTextField campoAno = new JTextField();
    JTextField campoCor = new JTextField();

    JLabel placa = new JLabel("Placa:");
    JLabel renavam = new JLabel("Renavam:");
    JLabel marca = new JLabel("Marca:");
    JLabel modelo = new JLabel("Modelo:");
    JLabel chassi = new JLabel("Chassi:");
    JLabel ano = new JLabel("Ano:");
    JLabel cor = new JLabel("Cor:");

    public TelaCadastroVeiculo(String titulo) {
        super(titulo);
    }

    private void mostrarTela() {
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new GridLayout(4, 2));
        Container cp = getContentPane();
        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(4, 2));
        panel.add(placa);
        panel.add(campoPlaca);
        panel.add(renavam);
        panel.add(campoRenavam);
        panel.add(marca);
        panel.add(campoMarca);
        panel.add(modelo);
        panel.add(campoModelo);
        cp.add(panel);
        
        JPanel panel2 = new JPanel(); 
        panel2.setLayout(new GridLayout(4, 6));
        panel2.add(chassi); 
        panel2.add(campoChassi); 
        panel2.add(ano);
        panel2.add(campoAno); 
        panel2.add(cor); 
        panel2.add(campoCor); 
        cp.add(panel2);
         

        pack();
        // this.setSize(600,300);
        this.setVisible(true);
    }

    public static void main(String[] args) {
        TelaCadastroVeiculo executar = new TelaCadastroVeiculo("Cadastro de Veiculo");
        executar.mostrarTela();
    }
}