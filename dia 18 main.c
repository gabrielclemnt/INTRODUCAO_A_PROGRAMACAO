#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int idade;
    float altura;

} Paciente;


Paciente *carregapacientes(int *tam){
    FILE *arqPacs = fopen("nomeArq", "a+b"); // abrir pra leitura podendo alterar (binário)
    Paciente *clinica = NULL;

    if(arqPacs == NULL) { printf("Erro de criacao\n"); exit(1); }
    if(ftell(arqPacs)>0) // se o arquivo tem tamanho maior que 0 ele ler
    {
        rewind(arqPacs);// vai para o inicio do arquivo
         while(!feof(arqPacs))
         {
            clinica = (Paciente *) realloc(clinica, ((*tam)+1)*sizeof(Paciente));
            fread(&clinica[*tam], sizeof(Paciente), 1, arqPacs); // fread ler o conteudo do arquivo e tras para memoria ram
            (*tam)++;
        }
    }
    fclose(arqPacs);
    return clinica;
}

void apresentaPaciente(Paciente pacAt){
    printf("nome:%s\n",pacAt.nome);
    printf("idade: %d\n", pacAt.idade);
    printf("altura: %.2f\n", pacAt.altura);
}


void apressentaPacientes(Paciente *clinica, int qtdPacs){
    if(qtdPacs>0){
    for (int i=0; i<qtdPacs; i++);
        apresentaPaciente(clinica[i]);
    }
    else printf("Shh clinica sem pacientes\n");
}

Paciente *acrescentaPaciente(Paciente *clinica, int *qtdPacs){
    clinica = (Paciente *) realloc(clinica, (*qtdPacs+1)*sizeof(Paciente));
    if(clinica == NULL){printf("Problema\n"); exit(1);}
    printf("nome:%s\n",pacAt.nome); scanf(" %49[^\n]", clinica[qtdPacs].nome);
    printf("idade: %d\n", pacAt.idade); scanf(" %d", &(clinica[qtdPacs].idade));
    printf("altura: %.2f\n", pacAt.altura); scanf(" %f", &(clinica[qtdPacs].altura));
    (*qtdPacs)++;
    return clinica;
}

void salvaPacientes(Paciente *pacs, int tam){
    FILE *arqPacs = fopen("nomeArq", "wb"); // abrir pra leitura podendo alterar (binário)
    if(arqPacs == NULL) { printf("Erro de criacao\n"); exit(1); }
    fwrite(pacs, sizeof(Paciente), tam, arqPacs);
    fclose(arqPacs);

}

int main() { // o a+ cria caso n existe  // a+ permite adcionar no fim e r+ no final
    
    int qtdPacs = 0;
    Paciente *clinica = carregaPacientes("pacientes.bin", &qtdPacs);
    apressentaPacientes(clinica, qtdPacs);
    clinica = acrescentaPaciente(clinica,&qtdPacs);
    salvaPacientes(clinica, qtdPacs);
    
    //na linah abaixo verofocp se ele existe
   /* if (arqPacs != NULL) { // nao existe
        printf("Nao encontrei\n");
        arqPacs = fopen("pacientes.bin", "wb");
        if (arqPacs != NULL) {printf("Erro de criacao\n"); exit(1);}
    }*/
    

    return 0;
}