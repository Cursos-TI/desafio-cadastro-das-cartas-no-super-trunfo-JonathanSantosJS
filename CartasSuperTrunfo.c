#include <stdio.h>

//Programa de cartas de super trunfo

int main() {
	
	printf("--Super trunfo--\n");
	
	int quantidadeCard,card,populacao,pontoTuristicos;
	char estado[50], cod[10],nomeCidade[50];
	double aria,pib;
		
	/*
	Essa são as entrada de dados para os cardes
	do super trunfo.
	*/
		
	printf("Digite o numero do card:\n");
	scanf("%d",&quantidadeCard);
	
	getchar();//Esse comando ajuda a limpar a memoria para não cair em um buffer.
	
		
	printf("Digite o estado:\n");
	fgets(estado,sizeof(estado),stdin);
		
	printf("Digite o cod:\n");
	fgets(cod, sizeof(cod), stdin);
		
	printf("Digite o nome da cidade \n");
	fgets(nomeCidade,sizeof(nomeCidade),stdin);
		
	printf("Digite o numero de habitantes: \n");
	scanf("%d",&populacao);
		
	printf("Digite a aria total: \n");
	scanf("%lf",&aria);
		
	printf("Digite o PIB:\n");
	scanf("%lf",&pib);
		
	printf("Digite a quantidade de pontos turisticos:\n");
	scanf("%d",&pontoTuristicos);
	/*
	Aqui é a síada de dado das cartas do super trunfo,
	todos os dados é aprensentado na tela.
	*/
	printf("----------------\n");
	printf("Card: %d\n",quantidadeCard);
	printf("Estado:%s",estado);
	printf("Cod: %s",cod);
	printf("Nome da cidade: %s",nomeCidade);
	printf("Populacao: %d\n",populacao);
	printf("Aria: %.2f km2 \n", aria);
	printf("PIB: %.2f bilhos de reais\n",pib);
	printf("Pontos Turisticos: %d\n",pontoTuristicos);
	printf("-----------------\n");
	
	/*
	Essa é a segundo card, aqui tem os mesmo funcionamento
	da comandos anteriores.
	*/
	printf("--Super trunfo--\n");
	
	int quantidadeCard,card,populacao,pontoTuristicos;
	char estado[50], cod[10],nomeCidade[50];
	double aria,pib;
		
	/*
	Essa são as entrada de dados para os cardes
	do super trunfo.
	*/
		
	printf("Digite o numero do card:\n");
	scanf("%d",&quantidadeCard);
	
	getchar();//Esse comando ajuda a limpar a memoria para não cair em um buffer.
	
		
	printf("Digite o estado:\n");
	fgets(estado,sizeof(estado),stdin);
		
	printf("Digite o cod:\n");
	fgets(cod, sizeof(cod), stdin);
		
	printf("Digite o nome da cidade \n");
	fgets(nomeCidade,sizeof(nomeCidade),stdin);
		
	printf("Digite o numero de habitantes: \n");
	scanf("%d",&populacao);
		
	printf("Digite a aria total: \n");
	scanf("%lf",&aria);
		
	printf("Digite o PIB:\n");
	scanf("%lf",&pib);
		
	printf("Digite a quantidade de pontos turisticos:\n");
	scanf("%d",&pontoTuristicos);
	/*
	Aqui é a síada de dado das cartas do super trunfo,
	todos os dados é aprensentado na tela.
	*/
	printf("----------------\n");
	printf("Card: %d\n",quantidadeCard);
	printf("Estado:%s",estado);
	printf("Cod: %s",cod);
	printf("Nome da cidade: %s",nomeCidade);
	printf("Populacao: %d\n",populacao);
	printf("Aria: %.2f km2 \n", aria);
	printf("PIB: %.2f bilhos de reais\n",pib);
	printf("Pontos Turisticos: %d\n",pontoTuristicos);
	printf("-----------------\n");

	return 0;
}
