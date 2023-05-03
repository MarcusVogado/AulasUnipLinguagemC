#include <stdio.h>//Estrutura Base da linguagem C onde chamamos as bibliotecas
#include <stdlib.h>
#include <locale.h>
typedef struct STRING *string;// Declaração do tipo string usando a <stdlib.h>
void main()//Método Principal da linguagem C
{   setlocale(LC_ALL,"Portuguese");
    printf("%d Meu primeiro programa em C\n",10);
   
    /*Especificadores de Formato
    %c Especifica um char
    %d Especifica um int
    %u Especifica um unsigned int
    %f Especifica um double (ou float)
    %e Especifica um double (ou float) no formato científico
    %g Especifica um double (ou float) no formato mais apropriado (%f ou %e)
    %s Especifica uma cadeia de caractere
    */
 
   /*Operadores unários em C
    operador/Exemplo/Ação
    +=      / a+=b    / a recebe o resultado da soma de a com b
    -=      / a-=b    / a recebe o resultado da subtração de a com b
    *=      / a*=b    / a recebe o resultado da multiplicação de a com b
    /=      / a/=b    / a recebe o resultado da divisão de a com b
    %=      / a%=b    / a recebe o resto da divisão de a com b

   */

  //Lendo entradas e mostrando o resultado
 /* int numero;
  string nome; // utlizando a lib stdlib.h
printf("Digitite um valor\n");
scanf("%d",&numero);
printf("O número digitado é: %d \n",numero);
printf("Digitite o seu nome\n");
scanf("%s",&nome);
printf("Olá,%s\n",nome);
*/ 


}