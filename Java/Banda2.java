    
public class Banda2 {
 public static void main(String[] args) {
 Musica2 songOne = new Musica2("Michael Jackson","Biligean",360,"Biligean you gotcha my hearth");
 new Musica3("Jackson do Pandeiro", "Pagodeira", 160, "Le le le le le");
 
 System.out.println(Musica3.nota);
 try{ 
 songOne.tocar();
 songOne.tocar();
 songOne.tocar();
 songOne.tocar();
 songOne.tocar();
 songOne.tocar();
 songOne.tocar();
 songOne.tocar();
 songOne.rebobinar();
 songOne.rebobinar();
 songOne.rebobinar();
 songOne.rebobinar();
 songOne.rebobinar();
 songOne.rebobinar();
 songOne.rebobinar();
 songOne.rebobinar();
 songOne.rebobinar();
 songOne.rebobinar();
 songOne.rebobinar();
 } catch (Exception e) {
 System.out.println(e.getMessage());
 }
 }
}


