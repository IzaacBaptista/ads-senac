package ExerciciosExtras.exercicios.frame;

import java.awt.*;
import javax.swing.*;

public class JCheckBoxExemplo extends JFrame {
    /**
     *
     */
    private static final long serialVersionUID = 6714383583989441655L;
    private JLabel label = new JLabel("Qual estilo musical você prefere?");
    private JCheckBox checkPagode;
    private JCheckBox checkSertanejo;
    private JCheckBox checkEletronico;

    public JCheckBoxExemplo(){
        checkPagode = new JCheckBox("Pagode");
        checkSertanejo = new JCheckBox("Sertanejo");
        checkEletronico = new JCheckBox("Eletrônico");

        Container pane1 = this.getContentPane();
        JPanel pane2 = new JPanel(new FlowLayout(FlowLayout.LEFT));
        JPanel pane3 = new JPanel(new FlowLayout(FlowLayout.CENTER));

        pane1.setLayout(new GridLayout(2,1));

        pane2.add(label);
        pane3.add(checkPagode);
        pane3.add(checkSertanejo);
        pane3.add(checkEletronico);

        pane1.add(pane2);
        pane1.add(pane3);
        
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(310,120);
        this.setResizable(false);
        this.setVisible(true);
    }

    public static void main(String[] args){
        new JCheckBoxExemplo();
    }
}