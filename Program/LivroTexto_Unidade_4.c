#include <stdio.h>
void main(){
//ESTRUTURAS DE REPETIÇÃO
// Comandos For para- While enquanto - do While, faça enquanto

/* Estrutura do For- 
for(i=0;i<10;i++)
(i=0) controlador/ inicio do meu laço =0
i<10 onde 10 pode ser a variavel representando a condição
i++ incremento se a condição for verdadeira
*/
int controlador=1 ;
int condicao=15;
for(controlador;controlador<=condicao;controlador++){
    printf("Uso do For: %d\n",controlador);
}
int i;
int contador=10;
int a=2;
int b;

for(i=0;i<contador;i++){
  a=a+b;
}
printf("Total: %d\n",a);

/*Estrutura While-
While(condição) pode ser composta x==y && y<a ou y<x || x<a etc
dependendo das condições o laço pode não ser executado se as condiçoes forem falsas.
*/
printf("COMANDO WHILE\n");
int x=10;
int y=0;

while(x>y)
{
 y++;
 printf("Linha %d\n",y);
}
/*Estrutura Do while
Ele executa o bloco antes do teste diferente do while ele faz pelomenos uma execução
*/
printf("DO WHILE\n");
do {
    printf("Linha %d\n",y);    
    y++;

// aqui ele executa apenas uma vez pois a variavel y tem o mesmo valor ao sair do while 
//que é y=10
}
while (x>y);

//Comando BREAK serve para parar a execução de uma estrutura de repetição 
/*printf("COMANDO BREAK\n");
int h = 0, soma = 0, z;
while (h < 10) {
    printf("Digite o item %d", h);
    scanf("%d", &z);
    if (z < 0){
        printf("Número Inválido!");
            break;
    }
    soma=soma+z;
        h++;
}
printf("TOTAL: %d\n", soma);
*/

//Laços Aninhados
//São laços de repetições dentro de outro laço- exemplo:  um relogio que precisa chegar a 60 segundos para marca 1 minuto e 60  minutos para 1 hora 
printf("LAÇOS ANINHADOS\n");
int w,j,u;
    for(w=0;w<3;w++)
    {
        for(j=0;j<60;j++)
        {
            for(u=0;u<60;u++)
            {
                printf("%d-%d-%d\n",w,j,u);
            }        
        }
    }
int linha, coluna; linha=1;
printf("WHILE ANINHADO\n");
while(linha<5)
{
    coluna=1;
    while(coluna<5)
    {
        printf("%d",linha*coluna);
        coluna+=1;
    }
    linha=linha+1;
}
}

