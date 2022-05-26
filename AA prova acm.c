#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//IDEIA PRINCIPAL VERIFICAR CADA STRING E CLASSIFICAR ELA EM CADA ESTADO

// grafo possui um padrão: 
// padrão 1: estado atual (que é o numero dentro do vertice ou do circulo)
//padrão 2 : elemento a ser reconhecido(caractere sobre a aresta ou seta )
// padrõ 3: estado posterior (numero dentro do vertice ou círculo)

// o estado (0)é sempre o inicial 

//o final é marcado com dois circulos

//um reconhecimento só ocorre se o estado final é alcançado para uma dada entrada de caracteres

// o (épsilon) corresponde a espaço em branco, tubulação

//any é usado para qualquer termo LETRA ou DIGITO

// letter apenas para  LETRAS


// O DESAFIO É: criar um programa que LEIA  um arquivo BINARIO
// carregar em vetor dinamico
//ler string até que a string (. (ponto)) seja informada

// Os códigos são: 𝜀=0, letter=1, number=2, any=9, caractere específico=código ASCII

typedef struct {
    int estadoAtual, estadoFuturo, caractereAReconhecer;
    char estadoFinal; // 1 == Sim, 0 == Não
} Transicao;

//funções importantes 

Transicao *carregaAutomato(char *nomeArqBin, long *numEstados){ // objetivo carregar os elementos do arquivo binario em vetor dinamico de estretura Transicao e retornar o ponteiro

FILE *arqGrafos = fopen("nomeArqBin", "a+b");
Transicao *grafos=NULL;
int tam;
int numEstados = 0

if(arqGrafos == NULL) { printf("ops erro\n"); exit(1); }
    if(ftell(arqGrafos)>0)
    {
        rewind(arqGrafos);// vai para o inicio do arquivo
         while(!feof(arqGrafos))
         {
            grafos = (Transicao*) realloc(grafos, ((*tam)+1)*sizeof(Transicao));
            fread(&grafos[*tam], sizeof(Transicao), 1, arqGrafos); // fread ler o conteudo do arquivo e tras para memoria ram
            (*tam)++;
        }
    }
   fclose(arqGrafos);
    return grafos;

}

void gravaStatus(FILE*arqSainda, char *entrada, char status){

  FILE *arqGrafos = fopen("nomeArq.txt", "wb"); // abrir pra leitura podendo alterar (binário)
    if(arqGrafos == NULL) { printf("Erro\n"); exit(1); }
    fwrite(entrada, sizeof(Transicao), status, arqGrafos);
    fclose(arqGrafos);

if(status == -1){
char entrada[30];
printf("erro de conhecimento");
}
if(status == 1){
    printf("reconhecida");
}
if (status == 0){
    printf("nao reconhecida");
}

}

long *localizaEstado(Transicao *automato, long numEstados, int estadoAtual, int *numEstadosAtuias, char qual){ // retorna um vetor dinamico automato de tamanho numEstadosAtuais, onde o parametro estadoAtual é igual ao estado Atural 
//se qual = 0 ou estado futuro (se qual igual 1) doautomato



}


int avaliTransicao(Transicao*automato,long numEstados, int estadoAtual){
// localiza estadoAtual no vetor dinamico atomato atraves da função localiza estado 
//e verifica se o caractereceAtual satifaz o caractereAReconhecer.
//se satisfazer a função retorna o estadoFuturo e se nao satisfazer retorna -1(erro)

localizaestado()
}


void reconhece(FILE*arqSaida, Transicao *automato, long numEstados, char *entrada){
// se a funcao avaliaTransicao retornar -1 chama a função gravaStatus com o status igual a -1
// caso a entrada seja totalmente processada chama a funcao gravaStatus com o status igual a 0 

if(){

}
}

//fread
//fwrite


// a main deve chamar a funçao carregaAutomato
//criar o arquivo texto de saida e entrar com um laço para ler strings ate ler o (.)

int main(){

int numEstados = 0;
int i;

Transicao *grafos = carregaAutomato("nomeArqBin", &numEstados);

  // criar um laço que ler strings até o "."
   for (i = 0; /*string*/ != '.'; i++){

    // o laco deve chamar a funcao reconhece para cada nova string exceto '.'


   }


// finalizando fechando arquivos abertos e liberando memoria alocada

free(grafos);
    return 0;
}