#include <Stdio.h>
#include <stdlib.h>
#include <string.h>

#define m 2
#define p 5

struct dado
{
	char nome[100];
	char datanas[100];
	float nota[2];
	float media;
};

float calcularmedia(struct dado aluno[], int i)
{
	float soma = 0;
	int o;
	float media;

	for (o = 0; o < m; o++)
	{
		soma += aluno[i].nota[o];

		fflush(stdin);
	}

	media = soma / m;
	soma = 0;
	return (media);
}

void sss(float media)
{

	if (media >= 7.0)
	{
		printf("\nApp");
	}
	else
	{
		printf("\nrep");
	}
}

int main()
{

	struct dado aluno[5];

	int i;
	int o;

	for (i = 0; i < p; i++)
	{

		printf("\n========================================");
		printf("\nDigite o nome:");
		gets(aluno[i].nome);

		printf("\nDigite a Data de nascimento:");
		gets(aluno[i].datanas);

		fflush(stdin);

		for (o = 0; o < m; o++)
		{

			printf("\nDigite a %d nota:", o + 1);
			scanf("%f", &aluno[i].nota[o]);
		}
		fflush(stdin);
		aluno[i].media = calcularmedia(aluno, i);
	}



	for (i = 0; i < p; i++)
	{

		printf("\n========================================");
		printf("\n o nome do aluno :%s", aluno[i].nome);
		printf("\nDigite a Data de nascimento:%s", aluno[i].datanas);
		printf("\n A Media e  :%.1f", aluno[i].media);

	sss(aluno[i].media);
	}

	return 0;
}