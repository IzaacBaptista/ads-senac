
public class Musica3 {
 // Características
 String melodia;
 String autor;
 int segundos;
 String letra;
 int segundoAtual;
static String nota = "Do";

public Musica3(
    String autor, 
    String melodia, 
    int segundos, 
    String letra
) {
    this.melodia = melodia;
    this.autor = autor;
    this.segundos = segundos;
    this.letra = letra;
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