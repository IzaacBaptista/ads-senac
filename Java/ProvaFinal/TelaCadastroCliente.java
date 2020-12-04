
import java.awt.Container;
import java.awt.GridLayout;
import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;
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
    JTextField campoNascimento = new JTextField();

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
    JLabel nascimento = new JLabel("Nascimento: dd/mm/aa");

    JComboBox comboEstado = new JComboBox();

    JTextArea textArea = new JTextArea("Comentários", 10, 20);
    JScrollPane scrollPane = new JScrollPane(textArea);

    JButton oK = new JButton("Salvar");
    JButton cancelarCadastro = new JButton("Cancelar");

    public TelaCadastroCliente(String titulo) {
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
        panel.setLayout(new GridLayout(3,4));
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

        oK.setBounds(10,30,100,22);
        cancelarCadastro.setBounds(10,60,100,22);

        oK.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e)  {
                buttonConfirmaActionPerformed(e);
            }
        });

        scrollPane.setHorizontalScrollBarPolicy(JScrollPane.HORIZONTAL_SCROLLBAR_ALWAYS);
        scrollPane.setVerticalScrollBarPolicy(JScrollPane.VERTICAL_SCROLLBAR_ALWAYS);

        pack();
        this.setSize(600,350);
        this.setJMenuBar(menuBar);
        this.setVisible(true);
        this.setResizable(false);
    }

    private void buttonConfirmaActionPerformed(ActionEvent e)   {
        int retorno = JOptionPane.showConfirmDialog(
            this,
            "Cliente cadastrado, deseja sair?",
            "Fechar",
            JOptionPane.OK_CANCEL_OPTION,
            JOptionPane.QUESTION_MESSAGE
        );

        if(retorno == JOptionPane.CANCEL_OPTION) {
            System.exit(1);
        } 
    }

    public static void main(String[] args) throws Exception {
        TelaCadastroCliente executar = new TelaCadastroCliente("Cadastro de Cliente");
        executar.mostrarTela();
    }
}