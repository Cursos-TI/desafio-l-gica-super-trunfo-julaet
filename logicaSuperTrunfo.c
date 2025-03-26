#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[3], codigo2[3]; 
    char cidade1[20], cidade2[20];
    long int habitantes1, habitantes2;
    float area1, area2, densidadepop1, densidadepop2;
    float pib1, pib2, pibpercapita1, pibpercapita2, superpoder1, superpoder2;
    int pontosTur1, pontosTur2;
    int resultHab, resultArea, resultDens, resultPib, resultPibPerCapita, resultPontosTur, resultSuperPoder;
    int resultadoGeral1, resultadoGeral2;

    // Cadastro das Cartas:
    //carta 01
    printf("Ola! Vamos cadastrar a Carta 01:\n");
    printf("Digite um caracter de A a H para definir o Estado:\n");
    scanf(" %c", &estado1);
    printf("Informe o codigo da carta - deve ser informada a letra do estado seguida de um número de 01 a 04:\n");
    scanf(" %s", &codigo1);
    printf("Digite o nome da cidade:\n");
    scanf(" %s", &cidade1);
    printf("Informe o numero de habitantes da cidade:\n");
    scanf(" %i", &habitantes1);
    printf("Informe a area da cidade em km2: \n");
    scanf(" %f", &area1);
    printf("Informe o PIB da cidade em bilhoes de reais:\n");
    scanf(" %f", &pib1);
    printf("Quantos pontos turisticos existem nessa cidade?:\n");
    scanf(" %i", &pontosTur1);
    //calcular densidade populacional e PIB per capita
    densidadepop1 = (float) habitantes1 / area1;
    pibpercapita1 = (float) pib1 / habitantes1;
    //superpoder
    superpoder1 = (float) habitantes1 + area1 + pib1 + pontosTur1;


    //carta 02
    printf("Agora, a Carta 02:\n");
    printf("Digite um caracter de A a H para definir o Estado:\n");
    scanf(" %c", &estado2);
    printf("Informe o codigo da carta - deve ser informada a letra do estado seguida de um número de 01 a 04:\n");
    scanf(" %s", &codigo2);
    printf("Digite o nome da cidade:\n");
    scanf(" %s", &cidade2);
    printf("Informe o numero de habitantes da cidade:\n");
    scanf(" %i", &habitantes2);
    printf("Informe a area da cidade em km2: \n");
    scanf(" %f", &area2);
    printf("Informe o PIB da cidade em bilhoes de reais:\n");
    scanf(" %f", &pib2);
    printf("Quantos pontos turisticos existem nessa cidade?:\n");
    scanf(" %i", &pontosTur2);
    //calcular densidade populacional e PIB per capita
    densidadepop2 = (float) habitantes2 / area2;
    pibpercapita2 = (float) pib2 / habitantes2;
    //superpoder
    superpoder2 = (float) habitantes2 + area2 + pib2 + pontosTur2;

    //imprmindo os dados das cartas
    //Carta 1
    printf("Carta 01:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %i habitantes\n", habitantes1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %i\n", pontosTur1);
    printf("Densidade Populacional: %.2f\n", densidadepop1);
    printf("PIB per capita: %.2f\n\n", pibpercapita1);
    printf("Superpoder: %.4f\n\n", superpoder1);

    //Carta 2
    printf("Carta 02:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %i habitantes\n", habitantes2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %i\n", pontosTur2);
    printf("Densidade Populacional: %.2f\n", densidadepop2);
    printf("PIB per capita: %.2f\n", pibpercapita2);
    printf("Superpoder: %.4f\n\n", superpoder2);

    // Comparação de Cartas:
    if (area1 > area2) {
        printf("A cidade de %s tem maior área!\n", cidade1);}    
    else{
        printf("A cidade de %s tem maior área!\n", cidade2);}    

    if (densidadepop1 < densidadepop2) {
        printf("A cidade de %s tem menor densidade populacional!\n", cidade1);}    
    else{
        printf("A cidade de %s tem menor densidade populacional!\n", cidade2);}    

    if (habitantes1 > habitantes2) {
        printf("A cidade de %s tem maior número de habitantes!\n", cidade1);}    
    else{
        printf("A cidade de %s tem maior número de habitantes!\n", cidade2);}    
    
    if (pib1 > pib2) {
        printf("A cidade de %s tem PIB maior!\n", cidade1);}    
    else{
        printf("A cidade de %s tem PIB maior!\n", cidade2);}    
 
    if (pibpercapita1 > pibpercapita2) {
        printf("A cidade de %s tem maior PIB per Capita!\n", cidade1);}    
    else{
        printf("A cidade de %s tem maior PIB per Capita!\n", cidade2);}    
        
    if (superpoder1 > superpoder2) {
        printf("A cidade de %s tem o maior superpoder!\n", cidade1);}    
    else{
        printf("A cidade de %s tem o maior superpoder\n", cidade2);}    

    if (pontosTur1 > pontosTur2) {
        printf("A cidade de %s tem maior número de pontos turísticos!\n", cidade1);}    
    else{
        printf("A cidade de %s tem maior número de pontos turísticos!\n", cidade2);}    

    //Comparando as cartas e adicionando o resultado das comparações nas variaveis pertinentes:
    resultHab = habitantes1 > habitantes2;
    resultArea = area1 > area2;
    resultDens = densidadepop1 < densidadepop2;
    resultPib = pib1 > pib2;
    resultPibPerCapita = pibpercapita1 > pibpercapita2;
    resultPontosTur = pontosTur1 > pontosTur2;
    resultSuperPoder = superpoder1 > superpoder2;

    //Somando os resultados em variáveis de resultado para poder decidir qual a carta vencedora com base 
    //na comparação de todos os atributos. A carta que ganhar em mais pontos, será a carta vencedora
    if  (resultHab > 0) {
        resultadoGeral1 = resultArea;}
    else {
        resultadoGeral2 = resultArea;} 
    if  (resultDens == 0) {
        resultadoGeral1 = resultadoGeral1 + resultDens;}
    else {
        resultadoGeral2 = resultadoGeral2 + resultDens;}
    if  (resultPib > 0) {
        resultadoGeral1 = resultadoGeral1 + resultPib;}
    else {
        resultadoGeral2 = resultadoGeral2 + resultPib;}
    if  (resultPibPerCapita > 0) {
        resultadoGeral1 = resultadoGeral1 + resultPibPerCapita;}
    else {
        resultadoGeral2 = resultadoGeral2 + resultPibPerCapita;}
    if  (resultPontosTur > 0) {
        resultadoGeral1 = resultadoGeral1 + resultPontosTur;}
    else {
        resultadoGeral2 = resultadoGeral2 + resultPontosTur;}
    if  (resultSuperPoder > 0) {
        resultadoGeral1 = resultadoGeral1 + resultSuperPoder;}
    else {
        resultadoGeral2 = resultadoGeral2 + resultSuperPoder;}

    printf(" %d\n", resultadoGeral1);
    printf(" %d\n", resultadoGeral2);

    //Exibindo o resultado geral final
    if (resultadoGeral1 > resultadoGeral2) {
        printf("A cidade vencedora é %s!\n", cidade1);}
    else {
        printf("A cidade vencedora é %s!\n", cidade2);}
 
    
    

    return 0;
}
