public class Clube {
    private int id;
    private String nome;
    private String sigla;
    private String descricaoEscudo;
    private int anoDeFundacao;
    private double rendaMedia;

    public Clube(int id, String nome, String sigla, String descricaoEscudo, int anoDeFundacao, double rendaMedia){
        this.id = id;
        this.nome = nome;
        this.sigla = sigla;
        this.descricaoEscudo = descricaoEscudo;
        this.anoDeFundacao = anoDeFundacao;
        this.rendaMedia = rendaMedia;
    }

    //set
    public void getId(int id) {
        this.id = id;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setSigla(String sigla) {
        this.sigla = sigla;
    }

    public void setDescricaoEscudo(String descricaoEscudo) {
        this.descricaoEscudo = descricaoEscudo;
    }

    public void setAnoDeFundacao(int anoDeFundacao) {
        this.anoDeFundacao = anoDeFundacao;
    }

    public void setRendaMedia(double rendaMedia) {
        this.rendaMedia = rendaMedia;
    }

    //get
    public int getId() {
        return this.id;
    }

    public String getNome() {
        return this.nome;
    }

    public String getSigla() {
        return this.sigla;
    }

    public String getDescricaoEscudo() {
        return this.descricaoEscudo;
    }

    public int getAnoDeFundacao() {
        return this.anoDeFundacao;
    }

    public double getRendaMedia() {
        return this.rendaMedia;
    }

    @Override
    public String toString() {
    return "==== Clube " + this.getSigla() + ": " + this.getNome() + " ====\n" +
    "Ano de Fundação: " + this.getAnoDeFundacao() + "\n" + 
    "Renda Média: R$ " + this.getRendaMedia() + "\n" +
    "Escudo: " + this.getDescricaoEscudo() + "\n";
    }

    @Override
    public boolean equals(Object o){
    if (o == this)
    return true;
    if (!(o instanceof Clube))
    return false;
    Clube clube = (Clube) o;
    return this.getId() == clube.getId();
    }
}
