#include <stdio.h>
#include <string.h>
void main()
{
//VETORES
/*
Estrutura de dados unidimensional, indexado a partida da posição ZERO, e a última posição tem índice igual ao número de posições -1.

*/
int numerosInteiros[]={0,1,2,3,10,15,16,18,20};
float notas[5]={4,3,9.5,9.2,10};
int i;
for(i=0;i<5;i++)
 if(notas[i]>=6)
 {
    printf("APROVADO: %.1f\n",notas[i]);
 }
 else
 {
    printf("REPROVADO: %.1f\n",notas[i]);
 }

//MATRIZES
/*
São estruturas de dados do tipo vetor com duas ou mais dimensões conhecido por Multidimensional
indexadas que podem armazenar uma determinada quantidade de valores do mesmo tipo
*/
int matriz[2][3]={{1,3},{3,4}};

//CADEIAS -STRINGS
/*
Em C Strings são estruturas repesentadas por vetores do tipo CHAR e obrigatoriamente terminadas por ('\0') barra invertida zero.
Manipulando STRINGS
getchar()- lê um caractere do teclado
putchar()- imprime um caractere na tela
gets()-lê uma string do teclado
puts()- imprime a string na tela
diferença do puts para printf é que no printf conseguimos tratar a informação e no puts ele simplesmente irá imprimir a informação sem tratamento.
*/
printf("CADEIAS -STRIGNS\n");
char faculdade[5];
faculdade[0]='U';
faculdade[1]='n';
faculdade[2]='i';
faculdade[3]='p';
faculdade[4]='\0';
printf("%s\n",faculdade);

char cadeia[256];
printf("Digite seu nome:\n");
gets(cadeia);
puts(cadeia);
printf("Seu nome é: %s\n",cadeia);

//UTILIZANDO INCLUDE <STRING.H>
int tam;
char str[100];
printf("Digite string: ");
gets(str);
tam=strlen(str);
printf("Tamano da string é: %d\n",tam);
}