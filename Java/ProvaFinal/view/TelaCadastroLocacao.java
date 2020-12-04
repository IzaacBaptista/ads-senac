package view;

import java.awt.Container;
import java.awt.GridLayout;
import java.awt.FlowLayout;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class TelaCadastroLocacao extends JFrame {

    JMenuItem menuItemAbrir = new JMenuItem("Abrir");
    JMenuItem menuItemNovo = new JMenuItem("Novo");
    JMenuItem menuItemSalvar = new JMenuItem("Salvar");
    JMenuItem menuItemExportar = new JMenuItem("Exportar");
    JMenuItem menuItemFechar = new JMenuItem("Fechar");
    JMenuItem menuItemColar = new JMenuItem("Colar");
    JMenuItem menuItemCopiar = new JMenuItem("Copiar");
    JMenuItem menuItemRecortar = new JMenuItem("Recortar");
    JMenuItem menuItemSubstituir = new JMenuItem("Substituir");
    JMenuItem menuItemLocalizar = new JMenuItem("Localizar");
    JMenuItem menuItemOpcoesAvancadas = new JMenuItem("Opções Avançadas");
    JMenuItem menuItemTutoriais = new JMenuItem("Tutoriais");
    JMenuItem menuItemContato = new JMenuItem("Contato");
    JMenuItem menuItemAtualizacoes = new JMenuItem("Updates");
    JMenuItem menuItemLogin = new JMenuItem("Login");
    JMenuItem menuItemLogout = new JMenuItem("Sair");

    JMenu menuArquivo = new JMenu("Arquivo");
    JMenu menuEditar = new JMenu("Editar");
    JMenu menuOpcoes = new JMenu("Opções");
    JMenu menuAjuda = new JMenu("Ajuda");
    JMenu menuSobre = new JMenu("Sobre");
    JMenu menuConta = new JMenu("Conta");

    JMenuBar menuBar = new JMenuBar();

    JTextField campoNomeCliente = new JTextField();
    JTextField campoDiasLocacao = new JTextField();
    JTextField campoDiasParaDevolucao = new JTextField();
    JTextField campoModeloCarro = new JTextField();
    JTextField campoMarcaCarro = new JTextField();
    JTextField campoCorCarro = new JTextField();

    JLabel nomeCliente = new JLabel("Nome Cliente:");
    JLabel diasLocacao = new JLabel("Dias de Locacao:");
    JLabel diasParaDevolucao = new JLabel("Dias Para Devolucao:");
    JLabel modeloCarro = new JLabel("Modelo do Carro:");
    JLabel marcaCarro = new JLabel("Marca do Carro:");
    JLabel corCarro = new JLabel("Cor do Carro:");

    JTextArea textArea = new JTextArea("Comentários", 10, 20);
    JScrollPane scrollPane = new JScrollPane(textArea);

    JButton oK = new JButton("OK");
    JButton cancelarCadastro = new JButton("Cancelar");

    public TelaCadastroLocacao(String titulo) {
        super(titulo);
    }

    private void mostrarTela() {

        menuArquivo.add(menuItemAbrir);
        menuArquivo.add(menuItemNovo);
        menuArquivo.add(menuItemSalvar);
        menuArquivo.add(menuItemExportar);
        menuArquivo.addSeparator();
        menuArquivo.add(menuItemFechar);

        menuEditar.add(menuItemColar);
        menuEditar.add(menuItemCopiar);
        menuEditar.add(menuItemRecortar);
        menuEditar.addSeparator();
        menuEditar.add(menuItemLocalizar);
        menuEditar.add(menuItemSubstituir);

        menuOpcoes.add(menuItemOpcoesAvancadas);

        menuAjuda.add(menuItemTutoriais);

        menuSobre.add(menuItemAtualizacoes);
        menuSobre.add(menuItemContato);

        menuConta.add(menuItemLogin);
        menuConta.add(menuItemLogout);

        menuBar.add(menuArquivo);
        menuBar.add(menuEditar);
        menuBar.add(menuOpcoes);
        menuBar.add(menuAjuda);
        menuBar.add(menuSobre);
        menuBar.add(menuConta);

        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new FlowLayout());
        Container cp = getContentPane();
        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(3, 3));
        panel.add(nomeCliente);
        panel.add(campoNomeCliente);
        panel.add(diasLocacao);
        panel.add(campoDiasLocacao);
        panel.add(diasParaDevolucao);
        panel.add(campoDiasParaDevolucao);
        panel.add(modeloCarro);
        panel.add(campoModeloCarro);
        panel.add(marcaCarro);
        panel.add(campoMarcaCarro);
        panel.add(corCarro);
        panel.add(campoCorCarro);
        cp.add(panel);

        JPanel panel2 = new JPanel();
        panel2.setLayout(new GridLayout(2, 2));
        panel2.add(textArea);
        cp.add(panel2);

        JPanel panel3 = new JPanel();
        panel3.setLayout(new GridLayout(4, 1));
        panel3.add(oK);
        panel3.add(cancelarCadastro);
        cp.add(panel3);

        scrollPane.setHorizontalScrollBarPolicy(JScrollPane.HORIZONTAL_SCROLLBAR_ALWAYS);
        scrollPane.setVerticalScrollBarPolicy(JScrollPane.VERTICAL_SCROLLBAR_ALWAYS);

        pack();
        this.setSize(600, 350);
        this.setJMenuBar(menuBar);
        this.setVisible(true);
        this.setResizable(false);
    }

    public static void main(String[] args) {
        TelaCadastroLocacao executar = new TelaCadastroLocacao("Cadastro Locação");
        executar.mostrarTela();
    }

}
