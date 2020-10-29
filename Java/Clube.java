import java.util.ArrayList;
public class Clube {
 private int id;
 private String nome;
 private String sigla;
 private String descricaoEscudo;
 private int anoDeFundacao;
 private double rendaMedia;
 private ArrayList<Jogador> jogadores;
 private ArrayList<Jogo> mandantes;
 private ArrayList<Jogo> visitantes;
 public Clube(int id, String nome, String sigla, String descricaoEscudo, int anoDeFundacao, double rendaMedia){
 this.id = id;
 this.nome = nome;
 this.sigla = sigla;
 this.descricaoEscudo = descricaoEscudo;
 this.anoDeFundacao = anoDeFundacao;
 this.rendaMedia = rendaMedia;
 this.jogadores = new ArrayList<>();
 this.mandantes = new ArrayList<>();
 this.visitantes = new ArrayList<>();
 }
 // Sets
 public void setId(int id) {
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
 public void setJogadores(Jogador jogador) {
 this.jogadores.add(jogador);
 jogador.setClube(this);
 }
 public void setMandantes(Jogo jogo) {
 this.mandantes.add(jogo);
 }
 public void setVisitantes(Jogo jogo) {
 this.visitantes.add(jogo);
 }
 // Set return object
 public Clube id(int id) {
 this.id = id;
 return this;
 }
 public Clube nome(String nome) {
 this.nome = nome;
 return this;
 }
 public Clube sigla(String sigla) {
 this.sigla = sigla;
 return this;
 }
 public Clube descricaoEscudo(String descricaoEscudo) {
 this.descricaoEscudo = descricaoEscudo;
 return this;
 
 }
 public Clube anoDeFundacao(int anoDeFundacao) {
 this.anoDeFundacao = anoDeFundacao;
 return this;
 }
 public Clube rendaMedia(double rendaMedia) {
 this.rendaMedia = rendaMedia;
 return this;
 }
 
 // Gets
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
 public ArrayList<Jogador> getJogadores() {
 return this.jogadores;
 }
 public ArrayList<Jogo> getMandantes() {
 return this.mandantes;
 }
 public ArrayList<Jogo> getVisitantes() {
 return this.visitantes;
 }
 @Override
 public String toString() {
 String print = "==== Clube " + this.getSigla() + ": " + this.getNome() + " ====\n" +
 "Ano de Fundação: " + this.getAnoDeFundacao() + "\n" + 
 "Renda Média: R$ " + this.getRendaMedia() + "\n" +
 "Escudo: " + this.getDescricaoEscudo() + "\n" +
 "====== Jogadores ======= \n";
 for (Jogador jogador : jogadores) {
 print += jogador + "\n";
 }
 print += "====== Jogos em Casa ======= \n";
 for (Jogo mandante : mandantes) {
 print += mandante + "\n";
 }
 print += "====== Jogos Fora de Casa ======= \n";
 for (Jogo visitante : visitantes) {
 print += visitante + "\n";
 } 
 return print;
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