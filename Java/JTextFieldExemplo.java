import java.awt.*;
import javax.swing.*;

public class JTextFieldExemplo extends JFrame {

    /**
     *
     */
    private static final long serialVersionUID = 1515378374808288106L;
    
    JTextField texto1 = new JTextField(20);
    JTextField texto2 = new JTextField(25);

    JTextField texto3 = new JTextField("ESCREVA SEU TEXTO AQUI!!", 24);

    // constructor
    public JTextFieldExemplo() {

        Container pane = this.getContentPane();
        LayoutManager layout = new FlowLayout(FlowLayout.LEFT);
        pane.setLayout(layout);
        pane.add(texto1);
        pane.add(texto2);
        pane.add(texto3);

        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(360, 150);
        this.setVisible(true);
    }

    public static void main(String[] args) {
        new JTextFieldExemplo();
    }
}
