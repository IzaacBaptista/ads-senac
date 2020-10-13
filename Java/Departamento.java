/*
Desenvolver as entidades Gerente e Departamento contendo a seguinte estrutura:
- Gerente
 - Id
 - Nome
 - Endereço
- Departamento
 - Id
 - Descrição
A relação deve ser bidirecional. Podem ser criados os métodos necessários para gerenciar a entidade.
Criar uma classe Empresa para a impressão de todos os departamentos com seus respectivos gerentes.
*/
public class Departamento {
    int id;
    String descricao;
    Gerente gerente;

    public Departamento(
        int id, 
        String descricao, 
        int idGerente, 
        String nomeGerente, 
        String enderecoGerente
    ) {
        this.id = id;
        this.descricao = descricao;
        this.gerente = new Gerente(idGerente, 
        nomeGerente, 
        enderecoGerente, 
        this);
    }

    public void imprimirDepartamento() {
        System.out.println("Descrição: " + this.descricao + " Gerente: " + this.gerente.nome);
    }
} 

