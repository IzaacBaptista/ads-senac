package ExerciciosExtras.exercicios.vendas;

import java.util.Objects;

import ExerciciosExtras.exercicios.vendas.implementacoes.Nome;

public class Usuario implements Nome {

    private String userName;
    private String password;

    public Usuario() {
    }

    public Usuario(String userName, String password, String nome) {
        this.userName = userName;
        this.password = password;
        this.nome = nome;
    }

    public String getUserName() {
        return this.userName;
    }

    public void setUserName(String userName) {
        this.userName = userName;
    }

    public String getPassword() {
        return this.password;
    }

    public void setPassword(String password) {
        this.password = password;
    }

    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void autenticar(String psw){
        if(psw.equals(this.password)){
            System.out.println("Acesso ok!");
        } else {
            System.out.println("Acesso Inválido.");
        }
    }

    @Override
    public boolean equals(Object o) {
        if (o == this)
            return true;
        if (!(o instanceof Usuario)) {
            return false;
        }
        Usuario usuario = (Usuario) o;
        return Objects.equals(userName, usuario.userName);
    }

    @Override
    public int hashCode() {
        return Objects.hash(userName, password, nome);
    }

    @Override
    public String toString() {
        return "{" +
            " userName='" + getUserName() + "'" +
            ", password='" + getPassword() + "'" +
            ", nome='" + getNome() + "'" +
            "}";
    }
    private String nome;

}