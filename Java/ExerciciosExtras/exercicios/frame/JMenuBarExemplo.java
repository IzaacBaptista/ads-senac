package ExerciciosExtras.exercicios.frame;

import java.awt.*;
import javax.swing.*;

public class JMenuBarExemplo extends JFrame {

    private JMenuItem menuItemAbrir = new JMenuItem("Abrir");
    private JMenuItem menuItemNovo = new JMenuItem("Novo");
    private JMenuItem menuItemSalvar = new JMenuItem("Salvar");
    private JMenuItem menuItemFechar = new JMenuItem("Fechar");

    private JMenuItem menuItemColar = new JMenuItem("Colar");
    private JMenuItem menuItemCopiar = new JMenuItem("Copiar");
    private JMenuItem menuItemRecortar = new JMenuItem("Recortar");

    private JMenuItem menuItemSubstituir = new JMenuItem("Substituir");
    private JMenuItem menuItemLocalizar = new JMenuItem("Localizar");

    private JMenu menuArquivo = new JMenu("Arquivo");

    private JMenu menuEditar = new JMenu("Editar");

    private JMenuBar menuBar = new JMenuBar();

    public JMenuBarExemplo() {

        menuArquivo.add(menuItemAbrir);
        menuArquivo.add(menuItemNovo);
        menuArquivo.add(menuItemSalvar);
        menuArquivo.addSeparator();
        menuArquivo.add(menuItemFechar);

        menuEditar.add(menuItemColar);
        menuEditar.add(menuItemCopiar);
        menuEditar.add(menuItemRecortar);
        menuEditar.addSeparator();
        menuEditar.add(menuItemLocalizar);
        menuEditar.add(menuItemSubstituir);

        menuBar.add(menuArquivo);
        menuBar.add(menuEditar);

        this.setJMenuBar(menuBar);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(310,200);
        this.setVisible(true);
    }

    public static void main(String[] args){
        JMenuBarExemplo janela = new JMenuBarExemplo();
    }
}