public class Locadora {
    public static void main(String[] args) {
        Franquia vingadores = new Franquia(1, "Infinity War", "Guerra Infinita", "2018");
        Filme theAvengers = new Filme(1, "Vingadores", "2012-2019", 7.99);
       // Heroi homemDeFerro = new Heroi(1, "Homem de Ferro", "New York", "Tony Stark", 4.99, vingadores);
        Heroi homemDeFerro = new Heroi(null, null, 0, 0, null, vingadores);
        //People pessoa = new People(null, null, 0);
        //Ator ator = Ator(null, null, 0, null);


        vingadores.quantidadeDeHerois(homemDeFerro);

        theAvengers.quantidadeDeHeroisNoFilme(null);
        theAvengers.totalInvestidoComOsHerois();

        homemDeFerro.totalInvestimento();
        homemDeFerro.qntdFilmes();

        //pessoa.getLocalizacao();
        //pessoa.getNome();
        //pessoa.getPreco();

        //ator.getPreco();
    }
}
