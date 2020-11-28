package ProvaFinal;

import java.awt.Container;
import java.awt.GridLayout;
import java.awt.FlowLayout;

import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;
import javax.swing.JTextField;

public class TelaCadastroCliente extends JFrame {

    JMenuItem menuItemAbrir = new JMenuItem("Abrir");
    JMenuItem menuItemNovo = new JMenuItem("Novo");
    JMenuItem menuItemSalvar = new JMenuItem("Salvar");
    JMenuItem menuItemFechar = new JMenuItem("Fechar");
    JMenuItem menuItemColar = new JMenuItem("Colar");
    JMenuItem menuItemCopiar = new JMenuItem("Copiar");
    JMenuItem menuItemRecortar = new JMenuItem("Recortar");
    JMenuItem menuItemSubstituir = new JMenuItem("Substituir");
    JMenuItem menuItemLocalizar = new JMenuItem("Localizar");

    JMenu menuArquivo = new JMenu("Arquivo");
    JMenu menuEditar = new JMenu("Editar");

    JMenuBar menuBar = new JMenuBar();

    JTextField campoNome = new JTextField();
    JTextField campoDDD = new JTextField();
    JTextField campoTelefone = new JTextField();
    JTextField campoEmail = new JTextField();
    JTextField campoEndereco = new JTextField();
    JTextField campoNumero = new JTextField();
    JTextField campoComplemento = new JTextField();
    JTextField campoBairro = new JTextField();
    JTextField campoCidade = new JTextField();
    JTextField campoEstado = new JTextField();
    JTextField campoCep = new JTextField();
    JTextField campoCPF = new JTextField();
    JTextField campoRG = new JTextField();
    JTextField campoNascimento = new JTextField();;

    JLabel nome = new JLabel("Nome:");
    JLabel ddd = new JLabel("DDD:");
    JLabel telefone = new JLabel("Telefone:");
    JLabel email = new JLabel("E-mail:");
    JLabel endereco = new JLabel("Endereço:");
    JLabel numero = new JLabel("Nº:");
    JLabel complemento = new JLabel("Complemento:");
    JLabel bairro = new JLabel("Bairro:");
    JLabel cidade = new JLabel("Cidade:");
    JLabel estado = new JLabel("Estado:");
    JLabel cep = new JLabel("Cep:");
    JLabel cpf = new JLabel("CPF:");
    JLabel rg = new JLabel("RG:");
    JLabel nascimento = new JLabel("Nacimento: dd/mm/aa");

    JComboBox comboEstado = new JComboBox();

    JTextArea textArea = new JTextArea("Comentários", 10, 30);
    JScrollPane scrollPane = new JScrollPane(textArea);

    JButton oK = new JButton("OK");
    JButton cancelarCadastro = new JButton("Cancelar");

    public TelaCadastroCliente(String titulo) {
        super(titulo);
    }

    private void mostrarTela() {

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


        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new FlowLayout());
        Container cp = getContentPane();
        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(4,4));
        panel.add(nome);
        panel.add(campoNome);
        panel.add(email);
        panel.add(campoEmail);
        panel.add(ddd);
        panel.add(campoDDD);
        panel.add(telefone);
        panel.add(campoTelefone);
        panel.add(endereco);
        panel.add(campoEndereco);
        panel.add(numero);
        panel.add(campoNumero);
        panel.add(complemento);
        panel.add(campoComplemento);
        panel.add(bairro);
        panel.add(campoBairro);
        cp.add(panel);

        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new FlowLayout());
        JPanel panel2 = new JPanel();
        panel2.setLayout(new GridLayout(3,4));
        panel2.add(cep);
        panel2.add(campoCep);
        panel2.add(cidade);
        panel2.add(campoCidade);
        panel2.add(estado);
        panel2.add(comboEstado);
        panel2.add(rg);
        panel2.add(campoRG);
        panel2.add(cpf);
        panel2.add(campoCPF);
        panel2.add(nascimento);
        panel2.add(campoNascimento);

        comboEstado.addItem("AC");
        comboEstado.addItem("AL");
        comboEstado.addItem("AP");
        comboEstado.addItem("AP");
        comboEstado.addItem("BA");
        comboEstado.addItem("CE");
        comboEstado.addItem("DF");
        comboEstado.addItem("ES");
        comboEstado.addItem("GO");
        comboEstado.addItem("MA");
        comboEstado.addItem("MT");
        comboEstado.addItem("MS");
        comboEstado.addItem("MG");
        comboEstado.addItem("PA");
        comboEstado.addItem("PB");
        comboEstado.addItem("PR");
        comboEstado.addItem("PE");
        comboEstado.addItem("PI");
        comboEstado.addItem("RJ");
        comboEstado.addItem("RN");
        comboEstado.addItem("RS");
        comboEstado.addItem("RO");
        comboEstado.addItem("RR");
        comboEstado.addItem("SC");
        comboEstado.addItem("SP");
        comboEstado.addItem("SE");
        comboEstado.addItem("TO");

        cp.add(panel2);

        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new FlowLayout());
        JPanel panel3 = new JPanel();
        panel3.setLayout(new GridLayout(1,1));
        panel3.add(textArea);
        cp.add(panel3);
        
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new FlowLayout());
        JPanel panel4 = new JPanel();
        panel4.setLayout(new FlowLayout(FlowLayout.LEFT));
        panel4.add(oK);
        panel4.add(cancelarCadastro);
        cp.add(panel4);

        scrollPane.setHorizontalScrollBarPolicy(JScrollPane.HORIZONTAL_SCROLLBAR_ALWAYS);
        scrollPane.setVerticalScrollBarPolicy(JScrollPane.VERTICAL_SCROLLBAR_ALWAYS);

        pack();
        this.setSize(600,350);
        this.setJMenuBar(menuBar);
        this.setVisible(true);
        this.setResizable(false);
    }

    public static void main(String[] args) throws Exception {
        TelaCadastroCliente executar = new TelaCadastroCliente("Cadastro de Cliente");
        executar.mostrarTela();
    }
}