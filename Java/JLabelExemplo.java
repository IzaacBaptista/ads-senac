import java.awt.*;
import javax.swing.*;

public class JLabelExemplo extends JFrame{
    JLabel label1;
    JLabel label2;
    JLabel label3;
    JLabel label4 = new JLabel("Rótulo 4", JLabel.CENTER);

    public JLabelExemplo()  {
        label1 = new JLabel("Testando rótulos com JAVA");

        label2 = new JLabel("Texto centralizado", JLabel.CENTER);

        label3 = new JLabel("JAVA - Interface Gráfica", JLabel.RIGHT);

        Container pane = this.getContentPane();
        LayoutManager layout = new  GridLayout(4,1);
        pane.setLayout(layout);
        pane.add(label1);
        pane.add(label2);
        pane.add(label3);
        pane.add(label4);

        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(300,200);
        this.setVisible(true);
    }

    public static void main(String[] args) {
        JLabelExemplo janela = new JLabelExemplo();
    }
}
