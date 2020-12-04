
import javax.swing.*;
import javax.swing.JButton;
import javax.swing.JFrame;
import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class JOptionPaneExemplo extends JFrame   {

    JButton ok = new JButton("Ok");;
    JButton cancelar = new JButton("Cancelar");

    public JOptionPaneExemplo() {
        super("TESTE DE OptionPane");

        //mensagem = new JButton("Mensagem");
        //fechar = new JButton("Fechar");

        Container pane = this.getContentPane();

        pane.add(ok);
        pane.add(cancelar);

        pane.setLayout(null);

        ok.setBounds(10,30,100,22);
        cancelar.setBounds(10,60,100,22);

        ok.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e)  {
                buttonConfirmaActionPerformed(e);
            }
        });

        this.setSize(250,250);
        this.setContentPane(pane);
        this.setVisible(true);
    }

    private void buttonMensagemActionPerformed(ActionEvent e)   {
        JOptionPane.showMessageDialog(
            this,
            "teste1",
            "teste2",
            JOptionPane.INFORMATION_MESSAGE
        );
    }

    private void buttonConfirmaActionPerformed(ActionEvent e)   {
        int retorno = JOptionPane.showConfirmDialog(
            this,
            "Deseja Fechar?",
            "Fechar",
            JOptionPane.OK_CANCEL_OPTION,
            JOptionPane.QUESTION_MESSAGE
        );

        if(retorno == JOptionPane.OK_OPTION) {
            System.exit(0);
        } 
    }

    public static void main(String[] args) {
        JOptionPaneExemplo janela = new JOptionPaneExemplo();
    }
}