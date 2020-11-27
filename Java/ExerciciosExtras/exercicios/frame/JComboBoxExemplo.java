package ExerciciosExtras.exercicios.frame;

import java.awt.*;
import javax.swing.*;

public class JComboBoxExemplo extends JFrame {
    private JLabel labelMes = new JLabel("Informe o Mês:");
    private JLabel labelAno = new JLabel("Informe o Ano:");

    private JComboBox comboMes = new JComboBox();
    private JComboBox comboAno = new JComboBox();

    public JComboBoxExemplo(){
        super("Testando JComboBox");

        Container pane1 = this.getContentPane();
        pane1.setLayout(new GridLayout(2,1));
        
        JPanel pane2 = new JPanel(new FlowLayout(FlowLayout.LEFT));
        JPanel pane3 = new JPanel(new FlowLayout(FlowLayout.LEFT));

        comboMes.addItem("Janeiro");
        comboMes.addItem("Fevereiro");
        comboMes.addItem("Março");
        comboMes.addItem("Abril");
        comboMes.addItem("Maio");
        comboMes.addItem("Junho");
        comboMes.addItem("Julho");
        comboMes.addItem("Agosto");
        comboMes.addItem("Setembro");
        comboMes.addItem("Outubro");
        comboMes.addItem("Novembro");
        comboMes.addItem("Dezembro");
        
        for(int i = 2000; i <= 2020; i++)
            comboAno.addItem(i);
            
        comboAno.setEditable(true);
        
        pane2.add(labelMes);
        pane2.add(comboMes);
        pane3.add(labelAno);
        pane3.add(comboAno);

        pane1.add(pane2);
        pane1.add(pane3);
        
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(310,120);
        this.setResizable(false);
        this.setVisible(true);
    }

    public static void main(String[] args){
        JComboBoxExemplo janela = new JComboBoxExemplo();
    }
}