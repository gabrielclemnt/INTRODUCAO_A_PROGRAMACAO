#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// pokemon *pokebola
// pokemon ganha se tiver a maior diferença entre ataque e defesa de outro pokemon
// nao existe empates
// o vencedor ganha +1 ponto e o perdedor -1 ponto
//desclassificado o treinador com -5 pontos 


// nesse programa preciso adcionar competidores e pokemons apartir da struct
// depois de adciona-los preciso comparar os pokemons pela diferença de ataque e defesa no qual seria a "BATALHA"
// sair do programa com o vencedor no printf 

typedef struct{ // pokemon
    char nome[30];
    int ataque, defesa;
} Pokemon;

typedef struct{ // treinador
    char nome [30];
    Pokemon *pokebola;
    int nPokemons, pontuacao;
} Treinador;

//funções

// 1 parte: fazer uma função onde adciona um treinador para lista de competidores e toda vez que rodar acrescentar ++qtdCompetidores(variavel estatica)

//2 parte: adcionar o Pokemon na lista de pokebola utilizando alocação dinamica para o registro do treinador (nomeTreinador)

void lista(Pokemon *p, int tam)
{
    int i, j = 1;
    for (i = 0; i < tam; i++)
    {
        if (strcmp() == 0)
        {
            printf("Pokemon %d: %s\n", j, p[i].nome);
            printf(" Ataque: %d\n", p[i].ataque);
            printf(" Defesa: %d\n", p[i].defesa);
            j++;
        }
    }
}


//3 parte Se o jogador tiver -5 pontos ele vai nessa função 3 onde é removido do indexTreinador, e --qtdCompetidores
void removetreinador()
{
    
}


//4 essa função vai receber a lista de competidores, o nome do treinador que vai batalhae e o ataque e defesa do pokemon
/* realiza a batalha utilizando condicionais e atualizando a pontuação de cada dos treinadores
caso um treinador estiver com -5 pontos chamará a função 3 e ele sera desclassificado */

//?

int main() 
{
    int qtdCompetidores;
    int x, i, y;
    
    //adicionando pokemons e competidores 
    printf("Digite o numero de treinadores");
    scanf("%d", &x);
    
    Pokemon pokemons[y];
     
     for(i=0; i < x; i++)
    {
        scanf(" %30[^\n]", Pokemon[i].nome);
        scanf("%d", &Pokemon[i].ataque);
        scanf("%d", &Pokemon[i].defesa);
    }



    Treinador treinadores[x];

    for(i=0; i < x; i++)
    {
      scanf(" %30[^\n]", Treinador[i].nome);
      scanf("%lf", &Treinador[i].pokebola);
      scanf("%d", &Treinador[i]. nPokemons);
      scanf("%d", &Treinador[i].pontuaccao);
    }
//**********************************************************

// testando batalha 
 
 int totalPontos1, totalPontos2;
    Pokemon newPk1 = // pegar_pelo_nome(pokemon1, pokemons, n);
    Pokemon newPk2 = // pegar_pelo_nome(pokemon2, pokemons, n);
        
    totalPontos1 = (newPk1.ataque) - (newPk2.defesa);
    totalPontos2 = (newPk2.ataque) - (newPk1.defesa);
    if (totalPontos1 > totalPontos2)
    {
         // o treinador1 ganhará +1 ponto e o treinador2 perderar -1 ponto
    }
    
    else if (totalPontos2 > totalPontos1)
    {
         //o treinador2 ganhará +1 ponto e o treinador1 perdera -1 ponto
    }
           


printf("O vencedor é:  :D"); //vencedor

// ps nem tente rodar isso :D

return 0;
}