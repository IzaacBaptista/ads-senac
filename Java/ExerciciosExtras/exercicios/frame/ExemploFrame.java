package ExerciciosExtras.exercicios.frame;

import javax.swing.*;
import java.awt.*;

public class ExemploFrame extends JFrame {

    /**
     *
     */
    private static final long serialVersionUID = 2141376582871221576L;

    public ExemploFrame() {
        JLabel labelNome = new JLabel("Nome");
        JLabel labelUsername = new JLabel("Username");
        JLabel labelSenha = new JLabel("Senha");
        JLabel labelObs = new JLabel("Obs.");

        JTextField textNome = new JTextField(25);
        JTextField textUsername = new JTextField(25);
        JTextField textSenha = new JTextField(25);

        JTextArea textAreaObs = new JTextArea(5,30);

        Container pane = this.getContentPane();
        pane.setLayout(new GridLayout(4,2));

        pane.add(labelNome);
        pane.add(textNome);

        pane.add(labelUsername);
        pane.add(textUsername);

        pane.add(labelSenha);
        pane.add(textSenha);

        pane.add(labelObs);
        pane.add(textAreaObs);

        this.setSize(600,400);
        this.setVisible(true);

    }

    public static void main(String[] args) {
        new ExemploFrame();
    }

}