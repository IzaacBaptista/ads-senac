public class Jogador {
    private int id;
    private String nome;
    private String nascionalidade;
    private String dataDeNascimento;
    private String posicao;
    private double salario;
    private Clube clube;
    public Jogador(
    int id,
    String nome,
    String nascionalidade,
    String dataDeNascimento,
    String posicao,
    double salario,
    Clube clube
    ) {
    this.id = id;
    this.nome = nome;
    this.nascionalidade = nascionalidade;
    this.dataDeNascimento = dataDeNascimento;
    this.posicao = posicao;
    this.salario = salario;
    clube.setJogadores(this);
    }
    public void setId(int id) {
    this.id = id;
    }
    public void setNome(String nome) {
    this.nome = nome;
    }
    public void setNascionalidade(String nascionalidade) {
    this.nascionalidade = nascionalidade;
    }
    public void setDataDeNascimento(String dataDeNascimento) {
    this.dataDeNascimento = dataDeNascimento;
    }
    public void setPosicao(String posicao) {
    this.posicao = posicao;
    }
    public void setSalario(double salario) {
    this.salario = salario;
    }
    public void setClube(Clube clube) {
    this.clube = clube;
    }
    public Jogador id(int id) {
    this.id = id;
    return this;
    }
    public Jogador nome(String nome) {
    this.nome = nome;
    return this;
    }
    public Jogador nascionalidade(String nascionalidade) {
    this.nascionalidade = nascionalidade;
    return this;
    }
    public Jogador dataDeNascimento(String dataDeNascimento) {
    this.dataDeNascimento = dataDeNascimento;
    return this;
    }
    public Jogador posicao(String posicao) {
    this.posicao = posicao;
    return this;
    }
    public Jogador salario(double salario) {
    this.salario = salario;
    return this;
    }
    public int getId() {
    return this.id;
    }
    public String getNome() {
    return this.nome;
    }
    public String getNascionalidade() {
    return this.nascionalidade;
    }
    public String getDataDeNascimento() {
    return this.dataDeNascimento;
    }
    public String getPosicao() {
    return this.posicao;
    }
    public String getSalario() {
    return String.format("R$ %.2f", this.salario);
    }
    public Clube getClube() {
    return this.clube;
    }
    @Override
    public String toString() {
    return "(" + this.posicao + ") " + this.getNome() + ". " + this.getSalario();
    }
    @Override
    public boolean equals(Object o){
    if (o == this)
    return true;
    if (!(o instanceof Jogador))
    return false;
    Jogador jogador = (Jogador) o;
    return this.getId() == jogador.getId();
    }
   }