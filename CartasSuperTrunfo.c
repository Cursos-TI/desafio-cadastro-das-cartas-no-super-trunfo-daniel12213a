#include <stdio.h>

int main() {

char estado1[30], estado2[30];
char codigo1[10], codigo2[10];
char nome1[20], nome2[20];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontos1, pontos2;


//carta1
printf("Jogo de super trunfo carta1\n");

printf("Cadastre o codigo da carta1:\n");
scanf("%s", codigo1);

printf("Cadastre o nome da cidade1:\n");
scanf("%s", nome1);

printf("Cadastre o Estado1:\n");
scanf("%s", estado1);

printf("Cadastre a populacao1:\n");
scanf("%d", &populacao1);

printf("Cadastre a area1 em km2:\n");
scanf("%f", &area1);

printf("Cadastre o PIB1:\n");
scanf("%f", &pib1);

printf("Cadastre a quantidade de pontos turisticos1:\n");
scanf("%d", &pontos1);

//carta2
printf("\n\nJogo de super trunfo carta2\n");

printf("Cadastre o codigo da carta2:\n");
scanf("%s", codigo2);

printf("Cadastre o nome da cidade2:\n");
scanf("%s", nome2);

printf("Cadastre o Estado2:\n");
scanf("%s", estado2);

printf("Cadastre a populacao2:\n");
scanf("%d", &populacao2);

printf("Cadastre a area2 em km2:\n");
scanf("%f", &area2);

printf("Cadastre o PIB2:\n");
scanf("%f", &pib2);

printf("Cadastre a quantidade de pontos turisticos2:\n");
scanf("%d", &pontos2);

//resultado1
printf("\n\nCodigo da carta1:%s\nNome da cidade1:%s\nEstado1:%s\nPolulacao1:%d\nArea1 em km:%.3f\nPIB1:%.3f\nPontos1 turisticos:%d\n\n", codigo1, nome1, estado1, populacao1, area1, pib1, pontos1);
//resultado2
printf("\n\nCodigo da carta2:%s\nNome da cidade2:%s\nEstado2:%s\nPolulacao2:%d\nArea2 em km:%.3f\nPIB2:%.3f\nPontos2 turisticos:%d\n\n", codigo2, nome2, estado2, populacao2, area2, pib2, pontos2);







return 0;
}
