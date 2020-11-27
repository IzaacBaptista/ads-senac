package ExerciciosExtras.exercicios.frame;

import java.awt.*;
import javax.swing.*;

public class Resumo1 extends JFrame {
    private JLabel labelNome;
    private JLabel labelSenha;
    private JLabel labelComent;
    private JTextField textNome;

    private JPasswordField textSenha;
    private JTextArea textComent;
    private JButton buttonOk;
    private JButton buttonCancelar;
    private JScrollPane paneComent;

    public Resumo1(){
        super("Exemplo prático - Interface Login");

        labelNome = new JLabel("Nome");
        labelSenha = new JLabel("Senha");
        labelComent = new JLabel("Comentário");

        textNome = new JTextField(25);
        textSenha = new JPasswordField(25);

        textSenha.setEchoChar('*');
        textComent = new JTextArea(10,25);
        textComent.setLineWrap(true);

        paneComent = new JScrollPane(
            textComent, 
            JScrollPane.VERTICAL_SCROLLBAR_ALWAYS, 
            JScrollPane.HORIZONTAL_SCROLLBAR_NEVER
        );

        buttonOk = new JButton("OK");
        buttonCancelar = new JButton("Cancelar");

        Container pane = this.getContentPane();

        pane.setLayout(new FlowLayout(FlowLayout.LEFT));

        pane.add(labelNome);
        pane.add(textNome);
        pane.add(labelSenha);
        pane.add(textSenha);
        pane.add(labelComent);
        pane.add(paneComent);
        pane.add(buttonOk);
        pane.add(buttonCancelar);

        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(310,380);
        this.setResizable(false);
        this.setVisible(true);
    }

    public static void main(String[] args){
        Resumo1 janela = new Resumo1();
    }
}