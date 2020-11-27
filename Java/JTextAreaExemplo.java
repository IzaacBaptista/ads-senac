import java.awt.*;
import javax.swing.*;

public class JTextAreaExemplo extends JFrame {

    JTextArea textArea1 = new JTextArea(5, 30);
    JTextArea textArea2 = new JTextArea("Comentários", 10, 30);

    public JTextAreaExemplo() {

        Container pane = this.getContentPane();
        pane.setLayout(new FlowLayout(FlowLayout.CENTER));

        pane.add(textArea1);
        pane.add(textArea2);

        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(360, 320);
        this.setVisible(true);
    }

    public static void main(String[] args) {
        JTextAreaExemplo janela = new JTextAreaExemplo();
    }
}
