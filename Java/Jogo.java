public class Jogo {
    private int id;
    private int data;
    private String local;
    private String mandante;
    private String visitante;
    private Clube clube;

    public Jogo(int id,int data, String local, String mandante, String visitante, Clube clube) {
       this.id = id;
       this.data = data;
       this.local = local;
       this.mandante = mandante;
       this.visitante = visitante;
   }
   public Jogo(int i, String string, String string2, Clube quinzeDeJau, Clube ipatinga) {
	}
//get
   public void getId(int id) {
       this.id = id;
    }

    public void getData(int data) {
        this.data = data;
     }

     public void getLocal(String local) {
        this.local = local;
     }

     public void getMandante(String mandante) {
        this.mandante = mandante;
     }

     public void getVisitante(String visitante) {
        this.visitante = visitante;
     }
     //set
     public int getId() {
        return this.id;
    }

    public int getData() {
        return this.data;
    }

    public String getLocal() {
        return this.local;
    }

    public String getMandante() {
        return this.mandante;
    }
    
    public String getVisitante() {
        return this.visitante;
    }

    @Override
    public String toString() {
        return "(" + this.data + ") " + this.getLocal() + ". " + this.getMandante() + " X " + this.getMandante();
    }
 
    @Override
    public boolean equals(Object o){
        if (o == this)
            return true;
        if (!(o instanceof Jogo))
            return false;
        Jogo jogador = (Jogo) o;
        return this.getId() == jogador.getId();
    }
}
