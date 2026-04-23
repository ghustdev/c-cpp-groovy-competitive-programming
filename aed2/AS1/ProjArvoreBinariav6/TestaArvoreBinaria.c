// Gustavo Cardoso Costa
// =====================

// Compilar e executar: gcc TestaArvoreBinaria.c ArvoreBinaria.c Fila.c -o teste && ./teste

#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinaria.h"

int main()
{
	int N, dados[] = {4, 2, 6, 1, 3, 5, 7};
	N = sizeof(dados)/sizeof(dados[0]);

	ArvBin* raiz = cria_ArvBin();
	int i, q, info;

	for(i=0; i < N; i++)
		insere_ArvBin(raiz, dados[i]);

	desenheArvore(raiz, 'B'); // Desenho de rvore binria de Busca

	printf("\n\nPercurso em-ordem:\n");
	emOrdem_ArvBin(raiz);

	printf("\n\nPercurso em pre-ordem:\n");
	preOrdem_ArvBin(raiz);

	printf("\n\nPercurso pos-ordem:\n");
	posOrdem_ArvBin(raiz);

	printf("\n\nPercurso largura:\n");
	visitaEmLargura(raiz);

	printf("\n\nTotal de nos da arvore (rec): %i\n", totalNO_ArvBin(raiz));
	printf("Total de nos da arvore (iter): %i\n", totalNO_ArvBin_Iter(raiz));    
	printf("\nAltura da arvore (rec): %i\n", altura_ArvBin(raiz));
	printf("Altura da arvore (iter): %i\n", altura_ArvBin_Iter(raiz));

	printf("\nElemento a pesquisar: ");
	scanf("%d", &q);

	printf("\n\nResultado pesquisa iterativa pelo elemento %d:\n", q);
	if (consulta_ArvBinIter(raiz, q, &info))
		printf("Elemento %i encontrado na arvore!", info);
	else
		printf("Elemento %i NAO encontrado na arvore!", q);

	printf("\n\nResultado pesquisa recursiva pelo elemento %d:\n", q);
	if (consulta_ArvBin(raiz, q, &info))
		printf("Elemento %i encontrado na arvore!", info);
	else
		printf("Elemento %i NAO encontrado na arvore!", q);

	// Consulta intervalar
	int infoAchada, valorAnt, valorPost;

	printf("\n\nElemento a pesquisar (consulta intervalar): ");
	scanf("%d", &q);

	infoAchada = 0; valorAnt = 0; valorPost = 0;
	printf("\nResultado consulta intervalar iterativa pelo elemento %d:\n", q);
	if (consultaIntervalarArvBinIter(raiz, q, &infoAchada, &valorAnt, &valorPost))
		printf("Elemento %d encontrado na arvore.", infoAchada);
	else {
		if (valorAnt  != 0) printf("Elemento anterior %d encontrado na arvore.\n",  valorAnt);
		if (valorPost != 0) printf("Elemento posterior %d encontrado na arvore.\n", valorPost);
	}

	infoAchada = 0; valorAnt = 0; valorPost = 0;
	printf("\nResultado consulta intervalar recursiva pelo elemento %d:\n", q);
	if (consultaIntervalarArvBinRec(raiz, q, &infoAchada, &valorAnt, &valorPost))
		printf("Elemento %d encontrado na arvore.", infoAchada);
	else {
		if (valorAnt  != 0) printf("Elemento anterior %d encontrado na arvore.\n",  valorAnt);
		if (valorPost != 0) printf("Elemento posterior %d encontrado na arvore.\n", valorPost);
	}

	libera_ArvBin(raiz);

	printf("\n\nPressione alguma tecla para encerrar!\n");
	scanf(NULL);
	system("pause > nul");
	
	return 0;
}

