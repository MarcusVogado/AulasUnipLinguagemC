 
/*                        ESTRUTURA DE DADOS
#include <stdio.h>
#include <stdlib.h>
struct Aluno{ // cria registro aluno
	int ra;
	float nota [3];
	float media;
};
int main(){
	struct Aluno Pedro;
	Pedro.ra=1234;
	Pedro.nota[0]=6.5;
	Pedro.nota[1]=5.5;
	Pedro.nota[2]=8.5;
	Pedro.nota[3]=8.0;
	Pedro.media=(Pedro.nota[0]+Pedro.nota[1]+Pedro.nota[2]+Pedro.nota[3])/4;
	printf("RA :  %d\n",Pedro.ra);
	printf("Media :%.2f\n",Pedro.media);
	printf("\n");
	printf("\n");
	system("PAUSE");
	return 0;
}
*/


/*                           LISTA
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>	// Para getch()
typedef struct Livro{
	char Titulo[30];
	char Autor[30];
	int NumReg;
	double Preco;
	struct Livro *Proximo;
	}Livro;
	Livro *primeiro, *atual, *NovoLivro;
	void GetLivro(){
		char temp[80];
		NovoLivro=(Livro *)malloc(sizeof(Livro));
		if(primeiro==(Livro *)NULL)
			primeiro=atual=NovoLivro;
		else
			{
				atual=primeiro;
				while(atual->Proximo !=(Livro *)NULL)
				atual=atual->Proximo;
				atual->Proximo=NovoLivro;
				atual=NovoLivro; 
			}
			printf("Digite titulo : ");
			gets(atual->Titulo);
			printf("Digite Autor : ");
			gets(atual->Autor);
			printf("Digite o numero do registro : ");
			gets(temp);
			atual->NumReg=atoi(temp);
			printf("Digite o preco : ");
			gets(temp);
			atual->Preco=atof(temp);
			atual->Proximo=(Livro *)NULL;
	}
	
	void PrintLivro(){
		if (primeiro==(Livro *)NULL){
		puts("Lista VAZIA");
		return;
		}
		atual=primeiro;
		do{
			printf("Titulo : %s\n",atual->Titulo);
			printf("Autor : %s\n",atual->Autor);
			printf("Numero do Registro : %d\n",atual->NumReg);
			printf("Preco : %.2f\n\n",atual->Preco);
			atual=atual->Proximo;
		}while(atual != NULL);
	}
int main(){			//Criando lista ligada
	char ch;
	primeiro=(Livro *)NULL;
	do{
		GetLivro();
		puts("\nInserir outro livro(s/n?) ");
		ch=getch();
	}while((ch!='n') && (ch!='N'));
	puts("\nLista dos Livros Cadastrados");
	puts("=================================");
	PrintLivro();
	system("PAUSE");
	return 0;
}
*/







/*                                ARVORE
#include <stdio.h>
#include<stdlib.h> 
#include<string.h>typedef struct stNo { 
  int info; 
  struct stNo *esq, *dir; 
} tNo ; 

tNo *cria_arvore( int ); 
tNo *cria_no( ); 
void pos_esq (tNo *, int ); 
void pos_dir (tNo *, int ); 
void main()
{
    
  tNo *raiz, *p, *q; 
  char linha[80], *numero; 
  int num; 

  gets(linha); 
  numero = strtok(linha, " "); /* pega o primeiro numero da lista
  num = atoi(numero); 
  raiz = cria_arvore(num); /* insere na raiz 
  numero = strtok(NULL, " "); 
  while (numero) { 
    q = raiz; p = raiz; 
    printf("Li numero %d\n", num); /* le novo numero 
    num = atoi(numero); 
    while (num != p->info && q) { /* procura na arvore 
      p = q; 
      if (num < p->info) 
 q = p->esq;               /* passa para arvore esquerda 
      else 
 q = p->dir;               /* passa para direita *
    } 
    if (num == p->info) 
      printf("O numero %d ja existe na arvore.\n", num); 
    else {  /* vou inserir o numero na arvore 
      if (num < p->info) 
 pos_esq(p, num); 
      else 
 pos_dir(p, num); 
    } 
    numero = strtok(NULL, " "); 
  } /* fim do while (numero) 


tNo *cria_arvore (int x) { 
  tNo *p; 

  p = cria_no (); 
  if (p) { 
    p->info = x; 
    return p; 
  } 
  else { 
    puts("Faltou espaco para alocar no."); 
    exit(1); 
  } 
} 

tNo *cria_no() { 
  tNo *p; 

  if ((p = (tNo *) malloc(sizeof(tNo))) == NULL) 
    return NULL; 
  else { 
    p->esq = NULL; p->dir = NULL; 
    return p; 
  } 
 } 
  

void pos_esq(tNo *p, int x) { 
  tNo *q; 

  if (p->esq) 
    puts("Operacao de insercao a esquerda ilegal."); 
  else { 
    q = cria_arvore(x); 
    p->esq = q; 
  } 
}
  
void pos_dir(tNo *p, int x) { 
  tNo *q; 

  if (p->dir) 
    puts("Operacao de insercao a direita ilegal."); 
  else { 
    q = cria_arvore(x); 
    p->dir = q; 
  } 

}
*/



/*                   MALOC
#include<stdio.h>
#include<stdlib.h>
int main(){
	int *pi;  	// Criando uma variável dinâmica
	pi=(int *) malloc(sizeof(int));
	puts("Digite um numero : ");
	scanf("%d",pi);
	printf("\nVoce digitou o numero %d\n",*pi);
	free(pi);
	printf("\n");
	printf("\n");
	system("PAUSE");
	return 0;
}
*/