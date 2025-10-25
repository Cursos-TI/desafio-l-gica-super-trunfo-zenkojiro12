#include <stdio.h>
// estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos.
// troqui o nome do estado pelo o nome do país
/*
Fiz algumas mudanças em relação ao projeto pedido, que não comprometem o que foi solicitado, apenas para torná-lo mais interativo e bem estruturado.
Fiz algumas melhorias em relação a primeira versão :)
*/
int main() {
char pais1[20], pais2[20];
char cidade1[20], cidade2[20];
char carta1[5], carta2[5];
long int populacao1, populacao2;
long int area1, area2;
long int pib1, pib2;
int pontost1, pontost2;
float densidadep1, densidadep2;
float percapito1, percapito2;
int placar1 = 0, placar2 = 0;
int choises;

        printf("------------------------------------------------------------\n");
        printf("  Desafio Super Trunfo - Países - Comparação das Cartas\n");
        printf("------------------------------------------------------------\n");

        printf("\n                 Nível Mestre\n"); 
        printf("\n----------------------------------------\n");
        printf("           Entrada de dados\n");
        printf("------------------------------------------\n");

printf("\nPaís\n");
printf("Digite o nome do primeiro país:\n");
    scanf("%19[^\n]", pais1);
        getchar();
printf("Digite o nome do segundo país:\n");
    scanf("%19[^\n]", pais2);
        getchar();

printf("\nCidade\n");
printf("Digite o nome da primeira cidade:\n");
    scanf("%19[^\n]", cidade1);
        getchar();
printf("Digite o nome da segunda cidade:\n");
    scanf("%19[^\n]", cidade2);
        getchar();

printf("\nCódigo da carta (ex - A01A):\n");
printf("Digite o código da primeira carta:\n");
    scanf("%4s", carta1);
        getchar();
printf("Digite o código da segunda carta:\n");
    scanf("%4s", carta2);
        getchar();

printf("\nPopulação\n");
printf("Digite o número de habitantes da primeira cidade (população):\n");
    scanf("%ld", &populacao1);
        getchar();
printf("Digite o número de habitantes da segunda cidade:\n");
    scanf("%ld", &populacao2);
        getchar();

printf("\nÁrea\n");
printf("Digite a área da primeira cidade:\n");
    scanf("%ld", &area1);
        getchar();
printf("Digite a área da segunda cidade:\n");
    scanf("%ld", &area2);
        getchar();

printf("\nPIB\n");
printf("Digite o PIB da primeira cidade:\n");
    scanf("%ld", &pib1);
        getchar();
printf("Digite o PIB da segunda cidade:\n");
    scanf("%ld", &pib2);
        getchar();

printf("\nPontos Turísticos\n");
printf("Digite a quantidade de pontos turísticos da primeira cidade:\n");
    scanf("%d", &pontost1);
        getchar();
printf("Digite a quantidade de pontos turísticos da segunda cidade:\n");
    scanf("%d", &pontost2);
        getchar();

// Cálculos
densidadep1 = (area1 != 0) ? (float)populacao1 / area1 : 0;
densidadep2 = (area2 != 0) ? (float)populacao2 / area2 : 0;
percapito1 = (populacao1 != 0) ? (float)pib1 / populacao1 : 0;
percapito2 = (populacao2 != 0) ? (float)pib2 / populacao2 : 0;
/* ? = operador ternário (nível avançado)
Condição: area1 != 0 (verifica se area1 não é zero para evitar divisão por zero).
Se verdadeira: densidadep1 recebe (float)populacao1 / area1 (calcula a densidade populacional).
Se falsa: densidadep1 recebe 0 (evita erro se area1 for zero).
*/

        printf("\n---------------------------------\n");
        printf("        Saída de dados\n");
        printf("-----------------------------------\n");

printf("\nDADOS DA PRIMEIRA CARTA:\n");
printf("País: %s\n", pais1);
printf("Cidade: %s\n", cidade1);
printf("Código da carta: %s\n", carta1);
printf("População: %ld habitantes\n", populacao1);
printf("Área: %ld km²\n", area1);
printf("PIB: %ld Reais\n", pib1);
printf("Pontos Turísticos: %d\n", pontost1);
printf("Densidade populacional: %.2f\n", densidadep1);
printf("PIB per capita: R$ %.2f\n", percapito1);

printf("\nDADOS DA SEGUNDA CARTA:\n");
printf("País: %s\n", pais2);
printf("Cidade: %s\n", cidade2);
printf("Código da carta: %s\n", carta2);
printf("População: %ld habitantes\n", populacao2);
printf("Área: %ld km²\n", area2);
printf("PIB: %ld Reais\n", pib2);
printf("Pontos Turísticos: %d\n", pontost2);
printf("Densidade populacional: %.2f\n", densidadep2);
printf("PIB per capita: R$ %.2f\n", percapito2);

// Loop do menu interativo
do {
        printf("\n---------------------------------\n");
        printf("    Menu de comparação das cartas\n");
        printf("-----------------------------------\n");

printf("1 - Comparar População\n");
printf("2 - Comparar Área\n");
printf("3 - Comparar PIB\n");
printf("4 - Comparar Pontos Turísticos\n");
printf("5 - Comparar Densidade Populacional\n");
printf("6 - Comparar PIB per Capita\n");
printf("7 - Comparar dois atributos\n"); // Nova opção para Nível Mestre
printf("0 - Sair\n");
printf("Escolha uma opção: ");
scanf("%d", &choises);
getchar();

// Comparação com switch e lógica aninhada
switch (choises) {
case 1:
printf("\nNúmero de habitantes:\n");

if (populacao1 > populacao2) {
printf("Carta 1 venceu! (%ld vs %ld)\n", populacao1, populacao2);
placar1++;
} else if (populacao1 < populacao2) {
printf("Carta 2 venceu! (%ld vs %ld)\n", populacao1, populacao2);
placar2++;
} else {
printf("Empate na população! Comparando PIB como desempate...\n");
if (pib1 > pib2) {
printf("Carta 1 venceu no desempate! (%ld vs %ld)\n", pib1, pib2);
placar1++;
} else if (pib1 < pib2) {
printf("Carta 2 venceu no desempate! (%ld vs %ld)\n", pib1, pib2);
placar2++;
} else {
printf("Empate também no PIB!\n");
}
}
break;
case 2:
printf("\nÁrea:\n");

if (area1 > area2) {
printf("Carta 1 venceu! (%ld vs %ld)\n", area1, area2);
placar1++;
} else if (area1 < area2) {
printf("Carta 2 venceu! (%ld vs %ld)\n", area1, area2);
placar2++;
} else {
printf("Empate na área! Comparando PIB como desempate...\n");
if (pib1 > pib2) {
printf("Carta 1 venceu no desempate! (%ld vs %ld)\n", pib1, pib2);
placar1++;
} else if (pib1 < pib2) {
printf("Carta 2 venceu no desempate! (%ld vs %ld)\n", pib1, pib2);
placar2++;
} else {
printf("Empate também no PIB!\n");
}
}
break;
case 3:
printf("\nPIB:\n");

if (pib1 > pib2) {
printf("Carta 1 venceu! (%ld vs %ld)\n", pib1, pib2);
placar1++;
} else if (pib1 < pib2) {
printf("Carta 2 venceu! (%ld vs %ld)\n", pib1, pib2);
placar2++;
} else {
printf("Empate no PIB! Comparando população como desempate...\n");
if (populacao1 > populacao2) {
printf("Carta 1 venceu no desempate! (%ld vs %ld)\n", populacao1, populacao2);
placar1++;
} else if (populacao1 < populacao2) {
printf("Carta 2 venceu no desempate! (%ld vs %ld)\n", populacao1, populacao2);
placar2++;
} else {
printf("Empate também na população!\n");
}
}
break;
case 4:
printf("\nPontos Turísticos:\n");

if (pontost1 > pontost2) {
printf("Carta 1 venceu! (%d vs %d)\n", pontost1, pontost2);
placar1++;
} else if (pontost1 < pontost2) {
printf("Carta 2 venceu! (%d vs %d)\n", pontost1, pontost2);
placar2++;
} else {
printf("Empate nos pontos turísticos! Comparando PIB como desempate...\n");
if (pib1 > pib2) {
printf("Carta 1 venceu no desempate! (%ld vs %ld)\n", pib1, pib2);
placar1++;
} else if (pib1 < pib2) {
printf("Carta 2 venceu no desempate! (%ld vs %ld)\n", pib1, pib2);
placar2++;
} else {
printf("Empate também no PIB!\n");
}
}
break;
case 5:
printf("\nDensidade Populacional:\n");

if (densidadep1 < densidadep2) {
printf("Carta 1 venceu! (%.2f vs %.2f)\n", densidadep1, densidadep2);
placar1++;
} else if (densidadep1 > densidadep2) {
printf("Carta 2 venceu! (%.2f vs %.2f)\n", densidadep1, densidadep2);
placar2++;
} else {
printf("Empate na densidade populacional! Comparando PIB como desempate...\n");
if (pib1 > pib2) {
printf("Carta 1 venceu no desempate! (%ld vs %ld)\n", pib1, pib2);
placar1++;
} else if (pib1 < pib2) {
printf("Carta 2 venceu no desempate! (%ld vs %ld)\n", pib1, pib2);
placar2++;
} else {
printf("Empate também no PIB!\n");
}
}
break;
case 6:
printf("\nPIB per Capita:\n");

if (percapito1 > percapito2) {
printf("Carta 1 venceu! (%.2f vs %.2f)\n", percapito1, percapito2);
placar1++;
} else if (percapito1 < percapito2) {
printf("Carta 2 venceu! (%.2f vs %.2f)\n", percapito1, percapito2);
placar2++;
} else {
printf("Empate no PIB per capita! Comparando população como desempate...\n");
if (populacao1 > populacao2) {
printf("Carta 1 venceu no desempate! (%ld vs %ld)\n", populacao1, populacao2);
placar1++;
} else if (populacao1 < populacao2) {
printf("Carta 2 venceu no desempate! (%ld vs %ld)\n", populacao1, populacao2);
placar2++;
} else {
printf("Empate também na população!\n");
}
}
break;
case 7: // Novo caso para comparação de dois atributos
{
int atributo1, atributo2;
int vitorias_carta1 = 0, vitorias_carta2 = 0;

// Escolha do primeiro atributo
printf("\nEscolha o primeiro atributo para comparação:\n");
printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per Capita\n");
printf("Digite o número do primeiro atributo: ");
scanf("%d", &atributo1);
getchar();

// Escolha do segundo atributo com validação
printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per Capita\n");
printf("Digite o número do segundo atributo: ");
scanf("%d", &atributo2);
getchar();

// Validação para atributos diferentes e válidos
while (atributo1 == atributo2 || atributo1 < 1 || atributo1 > 6 || atributo2 < 1 || atributo2 > 6) {
printf("Atributos inválidos ou iguais! Escolha novamente.\n");
printf("Digite o número do primeiro atributo: ");
scanf("%d", &atributo1);
getchar();
printf("Digite o número do segundo atributo: ");
scanf("%d", &atributo2);
getchar();
}
// Comparação do primeiro atributo
printf("\nComparando primeiro atributo: ");
if (atributo1 == 1) {

printf("População\n");

vitorias_carta1 += (populacao1 > populacao2) ? 1 : 0;
vitorias_carta2 += (populacao1 < populacao2) ? 1 : 0;
printf("%s\n", (populacao1 > populacao2) ? "Carta 1 venceu!" : 
(populacao1 < populacao2) ? "Carta 2 venceu!" : "Empate!");
} else if (atributo1 == 2) {

printf("Área\n");

vitorias_carta1 += (area1 > area2) ? 1 : 0;
vitorias_carta2 += (area1 < area2) ? 1 : 0;
printf("%s\n", (area1 > area2) ? "Carta 1 venceu!" : 
(area1 < area2) ? "Carta 2 venceu!" : "Empate!");
} else if (atributo1 == 3) {

printf("PIB\n");

vitorias_carta1 += (pib1 > pib2) ? 1 : 0;
vitorias_carta2 += (pib1 < pib2) ? 1 : 0;
printf("%s\n", (pib1 > pib2) ? "Carta 1 venceu!" : 
(pib1 < pib2) ? "Carta 2 venceu!" : "Empate!");
} else if (atributo1 == 4) {

printf("Pontos Turísticos\n");

vitorias_carta1 += (pontost1 > pontost2) ? 1 : 0;
vitorias_carta2 += (pontost1 < pontost2) ? 1 : 0;
printf("%s\n", (pontost1 > pontost2) ? "Carta 1 venceu!" : 
(pontost1 < pontost2) ? "Carta 2 venceu!" : "Empate!");
} else if (atributo1 == 5) {

printf("Densidade Populacional\n");

vitorias_carta1 += (densidadep1 < densidadep2) ? 1 : 0;
vitorias_carta2 += (densidadep1 > densidadep2) ? 1 : 0;
printf("%s\n", (densidadep1 < densidadep2) ? "Carta 1 venceu!" : 
(densidadep1 > densidadep2) ? "Carta 2 venceu!" : "Empate!");
} else if (atributo1 == 6) {

printf("PIB per Capita\n");

vitorias_carta1 += (percapito1 > percapito2) ? 1 : 0;
vitorias_carta2 += (percapito1 < percapito2) ? 1 : 0;
printf("%s\n", (percapito1 > percapito2) ? "Carta 1 venceu!" : 
(percapito1 < percapito2) ? "Carta 2 venceu!" : "Empate!");
}
// Comparação do segundo atributo
printf("Comparando segundo atributo: ");
if (atributo2 == 1) {
printf("População\n");
vitorias_carta1 += (populacao1 > populacao2) ? 1 : 0;
vitorias_carta2 += (populacao1 < populacao2) ? 1 : 0;
printf("%s\n", (populacao1 > populacao2) ? "Carta 1 venceu!" : 
(populacao1 < populacao2) ? "Carta 2 venceu!" : "Empate!");
} else if (atributo2 == 2) {

printf("Área\n");

vitorias_carta1 += (area1 > area2) ? 1 : 0;
vitorias_carta2 += (area1 < area2) ? 1 : 0;
printf("%s\n", (area1 > area2) ? "Carta 1 venceu!" : 
(area1 < area2) ? "Carta 2 venceu!" : "Empate!");
} else if (atributo2 == 3) {

printf("PIB\n");

vitorias_carta1 += (pib1 > pib2) ? 1 : 0;
vitorias_carta2 += (pib1 < pib2) ? 1 : 0;
printf("%s\n", (pib1 > pib2) ? "Carta 1 venceu!" : 
(pib1 < pib2) ? "Carta 2 venceu!" : "Empate!");
} else if (atributo2 == 4) {

printf("Pontos Turísticos\n");

vitorias_carta1 += (pontost1 > pontost2) ? 1 : 0;
vitorias_carta2 += (pontost1 < pontost2) ? 1 : 0;
printf("%s\n", (pontost1 > pontost2) ? "Carta 1 venceu!" : 
(pontost1 < pontost2) ? "Carta 2 venceu!" : "Empate!");
} else if (atributo2 == 5) {

printf("Densidade Populacional\n");

vitorias_carta1 += (densidadep1 < densidadep2) ? 1 : 0;
vitorias_carta2 += (densidadep1 > densidadep2) ? 1 : 0;
printf("%s\n", (densidadep1 < densidadep2) ? "Carta 1 venceu!" : 
(densidadep1 > densidadep2) ? "Carta 2 venceu!" : "Empate!");
} else if (atributo2 == 6) {

printf("PIB per Capita\n");

vitorias_carta1 += (percapito1 > percapito2) ? 1 : 0;
vitorias_carta2 += (percapito1 < percapito2) ? 1 : 0;
printf("%s\n", (percapito1 > percapito2) ? "Carta 1 venceu!" : 
(percapito1 < percapito2) ? "Carta 2 venceu!" : "Empate!");
}
// Determinar vencedor geral
printf("\nResultado final da comparação:\n");

if (vitorias_carta1 > vitorias_carta2) {
printf("Carta 1 venceu! (%d vs %d atributos)\n", vitorias_carta1, vitorias_carta2);
placar1++;
} else if (vitorias_carta2 > vitorias_carta1) {
printf("Carta 2 venceu! (%d vs %d atributos)\n", vitorias_carta1, vitorias_carta2);
placar2++;
} else {
printf("Empate nos atributos! Comparando PIB como desempate...\n");
printf("%s\n", (pib1 > pib2) ? "Carta 1 venceu no desempate!" : 
(pib1 < pib2) ? "Carta 2 venceu no desempate!" : "Empate total!");
placar1 += (pib1 > pib2) ? 1 : 0;
placar2 += (pib1 < pib2) ? 1 : 0;
}
}
break;
case 0:
printf("\nJogo encerrado!\n");
break;
default:
printf("\nOpção Inválida! Escolha novamente.\n");
break;
}

// Exibir placar após cada comparação 
if (choises != 0) {
        printf("\n---------------------------------\n");
        printf("           Placar atual\n");
        printf("-----------------------------------\n");

printf("Carta 1: %d Vitória(s)\n", placar1);
printf("Carta 2: %d Vitória(s)\n", placar2);
}
} while (choises != 0);

// Placar final
        printf("\n---------------------------------\n");
        printf("           Placar final\n");
        printf("-----------------------------------\n");

printf("Carta 1: %d Vitória(s)\n", placar1);
printf("Carta 2: %d Vitória(s)\n", placar2);

if (placar1 > placar2) {
printf("Carta 1 venceu o jogo!\n");
} else if (placar1 < placar2) {
printf("Carta 2 venceu o jogo!\n");
} else {
printf("Empate no jogo!\n");
}

return 0;
}