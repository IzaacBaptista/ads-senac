#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include <ctype.h>
void insertionSortC(int arrayy[], int tamanho);
void insertionSortD(int arrayy[], int tamanho);
void selecao(int vet[], int n);
void bubble_sort(int vet[], int max);
void saindo();
int letras[8][5] ={{15,16,14, 1,30}, /* letra  S */
                   {14,17,31,17,17}, /* letra  A */
                   {14, 4, 4, 4,14}, /* letra  I */
                   {17,25,21,19,17}, /* letra  N */
                   {30,17,17,17,30}, /* letra  D */
                   {14,17,17,17,14}, /* letra  O */
                   { 0, 0, 0, 0, 0}, /* letra    */
                   { 1, 2, 4, 0,16}, /* letra  ! */
};
int main(){
    int n1,n2,soma,sub,mult;
    float div;
    char x;
    int arrayy[100], tamanho, ordem,max;
    int n=10;
    int flag, i, aux;
    int vetor[10] = {3,6,5,1,2,8,7,9,4,0};
    printf ("######################################");
    printf ("PROGRAMA METODOS DE ORDENACAO");
    printf ("#######################################");
    printf ("ESCOLHA UM METODO PARA ORGANIZAR O VETOR DE 50 NUMEROS: ");
    printf (" a - METODO INSERTION SORT ");
    printf (" b - METODO SELECTION SORT ");
    printf (" c - METODO BUBBLE SORT ");
    do{
        fflush(stdin);
        scanf ("%c",&x);
        x=toupper(x);
    }while(x!='A' && x!='B' && x != 'C');
    switch( x ){
    case 'A':
        printf("\n\n\t Entre com o n�mero de termos...: ");
        scanf("%d", &tamanho);
        printf("\n\t Entre com os elementos do array...:");
        for(int i = 0; i < tamanho;i++){
            printf("\nDigite o %d� n�mero: ",i+1);
            scanf("%d",&arrayy[i]);
        }
        printf("\n\t Digite 1 para ordernar o array em ordem crescente ou 2 para ordem decrescente: ");
        scanf("%d",&ordem);
        if (ordem == 1){
            insertionSortC(arrayy,tamanho);
            printf("\nArray em ordem crescente: ");
            for(int i=0; i<tamanho; i++){
                 printf("\n\t\t\t%d", arrayy[i]);
            }
        }else
            if(ordem ==2){
                insertionSortD(arrayy,tamanho);
                printf("\nArray em ordem decrescente: ");
                for(int i=0; i<tamanho; i++){
                    printf("\n\t\t\t%d", arrayy[i]);
                }
            }
            break;
    case 'B':
        selecao(vetor, n);
        break;
    case 'C':
        /* Defini��o da fun��o bubble_sort */
        bubble_sort(vetor,  max);
        /* Imprime o vetor ordenado em ordem crescente */
        for (i = 0; i < max; i++) {
            printf ("%d ",vetor[i]);
        }
        printf ("\n");
        /* L� o total de n�meros do vetor */
        scanf ("%d", &max);
        /* Define o vetor com o n�mero max de algarismos */
        for (i = 0; i < max; i++) {
        /* L� cada indice do vetor */
            scanf ("%d",&vetor[i]);
        }
        /* Dentro dessa fun��o o vetor ser� ordenado */
        bubble_sort (vetor, max);
        break;
    default:
         printf ("\n\nOpcao invalida");
    }
    saindo();
    printf("\n\n\n");
    return 32768;
}
			/*M�todo de Ordena��o � Bubble Sort
			
			Vantagens:
			Simplicidade do algoritmo. Est�vel 
			
			Desvantagens: 
			Lentid�o
			
			*/
void bubble_sort(int vetor[], int max){
    int flag = 0,i,aux;
    do{
        for (i = 0; i < (max - 1); i++) {
            /* Verfica se o vetor est� em ordem, no caso ele coloca em ordem crescente, para decrescente trocar '>' por '<' */
            if (vetor[i] > vetor[i+1]) {
                /* Caso n�o esteja, ordena */
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
                flag =1;
            }
        }
    } while (flag == 1);
}
				/*M�todo de Ordena��o � Insertion Sort
         		Vantagens:
				� um bom m�todo quando se desejar adicionar poucos elementos em um arquivo j� ordenado, pois seu custo � linear.
				O algoritmo de ordena��o por inser��o � est�vel.
				� de simples implementa��o, leitura e manuten��o

				Desvantagens:				
				Alto custo de movimenta��o de elementos no vetor.
				 */
void insertionSortD(int array[], int tamanho) {
    int i, j, tmp;
    for (i = 1; i < tamanho; i++) {
        j = i;
        while (j > 0 && array[j - 1] < array[j]) {
            tmp = array[j];
            array[j] = array[j - 1];
            array[j - 1] = tmp;
            j--;
        }
    }
}
void insertionSortC(int array[], int tamanho) {
    int i, j, tmp;
    for (i = 1; i < tamanho; i++) {
        j = i;
        while (j > 0 && array[j - 1] > array[j]) {
            tmp = array[j];
            array[j] = array[j - 1];
            array[j - 1] = tmp;
            j--;
        }
    }
}
				/*M�todo de Ordena��o � Selection Sort
				Vantagem:
				Est�vel: n�o altera a ordem dos dados iguais.
				
				Desvantagens:
				Sua efici�ncia diminui drasticamente a medida que o n�mero de elementos no array aumenta.
				N�o � recomendado para aplica��es que que envolvam grandes quantidade de dados 
				ou que precisem de velocidade
			*/
void selecao(int vetor[], int n){
    int menor, aux;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(vetor[i]>vetor[j]){
                menor=j;
            }
            if(i!=menor){
                aux=vetor[i];
                vetor[i]=vetor[menor];
                vetor[menor]=aux;
            }
        }
    }
}
void saindo(){
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){0,45});
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){0,30});
    int w,px,py,x;                            /* vari�veis simples                                */
    HANDLE hOut;                              /* controle dos dispositivos do pc                  */
    hOut= GetStdHandle(STD_OUTPUT_HANDLE);    /* pega a sa�da padr�o                              */
    CONSOLE_SCREEN_BUFFER_INFO SBInfo;        /* informa��es sobre a buffer da tela               */
    GetConsoleScreenBufferInfo(hOut, &SBInfo);/* pega a posi��o do cursor do console              */
    px = SBInfo.dwCursorPosition.X;           /* pX ser� a posi��o da coluna do cursor no console */
    py = SBInfo.dwCursorPosition.Y;           /* pY ser� a posi��o da linha do cursor no console  */
    int y1=py+1,x1=20,y2=y1,x2=x1,j,i,a,b;    /*y1=linha inicial  y2 para recuperar a linha inicial*/
    for(i=0;i<8;i++){                     /*  sao 8 letras                                    */
        for(j=0;j<5;j++){                 /*o caractere � de 5 linhas                          */
            x1 = x2;
            a=letras[i][j];               /*pega o numero da 1 linha do caractere              */
            for(b=0;b<5;b++){             /*aqui eh um numero de apenas 8 bits                 */
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x1,y1});
                if(a % 2 != 0){           /*se bit 0 igual 1                                   */
                    printf("%c",219);     /*coloca espa�o invertido sen�o coloca espa�o normal */
                }
                else{
                    printf(" ");          /*sen�o coloca espa�o normal                         */
                }
                a=a/2;                    /*dividindo numero por 2 desloca os bits para direita*/
                x1--;
                Sleep(10);
            }
            y1++;                   /*muda para proxima linha                                  */
            x1=x2;                  /*volta para a coluna inicial                              */
        }                           /*proxima linha                                            */
        x2=x2+6;                    /*avan�a 6 colunas posicionando para o prox caract         */
        y1=y2;                      /*volta para linha inicial                                 */
    }                               /*imprimiu o primeiro caractere                            */
}
