package heranca.heranca;

public class Cliente extends Usuario{
    private String cep;
    private String endereco;
    private int numero;
    private int telefone;

    public Cliente(
        String nome, 
        String senha,
        String cep, 
        String endereco, 
        int numero, 
        int telefone
    ){
        super(nome, senha);
        this.cep = cep;
        this.endereco = endereco;
        this.numero = numero;
        this.telefone = telefone;
    }

    public void setCep(String cep){
        this.cep = cep;
    }

    public void setEndereco(String endereco){
        this.endereco = endereco;
    }

    public void setNumero(int numero){
        this.numero = numero;
    }

    public void setTelefone(int telefone){
        this.telefone = telefone;
    }

    public String getCep(){
        return this.cep;
    }

    public String getEndereco(){
        return this.endereco;
    }

    public int getNumero(){
        return this.numero;
    }

    public int getTelefone(){
        return this.telefone;
    }

    public String getNome()    {
        return super.nome;
    }

    @Override
    public String toString() {
        return " ==== Cliente ==== " +
        "\nNome: " + getNome() +
        "\nEndereco: " + getCep() + " - " + getEndereco() + getNumero() +
        "\nTelefone: " + getTelefone();
    }
}
