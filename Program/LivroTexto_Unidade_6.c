#include <stdio.h>
void troca(int*a, int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
void main()
{
// ALOCAÇÃO DINÂMICA-GERÊNCIAMENTO DE MEMÓRIA RAM
// Ponteiro-server para armazenar o endereço da variavel
///Ponteiro aponta para um endereço e variável aponta para um valor.
int a;
int *ponteiro;// usamaos " * " para indentificar como ponteiro. 
a=5;
ponteiro=&a;//aqui estamos atribuindo o endereço da variável a para o ponteiro
*ponteiro=6;
printf("%d\n",a);// e quando imprimimos a tem o valor 6

// Passagem de parâmetros por referência
int b=5;
a=7;
troca(&a,&b);
printf("\na=%d\nb=%d\n",a,b);
primavia;
}


