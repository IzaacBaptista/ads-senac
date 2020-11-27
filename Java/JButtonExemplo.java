import java.awt.*;
import javax.swing.*;

public class JButtonExemplo extends JFrame {

    JButton button1 = new JButton("Abrir");
    JButton button2 = new JButton("Novo");
    JButton button3 = new JButton("Fechar");

    public JButtonExemplo() {

        Container pane = this.getContentPane();
        pane.setLayout(new FlowLayout(FlowLayout.CENTER));

        pane.add(button1);
        pane.add(button2);
        pane.add(button3);

        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(300, 150);
        this.setVisible(true);
    }

    public static void main(String[] args) {
        JButtonExemplo janela = new JButtonExemplo();
    }
}
