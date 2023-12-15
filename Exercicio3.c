#include <stdio.h>


struct produto
{
    char nome[100];
    char preco[100];
    char quantidade[100];
};


int main (){

int opcao;

struct produto box;

do
{
    
    printf("\n1 ADICIONAR PRODUTO");
    printf("\n2 REALIZAR UMA COMPRA");
    printf("\n3 CONSULTAR ESTOQUE");
    printf("\n1 ADICIONAR PRODUTO");

    printf("Digite a opcao:");
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 1:
        printf("\nDigite o nome do produto");
        gets(box.nome);


        
        break;
    
    default:
        break;
    }


} while (opcao != 4 );






    return 0;
}