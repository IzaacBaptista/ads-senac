package ExerciciosExtras.exercicios.frame;

import java.awt.*;
import javax.swing.*;

public class JTextFieldExemplo extends JFrame {

    JTextField texto1 = new JTextField(20);
    JTextField texto2 = new JTextField(25);

    JTextField texto3 = new JTextField("ESCREVA SEU TEXTO AQUI!!",10);

    public JTextFieldExemplo() {

        Container pane = this.getContentPane();
        pane.setLayout(new FlowLayout(FlowLayout.LEFT));

        pane.add(texto1);
        pane.add(texto2);
        pane.add(texto3);

        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(360,150);
        this.setVisible(true);
    }

    public static void main(String[] args){
        JTextFieldExemplo janela = new JTextFieldExemplo();
    }
}