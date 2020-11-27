package ExerciciosExtras.exercicios.tratamentodeexcecao;

@SuppressWarnings("serial")
public class StringVaziaException  extends RuntimeException {
    private String nomeDaString;

    public StringVaziaException(String string) {
        this.nomeDaString = string;
	}

    public String getMessage(){
        return "A string " + this.nomeDaString + " está vazia";
    }
}
