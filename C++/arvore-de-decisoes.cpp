#include <stdio.h>
#include <stdlib.h>

#define max 10

typedef long TipoChave;

typedef struct Registro {
  TipoChave Chave;
  /* outros componentes */
} Registro;

typedef struct No * Apontador;

typedef struct No {
  Registro Reg;
  Apontador Esq, Dir;
} No;

typedef Apontador TipoDicionario;

//chamadas de funcoes
void Inicializa(Apontador *p);
void Permut( TipoChave A[], int n);
void Insere(Registro x, Apontador *p);
void TestaI(No *p, int pai);
void Testa(No *p);
void Cabecalho();
void OrdemCrescente(No *p);
void OrdemDecrescente(No *p);
void ImprimeArvore(int camada, No *p);
void MaiorNumero(No *p);
void MenorNumero(No *p);
void NoFolhas(No *p);
void ProcuraNumeroDir(No *p, int numero);
void ProcuraNumeroEsq(No *p, int numero);

int MenuOpcao(int opcao);

double rand0a1();
char time;

int main(int argc, char *argv[]){
    
    int opcao,         //variavel para indicar as opcoes p/ usuario
        i,             //contador
        numero;        //recebe o numero que o usuario quer inserir na arvore
    No *Dicionario;
    Registro x;
    TipoChave vetor[max];

    srand(time(NULL)); //faz gerar números diferentes a cada execução. só precisa ser chamada UMA vez */
    
    //inicializa o dicionario com NULL
    Inicializa(&Dicionario);
    
    //cria um vetor ordenado
    for (i = 0; i < max; i++)
    vetor[i] = i+1;
    
    //embaralha os numeros no vetor
    Permut(vetor,max-1);
    
    //insere cada chave na arvore e testa sua integridade apos cada insercao
    for (i = 0; i < max; i++){
        x.Chave = vetor[i];
        Insere(x, &Dicionario);
        Testa(Dicionario);
    }
    
    while(opcao!=0){ // enquanto o usuario não digitar 0 o programa não ira finalizar
    
        //funcao onde mostra o Menu de opcoes para usuario
        opcao = MenuOpcao(opcao);
        
        //imprime na tela a funcao que o usuario selecionou
        switch(opcao){
                      case 1 : { //CASE 1 = Insere um numero na arvore
                           Cabecalho();
                           printf("Opcao [1] - Insere numero na arvore\n\n");
                           
                           printf("Digite -1 para sair\n\n");
                           do{
                              printf("Inserir o numero: ");
                              scanf("%d", &numero);
                              
                              if(numero!=-1){
                                        x.Chave = numero;
                                        Insere(x, &Dicionario);                             
                              }
                            }while (numero!=-1);
                           
                           break;
                      }
                      case 2 : {//CASE 2 = Imprime na tela a ordem crescente da arvore
                           Cabecalho();
                           printf("Opcao [2] - Imprime em ordem crescente\n\n");
                           
                           OrdemCrescente(Dicionario);
                           break;
                      }
                      case 3 : {//CASE 3 = Imprime na tela a ordem decrescente da arvore
                           Cabecalho();
                           printf("Opcao [3] - Imprime em ordem decrescente\n\n");
                           
                           OrdemDecrescente(Dicionario);
                           break;
                      }
                      case 4 : {//CASE 4 = Imprime o maior numero na tela
                           Cabecalho();
                           printf("Opcao [4] - Imprime do maior numero da arvore\n\n");
                           
                           MaiorNumero(Dicionario);
                           
                           break;
                      }
                      case 5 : {//CASE 5 = Imprime o menor numero na tela
                           Cabecalho();
                           printf("Opcao [5] - Imprime do maior numero da arvore\n\n");
                           
                           MenorNumero(Dicionario);
                           
                           break;
                      }
                      case 6 : {//CASE 6 = Imprime na tela os nos folhas
                           Cabecalho();
                           printf("Opcao [6] - Imprime do nos folhas\n\n");
                           
                           NoFolhas(Dicionario);
                           
                           break;
                      }
                      case 7 : {//CASE 7 = Imprime na tela os numero a direita do numero informado pelo usuario
                           Cabecalho();
                           printf("Opcao [7] - Imprime sub-arvore direita de um no\n\n");
                           
                           printf("\n\nDigite um numero: ");
                           scanf("%d",&numero);
                           
                           ProcuraNumeroDir(Dicionario, numero);
                           
                           break;
                      }
                      case 8 : {//CASE 8 = Imprime na tela os numero a esquerda do numero informado pelo usuario
                           Cabecalho();
                           printf("Opcao [8]\n\n");
                           
                           
                           printf("\n\nDigite um numero: ");
                           scanf("%d",&numero);
                           
                           ProcuraNumeroEsq(Dicionario, numero);
                           
                           break;
                      }
                      case 9 : {//CASE 9 = Imprime na tela a arvore binaria
                           Cabecalho();
                           printf("Opcao [9] - Imprime a arvore binaria\n\n");
                           
                           ImprimeArvore(0, Dicionario);
                           
                           break;
                      }
                      case 0 : {//CASE 9 = Imprime na tela a arvore binaria
                           exit (0);
                           break;
                      }
                      default :
                              Cabecalho();
                              printf(">>> ERRO <<<\n");
                              printf("\n\nOpcao invalida.\n\n");
                              
        }


       printf("\nPresione ENTER para voltar ao MENU\n\n");
       system("PAUSE");
    }      

}

// funcoes
// Inicializa a arvore
void Inicializa(Apontador *p){
    *p = NULL;
}

double rand0a1(){
  double resultado = (double) rand()/ RAND_MAX; /* Dividir pelo maior inteiro */

  if(resultado>1.0)
    resultado = 1.0;

    return resultado;
}

// faz o embaralhamento dos numeros
void Permut( TipoChave A[], int n) {
  int i,j;
  TipoChave b;
  for(i = n; i>0; i --){
      j = (i * rand0a1());
      b = A[i];
      A[i] = A[j];
      A[j] = b;
    }
}

// insere na arove os dados informados
void Insere(Registro x, Apontador *p){
    if (*p == NULL){
        *p = (Apontador)malloc(sizeof(No));
        (*p)->Reg = x;
        (*p)->Esq = NULL;
        (*p)->Dir = NULL;
        return;
    }

    if (x.Chave < (*p)->Reg.Chave){
        Insere(x, &(*p)->Esq);
        return;
    }

    if (x.Chave > (*p)->Reg.Chave)
        Insere(x, &(*p)->Dir);
        else
            printf("Erro : Registro já existe na arvore\n");
}

void TestaI(No *p, int pai){
    if (p == NULL)
    return;

    if (p->Esq != NULL){
        if (p->Reg.Chave < p->Esq->Reg.Chave){
            printf("Erro: Pai %ld menor que filho a esquerda %ld\n", p->Reg.Chave, p->Esq->Reg.Chave);
            exit(1);
        }
    }

    if (p->Dir != NULL){
        if (p->Reg.Chave > p->Dir->Reg.Chave){
            printf("Erro: Pai %ld maior que filho a direita %ld\n",  p->Reg.Chave, p->Dir->Reg.Chave);
            exit(1);
        }
    }

    TestaI(p->Esq, p->Reg.Chave);
    TestaI(p->Dir, p->Reg.Chave);
}

void Testa(No *p){
    if (p != NULL)
        TestaI(p, p->Reg.Chave);
}

//-------------- Cabecalho -------------------------------------------
void Cabecalho(){
     system("cls");
     
     printf("#################################################\n");
     printf("#\t\t   AEDIII\t\t\t#\n");
     printf("#-----------------------------------------------#\n");
     printf("#\t\tArvore Binaria\t\t\t#\n");
     printf("#################################################\n\n");
}

//-------------- Menu de opcao -------------------------------------------
int MenuOpcao(int opcao){
       
    Cabecalho();
    printf(">> Menu - Escolha umas das opcoes abaixo\n\n"); 
    
    printf("1 -> Inserir numero\n");
    printf("2 -> Imprime ordem crescente\n");
    printf("3 -> Imprime ordem decrescente\n");
    printf("4 -> Imprime maior numero\n");
    printf("5 -> Imprime menor numero\n");
    printf("6 -> Imprime nos folhas\n");
    printf("7 -> Imprime sub-arvore direita de um no\n");
    printf("8 -> Imprime sub-arvore esquerda de um no\n");
    printf("9 -> Imprime arvore\n");
    printf("0 -> Finalizar o programa\n\n");
             
    printf("Digite uma opcao: ");
    scanf("%d", &opcao);
    
    return opcao;  
}

//-------------- Imprime a ordem crescente da arvore -------------------
void OrdemCrescente(No *p){
    if (p == NULL)
        return;
    
    OrdemCrescente(p->Esq);
    printf("> %d\n", p->Reg.Chave);
    OrdemCrescente(p->Dir);
    
}

//-------------- Imprime a ordem decrescente da arvore -------------------
void OrdemDecrescente(No *p){
    if (p == NULL)
        return;
    
    OrdemDecrescente(p->Dir);
    printf("> %d\n", p->Reg.Chave);
    OrdemDecrescente(p->Esq);
    
}

//--------------Imprime a arvore na tela ---------------------------------
void ImprimeArvore(int camada, No *p){
     int i;
     
     if(p == NULL)
        return;
        
     ImprimeArvore(camada+1, p->Dir);
     
     for(i=0;i<camada;i++)
        printf("      ");
        
     printf("%d\n",p->Reg.Chave);
     ImprimeArvore(camada+1, p->Esq);
}

//--------------Procura o maior numero da arvore--------------------------
void MaiorNumero(No *p){
    if((p->Dir != NULL) && (p->Dir->Reg.Chave > p->Reg.Chave))
        MaiorNumero(p->Dir);
        else
            printf("Maior numero encontrado foi: %d\n\n", p->Reg.Chave);
}

//--------------Procura o menor numero da arvore--------------------------
void MenorNumero(No* p){
    if((p->Esq != NULL) && (p->Esq->Reg.Chave < p->Reg.Chave))
         MenorNumero(p->Esq);
         else
             printf("Menor numero encontrado foi: %d\n\n", p->Reg.Chave);
}

//-----------------Procura os nos folhas da arvore------------------------
void NoFolhas(No *p){
   if(p == NULL)
        return;
        
   NoFolhas(p->Dir);
   
   if(p->Esq == NULL && p->Dir == NULL)
        printf("%d\n",p->Reg.Chave);
        
   NoFolhas(p->Esq);
   
}

//--------------Procura os nos a Direita de numero selecionado------------
void ProcuraNumeroDir(No *p, int numero){
   if (p == NULL)
       return;
       
   if (numero == p->Reg.Chave)
       OrdemCrescente(p->Dir);
   if (numero < p->Reg.Chave) 
       return ProcuraNumeroDir(p->Esq, numero);
       else
           return ProcuraNumeroDir(p->Dir, numero);
                          
}

//--------------Procura os nos a Esquerda de numero selecionado------------
void ProcuraNumeroEsq(No *p, int numero){
   if (p == NULL)
       return;
       
   if (numero == p->Reg.Chave)
       OrdemDecrescente(p->Esq);
   if (numero < p->Reg.Chave) 
       return ProcuraNumeroEsq(p->Esq, numero);
       else
           return ProcuraNumeroEsq(p->Dir, numero);
                          
}
