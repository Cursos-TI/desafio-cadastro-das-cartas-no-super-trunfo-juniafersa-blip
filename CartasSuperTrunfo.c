#include <stdio.h>

int main(){

char estado1[10] = "B";
char codigo1[4] = "B01";
char nomecidade1[20] = "Salvador";
int populacao1 = 2418005;
float areakm21 = 693.8;
float pibembilhoes1 = 62954487000.00;
int pontosturisticos1 = 10;
float densidadepopulacional1 = (float)populacao1 / areakm21;
float pibpercapita1 = (float)pibembilhoes1 / populacao1;


char estado2[10] = "A";
char codigo2[4] = "A01";
char nomecidade2[20] = "Manaus";
int populacao2 = 2279686;
float areakm22 = 11401.092;
float pibembilhoes2 =  103281436000.00;
int pontosturisticos2 = 7;
float densidadepopulacional2 = (float)populacao2 / areakm22;
float pibpercapita2 = (float)pibembilhoes2 / populacao2;


printf("Carta 1\n");
printf("Digite o estado da carta 1 ( A - H): \n");
scanf("%s", estado1);
printf("Digite o código da carta 1: \n");
scanf("%s", codigo1);
printf("Digite o nome da cidade da carta 1: \n");
scanf("%s", nomecidade1);
printf("Digite a população da carta 1: \n");
scanf("%d", &populacao1);
printf("Digite a área da carta 1: \n");
scanf("%f", &areakm21);
printf("Digite o PIB em bilhões da carta 1: \n");
scanf("%f", &pibembilhoes1);
printf("Digite o número de principais pontos turísticos da carta 1: \n");
scanf("%d", &pontosturisticos1);
printf("A densidade populacional de Salvador é: %.2f hab/km2\n", densidadepopulacional2);
printf("O PIB per capita de Salvador é: %.2f reais\n", pibpercapita1);

printf("Carta 2\n");
printf("Digite o estado da carta 2 (A - H)");
scanf("%s", estado2);
printf("Digite o código da carta 2: \n");
scanf("%s", codigo2);
printf("Digite o nome da cidade da carta 2: \n");
scanf("%s", nomecidade2);
printf("Digite a população da carta 2: \n");
scanf("%d", &populacao2);
printf("Digite a área da carta 2: \n");
scanf("%f", &areakm22);
printf("Digite o PIB em bilhões da carta 2: \n");
scanf("%f", &pibembilhoes2);
printf("Digite o número de principais pontos turísticos da carta 2: \n");
scanf("%d", &pontosturisticos2);
printf(" A densidade populacional de Manaus é: %.2f hab/km2\n", densidadepopulacional1);
printf("O PIB per capita de Manaus é: %.2f reais\n ", pibpercapita1);


return 0;

}