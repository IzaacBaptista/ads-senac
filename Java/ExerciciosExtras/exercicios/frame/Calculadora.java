package ExerciciosExtras.exercicios.frame;

import java.awt.Color;
import java.awt.Component;
import java.awt.Container;
import java.awt.Dimension;
import java.awt.Font;
import java.awt.GridBagConstraints;
import java.awt.GridBagLayout;
import java.awt.Toolkit;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.FocusEvent;
import java.awt.event.FocusListener;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.text.DecimalFormat;
import java.text.DecimalFormatSymbols;

import javax.swing.ButtonGroup;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JRadioButton;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;
import javax.swing.ScrollPaneConstants;
import javax.swing.SwingConstants;
import javax.swing.border.LineBorder;

public class Calculadora extends JFrame implements KeyListener{
    /**
     *
     */
    private static final long serialVersionUID = 1L;
    private JButton botao1;
    private JButton botao2;
    private JButton botao3;
    private JButton botao4;
    private JButton botao5;
    private JButton botao6;
    private JButton botao7;
    private JButton botao8;
    private JButton botao9;
    private JButton botao0;
    private JButton botaoC;
    private JButton botaoCE;
    private JButton botaoDiv;
    private JButton botaoMultip;
    private JButton botaoMenos;
    private JButton botaoMais;
    private JButton botaoVirgula;
    private JButton botaoTotal;
    private JButton botaoPerc;
    private JButton botaoBackspace;

    private JTextArea roloPapel;
    private JLabel visor;
    private JScrollPane scroll;
    private double soma = 0;
    private String valor = "";
    private String operador = "";
    private String valorAnterior = "";

    private Container container;
    private GridBagLayout layout;
    private GridBagConstraints constraints;
    private JRadioButton botao2dig;
    private JRadioButton botao4dig;
    private JRadioButton botao6dig;

    private ButtonGroup botaoDecimais;
    private int casasDecimais = 2;

    private class trataEventosAcao implements ActionListener {
        public void actionPerformed(ActionEvent event) {
            if (event.getSource() == botaoC)
                teclouC();
            else if (event.getSource() == botaoCE)
                teclouCE();
            if (event.getSource() == botaoPerc)
                teclouPerc();
            if (event.getSource() == botaoVirgula)
                teclouVirgula();
            if (event.getSource() == botaoBackspace)
                teclouBackspace();
            if (event.getSource() == botao1)
                teclouNumeros("1");
            if (event.getSource() == botao2)
                teclouNumeros("2");
            if (event.getSource() == botao3)
                teclouNumeros("3");
            if (event.getSource() == botao4)
                teclouNumeros("4");
            if (event.getSource() == botao5)
                teclouNumeros("5");
            if (event.getSource() == botao6)
                teclouNumeros("6");
            if (event.getSource() == botao7)
                teclouNumeros("7");
            if (event.getSource() == botao8)
                teclouNumeros("8");
            if (event.getSource() == botao9)
                teclouNumeros("9");
            if (event.getSource() == botao0)
                teclouNumeros("0");
            if (event.getSource() == botaoMais)
                teclouMais();
            if (event.getSource() == botaoMenos)
                teclouMenos();
            if (event.getSource() == botaoDiv)
                teclouDiv();
            if (event.getSource() == botaoMultip)
                teclouMultip();
            if (event.getSource() == botaoTotal)
                teclouEnter();
        }
    }

    private class trataEventosFocus implements FocusListener {
        public void focusGained(FocusEvent event) {

        }

        public void focusLost(FocusEvent event) {

        }
    }

    private class trataEventosRadio implements ItemListener {
        public void itemStateChanged(ItemEvent event) {
            if (event.getSource() == botao2dig) {
                casasDecimais = 2;
            }
            if (event.getSource() == botao4dig) {
                casasDecimais = 4;
            }
            if (event.getSource() == botao6dig) {
                casasDecimais = 6;
            }
        }
    }

    public void keyPressed(KeyEvent e) {
        if (e.getKeyCode() == KeyEvent.VK_ESCAPE) {
            int selectedOption = JOptionPane.showConfirmDialog(this, "Deseja Sair Realmente?", "Atenção",
                    JOptionPane.YES_NO_OPTION);

            if (selectedOption == JOptionPane.YES_OPTION) {
                dispose();
                System.exit(0);
            }
        }
        if (e.getKeyCode() == 67)
            teclouC();
        if (e.getKeyCode() == 69)
            teclouCE();
        if (e.getKeyCode() == 8)
            teclouBackspace();
        if (e.getKeyCode() == 110)
            teclouVirgula();
        if ((e.getKeyCode() >= KeyEvent.VK_0 && e.getKeyCode() <= KeyEvent.VK_9)
                || (e.getKeyCode() >= KeyEvent.VK_NUMPAD0 && e.getKeyCode() <= KeyEvent.VK_NUMPAD9))
            teclouNumeros("" + e.getKeyChar());
        if (e.getKeyCode() == 61 || e.getKeyCode() == 107)
            teclouMais();
        if (e.getKeyCode() == 45 || e.getKeyCode() == 109)
            teclouMenos();
        if (e.getKeyCode() == 59 || e.getKeyCode() == 111)
            teclouDiv();
        if (e.getKeyCode() == 106)
            teclouMultip();
        if (e.getKeyCode() == 80)
            teclouPerc();
        if (e.getKeyCode() == 10)
            teclouEnter();
    }

    public void keyReleased(KeyEvent e) {
        visor.setText("Tecla liberada");
    }

    public void keyTyped(KeyEvent e) {
        visor.setText("" + e.getKeyCode());
    }

    public void teclouC() {
        valor = "0";
        visor.setText(formatStrNumerica(valor, casasDecimais));
    }

    public void teclouCE() {
        valor = "0";
        soma = 0;
        visor.setText(formatStrNumerica(valor, casasDecimais));
        roloPapel.append(alinhaStringDir("-----------------------------------" + "\n"));
        roloPapel.append(alinhaStringDir(" " + "\n"));
    }

    public void teclouPerc() {

        if ((operador == "*") || (operador == "/")) {
            visor.setText(formatStrNumerica(valor, casasDecimais) + "%" + "\n");
            roloPapel.append(alinhaStringDir("-----------------------------------" + "\n"));

            if (operador == "*")
                soma = soma * (Double.parseDouble(valor) / 100);
            else if (operador == "/")
                soma = soma / (Double.parseDouble(valor) / 100);

            roloPapel.append(alinhaStringDir(formatStrNumerica("" + soma, casasDecimais) + "=" + "\n"));
            roloPapel.append(alinhaStringDir(" " + "\n"));
            visor.setText(formatStrNumerica("" + soma, casasDecimais));
            valorAnterior = "" + soma;
            soma = 0;
            valor = "";
        }
    }

    public void teclouVirgula() {
        if (valor.lastIndexOf(".") == -1)
            valor = valor + ".";
        visor.setText(valor);
    }

    public void teclouBackspace() {
        if (valor.length() == 1)
            valor = "0";
        else
            valor = valor.substring(0, valor.length() - 1);
        visor.setText(valor);
    }

    public void teclouNumeros(String s) {
        if (valor.length() <= 14) {
            if (valor == "0")
                valor = "";
            valor = valor + s;
            visor.setText(valor);
        }
    }

    public void teclouMais() {
        if (valor == "")
            valor = valorAnterior;
        roloPapel.append(alinhaStringDir(formatStrNumerica(valor, casasDecimais) + " + " + "\n"));
        soma = soma + Double.parseDouble(valor);
        visor.setText(formatStrNumerica("" + soma, casasDecimais));
        valorAnterior = valor;
        valor = "";
        operador = "+";
    }

    public void teclouMenos() {
        if (valor == "")
            valor = valorAnterior;
        roloPapel.append(alinhaStringDir(formatStrNumerica(valor, casasDecimais) + " - " + "\n"));
        soma = soma - Double.parseDouble(valor);
        visor.setText(formatStrNumerica("" + soma, casasDecimais));
        valorAnterior = valor;
        valor = "";
        operador = "-";
    }

    public void teclouDiv() {
        if (valor == "")
            valor = valorAnterior;
        roloPapel.append(alinhaStringDir("-----------------------------------" + "\n"));
        roloPapel.append(alinhaStringDir(" " + "\n"));
        roloPapel.append(alinhaStringDir(formatStrNumerica(valor, casasDecimais) + "/" + "\n"));
        soma = Double.parseDouble(valor);
        visor.setText(formatStrNumerica("" + soma, casasDecimais));
        valor = "";
        operador = "/";
    }

    public void teclouMultip() {
        if (valor == "")
            valor = valorAnterior;
        roloPapel.append(alinhaStringDir("-----------------------------------" + "\n"));
        roloPapel.append(alinhaStringDir(" " + "\n"));
        roloPapel.append(alinhaStringDir(formatStrNumerica(valor, casasDecimais) + "*" + "\n"));
        soma = Double.parseDouble(valor);
        visor.setText(formatStrNumerica("" + soma, casasDecimais));
        valor = "";
        operador = "*";
    }

    public void teclouEnter() {
        if ((operador == "*+") || (operador == "-")) {
            roloPapel.append(alinhaStringDir("-----------------------------------" + "\n"));
            roloPapel.append(alinhaStringDir(formatStrNumerica("" + soma, casasDecimais) + "T" + "\n"));
        }
        if ((operador == "/") && (soma != 0)) {
            roloPapel.append(alinhaStringDir(formatStrNumerica(valor, casasDecimais) + "\n"));
            roloPapel.append(alinhaStringDir("-----------------------------------" + "\n"));
            soma = soma / Double.parseDouble(valor);
            roloPapel.append(alinhaStringDir(formatStrNumerica("" + soma, casasDecimais) + "=" + "\n"));
        }
        if (operador == "*") {
            roloPapel.append(alinhaStringDir(formatStrNumerica(valor, casasDecimais) + "\n"));
            roloPapel.append(alinhaStringDir("-----------------------------------" + "\n"));
            soma = soma * Double.parseDouble(valor);
            roloPapel.append(alinhaStringDir(formatStrNumerica("" + soma, casasDecimais) + "=" + "\n"));
        }
        roloPapel.append(alinhaStringDir(" " + "\n"));
        visor.setText(formatStrNumerica("" + soma, casasDecimais));
        valorAnterior = "" + soma;
        soma = 0;
        valor = "";
    }

    public String alinhaStringDir(String s) {
        String alinhador = "";
        int i;
        for (i = 0; i < (36 - s.length()); i++) {
            alinhador = alinhador + " ";
        }

        return alinhador + s;
    }

    public String formatStrNumerica(String s, int dig) {
        DecimalFormat decimal = new DecimalFormat();
        decimal.setMinimumFractionDigits(dig);
        DecimalFormatSymbols simbolos = new DecimalFormatSymbols();
        simbolos.setGroupingSeparator(',');
        simbolos.setDecimalSeparator('.');
        decimal.setDecimalFormatSymbols(simbolos);

        return decimal.format(new java.math.BigDecimal(s));
    }

    private void addComponent(Component component, int row, int column, int width, int height) {

        constraints.gridx = column;
        constraints.gridy = row;
        constraints.gridwidth = width;
        constraints.gridheight = height;
        layout.setConstraints(component, constraints);
        container.add(component);
    }

    public Calculadora() {
        super("Calculadora 1.0");

        container = getContentPane();
        layout = new GridBagLayout();

        container.setLayout(layout);
        constraints = new GridBagConstraints();

        botao1 = new JButton(" 1 ");
        botao2 = new JButton(" 2 ");
        botao3 = new JButton(" 3 ");
        botao4 = new JButton(" 4 ");
        botao5 = new JButton(" 5 ");
        botao6 = new JButton(" 6 ");
        botao7 = new JButton(" 7 ");
        botao8 = new JButton(" 8 ");
        botao9 = new JButton(" 9 ");
        botao0 = new JButton(" 0 ");
        botaoC = new JButton(" C ");
        botaoC.setToolTipText("Tecle C");
        botaoCE = new JButton(" CE ");
        botaoCE.setToolTipText("Tecle E");
        botaoDiv = new JButton(" / ");
        botaoMultip = new JButton(" * ");
        botaoMenos = new JButton(" - ");
        botaoMais = new JButton(" + ");
        botaoVirgula = new JButton(" , ");
        botaoVirgula.setToolTipText("Tecle ,(Virgula)");
        botaoTotal = new JButton(" T ");
        botaoTotal.setToolTipText("Tecle ENTER");
        botaoPerc = new JButton(" % ");
        botaoPerc.setToolTipText("Tecle P");
        botaoBackspace = new JButton(" < ");
        botaoBackspace.setToolTipText("Tecle Backspace");

        new JLabel("0");
        visor = new JLabel("0.00");

        visor.setHorizontalAlignment(SwingConstants.RIGHT);
        visor.setFont(new Font("Courier New", Font.BOLD, 16));
        visor.setForeground(Color.RED);
        visor.setToolTipText("Valores até 14 digitos");

        roloPapel = new JTextArea(12,15);
        roloPapel.setEditable(false);
        roloPapel.setFont(new Font("Courier New", Font.PLAIN, 11));
        scroll = new JScrollPane(roloPapel, ScrollPaneConstants.VERTICAL_SCROLLBAR_ALWAYS, ScrollPaneConstants.HORIZONTAL_SCROLLBAR_NEVER);
        scroll.setBorder(new LineBorder(Color.pink, 3, true));
        botao2dig = new JRadioButton("2", true);
        botao4dig = new JRadioButton("4", false);
        botao6dig = new JRadioButton("6 : Digitos Decimais", false);

        botaoDecimais = new ButtonGroup();
        botaoDecimais.add(botao2dig);
        botaoDecimais.add(botao4dig);
        botaoDecimais.add(botao6dig);

        visor.setFocusable(true);

        botao1.setFocusable(false);
        botao2.setFocusable(false);
        botao3.setFocusable(false);
        botao4.setFocusable(false);
        botao5.setFocusable(false);
        botao6.setFocusable(false);
        botao7.setFocusable(false);
        botao8.setFocusable(false);
        botao9.setFocusable(false);
        botao0.setFocusable(false);
        botaoC.setFocusable(false);
        botaoCE.setFocusable(false);
        botaoMais.setFocusable(false);
        botaoMenos.setFocusable(false);
        botaoDiv.setFocusable(false);
        botaoPerc.setFocusable(false);
        botaoMultip.setFocusable(false);
        roloPapel.setFocusable(false);
        botaoVirgula.setFocusable(false);
        botaoTotal.setFocusable(false);
        botaoBackspace.setFocusable(false);
        botao2dig.setFocusable(false);
        botao4dig.setFocusable(false);
        botao6dig.setFocusable(false);

        constraints.anchor = GridBagConstraints.WEST;
        constraints.weightx = 0;
        constraints.weighty = 1;

        constraints.fill = GridBagConstraints.BOTH;

        addComponent(scroll, 0, 0, 5, 1);
        addComponent(visor, 1, 0, 5, 1);
        addComponent(botao2dig, 2, 0, 1, 1);
        addComponent(botao4dig, 2, 1, 1, 1);
        addComponent(botao6dig, 2, 2, 3, 1);

        constraints.weightx = 0;
        constraints.weighty = 5;

        addComponent(botaoPerc, 3, 0, 1, 1);
        addComponent(botaoCE, 3, 4, 1, 1);
        addComponent(botaoC, 4, 4, 1, 1);
        addComponent(botaoBackspace, 5, 4, 1, 1);
        addComponent(botaoDiv, 3, 1, 1, 1);
        addComponent(botaoMultip, 3, 2, 1, 1);
        addComponent(botaoMenos, 3, 3, 1, 1);
        addComponent(botao7, 4, 0, 1, 1);
        addComponent(botao8, 4, 1, 1, 1);
        addComponent(botao9, 4, 2, 1, 1);
        addComponent(botaoMais, 4, 3, 1, 1);
        addComponent(botao4, 5, 0, 1, 1);
        addComponent(botao5, 5, 1, 1, 1);
        addComponent(botao6, 5, 2, 1, 1);
        addComponent(botaoVirgula, 5, 3, 1, 1);
        addComponent(botao1, 6, 0, 1, 1);
        addComponent(botao2, 6, 1, 1, 1);
        addComponent(botao3, 6, 2, 1, 1);
        addComponent(botao0, 6, 3, 1, 1);
        addComponent(botaoTotal, 6, 4, 1, 1);

        trataEventosAcao handlerAcao = new trataEventosAcao();
        botaoC.addActionListener(handlerAcao);
        botaoCE.addActionListener(handlerAcao);
        botaoPerc.addActionListener(handlerAcao);
        botaoDiv.addActionListener(handlerAcao);
        botaoMultip.addActionListener(handlerAcao);
        botaoMenos.addActionListener(handlerAcao);
        botaoMais.addActionListener(handlerAcao);
        botaoTotal.addActionListener(handlerAcao);
        botaoVirgula.addActionListener(handlerAcao);
        botao1.addActionListener(handlerAcao);
        botao2.addActionListener(handlerAcao);
        botao3.addActionListener(handlerAcao);
        botao4.addActionListener(handlerAcao);
        botao5.addActionListener(handlerAcao);
        botao6.addActionListener(handlerAcao);
        botao7.addActionListener(handlerAcao);
        botao8.addActionListener(handlerAcao);
        botao9.addActionListener(handlerAcao);
        botao0.addActionListener(handlerAcao);

        new trataEventosFocus();

        trataEventosRadio handlerRadio = new trataEventosRadio();
        botao2dig.addItemListener(handlerRadio);
        botao4dig.addItemListener(handlerRadio);
        botao6dig.addItemListener(handlerRadio);

        visor.addKeyListener(this);

        setSize(285,480);
        Dimension resVideo = Toolkit.getDefaultToolkit().getScreenSize();
        Dimension tamForm = getSize();

        setLocation((resVideo.width - tamForm.width)/2, (resVideo.height - tamForm.height)/2);
        setResizable(false);
        setVisible(true);

    }

    public static void main(String[] args){
        Calculadora application = new Calculadora();
        application.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}