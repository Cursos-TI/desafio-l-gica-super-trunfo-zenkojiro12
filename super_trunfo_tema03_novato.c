#include <stdio.h>
int main() {
    // estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos.
    // troqui o nome do estado pelo o nome do país
    /*
    Obs - Fiz algumas mudanças em relação ao projeto pedido, que não comprometem o que foi solicitado, apenas para torná-lo mais interativo e bem estruturado.
    */
    char pais1[20], pais2[20];
    char cidade1[20], cidade2[20];
    char carta1[5], carta2[5];
    long int populacao1, populacao2;
    long int area1, area2;
    long int pib1, pib2;
    int pontost1, pontost2;
    float densidadep1,densidadep2;
    float percapito1,percapito2;
    int placar1 = 0, placar2 = 0;

    printf("------------------------------------------------------------\n");
    printf("  Desafio Super Trunfo - Países - Comparação das Cartas\n");
    printf("------------------------------------------------------------\n");

    printf("\n                     Nível Novato\n");

    printf("\n----------------------------------------\n");
    printf("           Entrada de dados\n");
    printf("------------------------------------------\n");

    printf("\nPaís\n");

printf("Digite o nome do primeiro país:\n");
    scanf("%19[^\n]", pais1);
        getchar();
printf("Digite o nome do segundo país:\n");
    scanf("%19[^\n]",pais2);
        getchar();
    printf("\nCidade\n");

printf("Digite o nome da primeira cidade:\n");
    scanf("%19[^\n]",cidade1);
        getchar();
printf("Digite o nome da segunda cidade:\n");
    scanf("%19[^\n]",cidade2);
        getchar();

    printf("\nCódigo da carta(ex - A01A):\n");

printf("Digite o código da primeira carta:\n");
    scanf("%4s",carta1);
        getchar();
printf("DIgite o código da segunda carta:\n");
    scanf("%4s",carta2);

    printf("\nPopulação\n");

printf("Digite o número de habitantes da primeira cidade(população):\n");
    scanf("%ld",&populacao1);
        getchar();
printf("Digite o núnero de habitantes da segunda cidade:\n");
    scanf("%ld",&populacao2);
        getchar();

    printf("\nÁrea\n");

printf("Digite a área da primeira cidade:\n");
    scanf("%ld",&area1);
        getchar();
printf("Digite a área da segunda cidade:\n");
    scanf("%ld",&area2);

    printf("\nPIB\n");

printf("Digite o PIB da primeira cidade:\n");
    scanf("%ld",&pib1);
        getchar();
printf("Digite o PIB da segunda cidade:\n");
    scanf("%ld",&pib2);
        getchar();

    printf("\nPontos Turísticos\n");

printf("Digite a quantidade de pontos turísticos da primeira cidade:\n");
    scanf("%d",&pontost1);
    getchar();
printf("Digite a quantidade de pontos turísticos da segunda cidade:\n");
    scanf("%d",&pontost2);

//cálcalos
if (area1 != 0) {
    densidadep1 = (float)populacao1 / area1;
}
    else {
    densidadep1 = 0;
}
if (area2 != 0) {
    densidadep2 = (float)populacao2 / area2;
} 
    else {
    densidadep2 = 0;
    }

if (populacao1 != 0) {
    percapito1 = (float) pib1 / populacao1;
}
else {
    percapito1 = 0;
}
if (populacao2 != 0) {
    percapito2 = (float) pib2 / populacao2;
}
else {
    percapito2 = 0;
}

    printf("\n---------------------------------\n");
    printf("        Saída de dados\n ");
    printf("-----------------------------------\n");

printf("\nDADOS DA PRIMEIRA CARTA:\n");

printf("País: %s\n",pais1);
printf("Cidade: %s\n",cidade1);
printf("Código da carta: %s\n",carta1);
printf("População: %ld habitantes\n",populacao1);
printf("Área: %ld km²\n",area1);
printf("PIB: %ld Reais\n",pib1);
printf("Pontos Turísticos: %d\n",pontost1);
printf("Densidade populacional: %.2f\n",densidadep1);
printf("PIB per capita: R$ %.2f\n",percapito1);

printf("\nDADOS DA SEGUNDA CARTA:\n");

printf("País: %s\n",pais2);
printf("Cidade: %s\n",cidade2);
printf("Código da carta: %s\n",carta2);
printf("População: %ld habitantes\n",populacao2);
printf("Área: %ld km²\n",area2);
printf("PIB: %ld Reais\n",pib2);
printf("Pontos Turísticos: %d\n",pontost2);
printf("Densidade populacional: %.2f\n",densidadep2);
printf("PIB per capita: R$ %.2f\n",percapito2);

    printf("\n---------------------------------\n");
    printf("       Comparando as cartas\n ");
    printf("-----------------------------------\n");
    
printf("Número de habitantes:\n");

if(populacao1 > populacao2) {
    printf("Carta 1 Venceu!\n");
    placar1++;
}
else if (populacao1 < populacao2) {
    printf("Carta 2 venceu!\n");
    placar2++;
}
else {
    printf("Empate!\n");
}   

    printf("ÁREA:\n");

if(area1 > area2) {
    printf("Carta 1 venceu!\n");
    placar1++;
}
else if (area1 < area2) {
    printf ("Carta 2 venceu!\n");
    placar2++;
}
else {
    printf("Empate!\n");
}

    printf("PIB:\n");

if (pib1 > pib2) {
    printf("Carta 1 venceu!\n");
    placar1++;
}
else if (pib1 < pib2) {
    printf("Carta 2 venceu!\n");
    placar2++;
}
else { 
    printf("Empate!\n");
}

    printf("PONTOS TURÍSTICOS:\n");

if (pontost1 > pontost2) { 
    printf("Carta 1 venceu!\n");
    placar1++;
}
else if (pontost1 < pontost2) {
    printf("Carta 2 venceu!\n");
    placar2++;
}
else {
    printf("Empate!\n");
}

    printf("DENSIDADE POPULACIONAL:\n");

if (densidadep1 < densidadep2) { 
    printf("Carta 1 venceu!\n");
    placar1++;
}
else if (densidadep1 > densidadep2) {
    printf("Carta 2 venceu!\n");
    placar2++;
}
else {
    printf("Empate!\n");
}

    printf("PIB PER CAPITA:\n");

if (percapito1 > percapito2) {
    printf("Carta 1 venceu!\n");
    placar1++; // contador
}
else if (percapito1 < percapito2) {
    printf("Carta 2 venceu!\n");
    placar2++;
}
else {
    printf("Empate!\n");
}

    printf("\n---------------------------------\n");
    printf("           Placar final\n ");
    printf("-----------------------------------\n");

    printf(" Carta 1: %d Vitória(s)\n", placar1);
    printf("Carta 2: %d Vitória(s)\n",placar2);
    
if (placar1 > placar2) {
    printf("Carta 1 Venceu!\n");
}
else if (placar1 < placar2) {
    printf("Carta 2 venceu!\n");
}
else {
    printf("Empate!\n");
}

    return 0;
}