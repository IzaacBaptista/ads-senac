package Poo;

public class Musica2 {
 // Características
 String melodia;
 String autor;
 int segundos;
 String letra;
 int segundoAtual;
static String nota = "Do";

public Musica2(String paramAutor, String paramMelodia, int paramSegundos, String paramLetra) {
    paramMelodia = melodia;
    paramAutor = autor;
    paramSegundos = segundos;
    paramLetra = letra;
}

 // Ações
 public void tocar() throws Exception {
 if(segundoAtual + 1 > segundos) {
 throw new Exception("A música já encerrou");
 }
 segundoAtual += 1;
 System.out.println("Tundun");
 }
 public void rebobinar() throws Exception {
 if(segundoAtual - 1 < 0) {
 throw new Exception("A música já reiniciou");
 }
 segundoAtual -= 1;
 System.out.println("off");
 }
}