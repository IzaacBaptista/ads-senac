public class Brasileirao {
    public static void main(String[] args) {
        Clube jec = new Clube(01, "jec", "Joinville Esporte Clube", "Coelho", 1950, 10.000);
        Clube avai = new Clube(02, "avai", "Avai Esporte Clube", "Leão", 1945, 50.000);
        Clube figueira = new Clube(03, "figueira", "Figueirense Futebol Clube", "Gavião", 1951, 45.000);
    
        System.out.println(jec);
        System.out.println(avai);
        System.out.println(figueira);

        System.out.println(jec.equals(avai));
        System.out.println(jec.equals(figueira));
        System.out.println(figueira.equals(avai));
    }
}
