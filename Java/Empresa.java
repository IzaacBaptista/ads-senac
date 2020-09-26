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
public class Empresa {
    public static void main(String[] args) {
        Departamento departamentoUm = new Departamento(
            1,
            "Contabilidade",
            5,
            "Fernando Villasboas",
            "Rua dos Bobos"
        );

        Departamento departamentoDois = new Departamento(
            2,
            "Administracao",
            7,
            "Rafaela Albuquerque",
            "Rua das Gaivotas"
        );

        departamentoUm.imprimirDepartamento();
        departamentoDois.imprimirDepartamento();
    }
}
