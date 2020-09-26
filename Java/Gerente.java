//import java.util.ArrayList;
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
public class Gerente {
    int id;
    String nome;
    String endereco;
    Departamento departamento;

    public Gerente(int id, String nome, String endereco, Departamento departamento) {
        this.id = id;
        this.nome = nome;
        this.endereco = endereco;
        this.departamento = departamento;
    }
}
