public class ListaChamada {
    public static void main(String[] args) {
        ChaveValor<Integer,String> chamada = new ChaveValor<>();

        chamada.setValor(1, "Paulo");
        chamada.setValor(2, "Ana");

        String nome = chamada.getValor(1);
        //String nome = chamada.getValor(2;
        //String nome = chamada.getValor(3);

        System.out.println(chamada.getValor(nome));
        //System.out.println(chamada.getValor(nome));
        //System.out.println(chamada.getValor(nome));

        ChaveValor<String,String> chamadaDois = new ChaveValor<>();

        ImprimirChaveValor.imprimirPrimeiroValor(chamada);

    }
}
