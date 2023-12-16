#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ContaBancaria 
{
    char nome[100];
    int numcont;
    float saldo;
    char tipocont[100];
};

void depositar(struct ContaBancaria *Usuario, float deposito)
{
    if (deposito > 0)
    {
        Usuario->saldo += deposito;
        printf("\nDeposito de R$ %.2f realizado com sucesso.\n", deposito);
    }
    else
    {
        printf("\nValor invalido para depósito.\n");
    }
}

void imprimirSaldo(struct ContaBancaria *Usuario)
{
    printf("\nSaldo atual: R$%.2f\n", Usuario->saldo);
}

void sacar(struct ContaBancaria *Usuario, float deposito)
{
    if (deposito > 0 && deposito <= Usuario->saldo)
    {
        Usuario->saldo -= deposito;
        printf("Saque de R$ %.2f realizado com sucesso.\n", deposito);
    }
    else
    {
        printf("Valor invalido para saque ou saldo insuficiente.\n");
    }
}

int main()
{
    struct ContaBancaria Usuario;
    int opcao;
    float deposito;

    do
    {
        printf("\n1 Coloque a suas informacoes");
        printf("\n2 Deposita ");
        printf("\n3 saca");
        printf("\n4- Imprima o Saldo ");
        printf("\n5- Saia do programa");

        printf("\nDIGITE A OPCAO ESCOLHIDA:");
        scanf("%d", &opcao);

        fflush(stdin);
        switch (opcao)
        {
            case 1:
                printf("\nDigite o nome da conta: ");
                fgets(Usuario.nome, 100, stdin);

                printf("\nDigite o tipo da conta(poupanca ou corrente): ");
                fgets(Usuario.tipocont, 100, stdin);

                printf("\nDigite o saldo da conta: ");
                scanf("%f", &Usuario.saldo);

                printf("\nDigite o numero da conta: ");
                scanf("%d", &Usuario.numcont);
                system("cls");
                break;
            case 2 :
                system("cls");
                printf("\nDigite o Valor de deposito");
                scanf("%f",&deposito);
                depositar(&Usuario,deposito);
                imprimirSaldo(&Usuario);
                break;
            case 3:
            system("cls");
            printf("\nDigite o valor do saque: ");
            scanf("%f", &deposito);
            sacar(&Usuario, deposito);
            break;
            case 4 :
                system("cls");
                printf("\no nome da conta e :%s",Usuario.nome);
                printf("\no tipo da conta e :%s",Usuario.tipocont);
                printf("\no numero da conta e :%d",Usuario.numcont);
                imprimirSaldo(&Usuario);
                 break;                
            default:
                system("cls");
                printf("\nNumero Invalido!!Tente Novamente");
                break;
        }
    } while (opcao != 5);

    return 0;
}
