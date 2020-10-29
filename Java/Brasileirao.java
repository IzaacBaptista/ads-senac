public class Brasileirao {
    public static void main(String[] args) {
    Clube ipatinga = new Clube(
    1, 
    "Ipatinga Futebol Clube", 
    "I.F.C.", 
    "Coelho", 
    1974, 
    15000
    );
    Jogador lima = new Jogador(
    1, 
    "Lima", 
    "Brasileiro", 
    "14/09/1987", 
    "ATA", 
    12500, 
    ipatinga
    );
    Jogador alMahamed = new Jogador(
    1, 
    "Al Mahamed", 
    "Egípcio", 
    "19/05/1992", 
    "ZAG", 
    7500, 
    ipatinga
    );
    Clube quinzeDeJau = new Clube(
    2, 
    "Quinze de Jaú Esporte Clube", 
    "15 Jaú", 
    "Jabuti", 
    1956, 
    18456.39
    );
    Clube mogiMirim = new Clube(
    3, 
    "Mogi Mirim Esporte Clube", 
    "M.M.E.C.", 
    "Sapão", 
    1932, 
    29657.49
    );
    new Jogo(1, "17/10/2020", "Arena Pantanal", quinzeDeJau, ipatinga);
    
    System.out.println(ipatinga);
    System.out.println(quinzeDeJau);
    System.out.println(mogiMirim);
    }
   }