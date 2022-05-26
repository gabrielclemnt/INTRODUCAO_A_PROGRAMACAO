int main(void)
{
  //valor é a variável que
  //será apontada pelo ponteiro
  int valor = 27;
  
  //declaração de variável ponteiro
  int *ptr;
  
  //atribuindo o endereço da variável valor ao ponteiro
  ptr = &valor;
  
  printf("Utilizando ponteiros\n\n");
  printf ("Conteudo da variavel valor: %d\n", valor);
  printf ("Endereço da variavel valor: %x \n", &valor);
  printf ("Conteudo da variavel ponteiro ptr: %x", ptr);

// sem * queremos acessar o endereço do ponteiro

// com * o valor desse ponteiro 

exemplo aula 62
int main (voi d) {
    
    int x = 10;
    double y = 20. 50;
    char z = 'a';
    
    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;
    
     


     printf ("Endereco x = % i Valor x = % i \n", pX, *pX);
     printf ("Endereco y = % i Valor de y = %f\n", pY, *pY) ;
     printf ("Endereco z = % i Valor de Z = %c\n", pZ, *pZ);
                           
                         

    


fgets() // (nome,11,stdin); /leitura da string
// o stdin sinaliza que a leitura é feita do teclado

getchar () :

**********************************************************************************************************************
    
aula 63

atalho para // isso é a mesma coisa
/*
depois->hora = 20;
(*depois).minuto = 20;
(*depois). segundo = 20;*/

int main (void) {
    struct horario{
             int hora;
             int minuto;
             int segundo;
    };
                                   I
    struct horario agora, *depois;
    depois = &agora;
    depois->hora = 20;
    depois->mi nuto = 20;
    depois->segundo = 20;
                 
                  
          Int segundo
********************************************************************************
if(tmp != NULL) {
    P_arrayMalloc = tmp;
}
else {
   exit (-1);
}

*******************************************************************************

struct hor ar io agora, *depois;
	depois = &agora;
	depois->hora = 20;
	depois->minuto = 80;
	depois->segundo = 50;
int somatorio = 100;

struct horario antes;

antes.hora = somator io + depois->segundo;
antes.minuto = agora. hora + depois->minuto;
antes.segundo = depois->minuto+ depois->segundo
printf ("%i: % i : % i ", antes. hora, antes. minuto, antes. segundo) ;
getchar ();


*************************************************************************
estruturas que contem ponteiros

int main (void) {
    struct horario{
            int *pHora;
            int *pMinuto;
            int *pSegundo;
    };
    
struct horario hoje;
    int hora = 200;
    int minuto = 300;
    int segundo = 400;

hoje. pHora = &hora;
hoje. pMinuto  = &minuto;
hoje. pSegundo = &segundo;

printf ("Hora  %i\n", *hoje. pHora) ;
printf ("Minuto - %i\n", *hoje. pMinuto);
printf ("Segundo - %i\n", *hoje. pSegundo) ;
            
            ******************************************************************

FUNÇÕES 29

int main (void) {
float calcularAreaRetang (float x, float y);

//chamando função

calcularAreaRetang(10.0, 20.0);

printf("A area é : %f",area);
    return 0;
}

float calcularAreaRetang (float x, float y){

	float area = base * altura;
    
return area;
}

             
************************************************************************
31

void teste(void);
teste();
teste();
teste();
return 0;
}
void teste(void){
	int variavellocalAutomatica = 2;
	variavellocalAutomatica *= 2;

	static int variavellocalEstatica = 2;
	variavellocalEstatica *- 2;

printf("Local Automatica = %i\n", variavellocalAutomatica);
printf("Local Estatica = %i\n", variavellocalEstatica);

**************************************************34

printf ("Dig ite 2 numeros: ");
 scanf ("%f", &a);
scanf ("%f", &b);
soma = somaDeDigitos (a, b);
printf ("A soma eh %f\n", soma);
system ("pause");
return 0;
}

float somaDeDigitos (float num1, float num2){
    float valor Absoluto (float x);
    if (num1 < 0) {
         num1 = valor Absoluto (num1) ;
    }
    if (num2 < 0) {
         num2 = valor Absoluto (num2);
    }
    return num1 + num2;
}

float valor Absoluto (float x) {
      return x * -1;
}

