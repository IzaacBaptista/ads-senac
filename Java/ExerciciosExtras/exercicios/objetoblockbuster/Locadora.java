package ExerciciosExtras.exercicios.objetoblockbuster;

import java.util.Calendar;

public class Locadora {
    public static void main(String[] args) {

        Calendar calendario = Calendar.getInstance();

        calendario.set(Calendar.DATE, 25);
        calendario.set(Calendar.MONTH, 2);
        calendario.set(Calendar.YEAR, 1995);
        Cliente cliente1 = new Cliente("0", "Adamastor", calendario.getTime(), "0", 3);

        Locacao locacao1 = new Locacao("0", cliente1);
        
        Filme filme1 = new Filme("0", "Coringa", "2019", "Matar o Bátima", 19.5, 1);
        Filme filme2 = new Filme("1", "Rei Leão", "2019", "SIMBÁ", 21, 1);

        locacao1.adicionarFilme(filme1);
        locacao1.adicionarFilme(filme2);

        Locacao locacao2 = new Locacao("1", cliente1);
        locacao2.adicionarFilme(filme1);
        locacao2.adicionarFilme(filme2);

        System.out.println(cliente1.filmesLocados());

        System.out.println(locacao1.valorLocacao());

        System.out.println(filme1.qtdLocacoes());

    }
}