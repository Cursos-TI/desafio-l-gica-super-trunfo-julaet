#include <stdio.h>
#include <string.h> 

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
   
    //Atribuições de valores às variáveis - já que pode pular a parte do cadastro no nível Aventureiro
    //carta 01
    char cidade1[10] = "NATAL";
    long int habitantes1 = 1500;
    float area1 = 45;
    float pib1 = 2000;
    int pontosTur1 = 25;
    float densidadepop1 = (float) habitantes1 / area1;
    float pibpercapita1 = (float) pib1 / habitantes1;
    float superpoder1 = (float) habitantes1 + area1 + pib1 + pontosTur1;

    //carta 2
    char cidade2[10] = "MANAUS";
    long int habitantes2 = 2500;
    float area2 = 45;
    float pib2 = 4000;
    int pontosTur2 = 15;
    float densidadepop2 = (float) habitantes2 / area2;
    float pibpercapita2 = (float) pib2 / habitantes2;
    float superpoder2 = (float) habitantes2 + area2 + pib2 + pontosTur2;

    //Imprimindo os dados das cartas

    printf("Carta 01:\n Estado: A\n Codigo: A01\n");
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %li habitantes\n", habitantes1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Num de Pontos Turisticos: %i\n", pontosTur1);
    printf("Densidade Populacional: %.2f\n", densidadepop1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);
    printf("Superpoder: %.4f\n", superpoder1);
    
    printf("Carta 02:\n Estado: B\n Codigo: B01\n");
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %li habitantes\n", habitantes2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Num. de Pontos Turisticos: %i\n", pontosTur2);
    printf("Densidade Populacional: %.2f\n", densidadepop2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    printf("Superpoder: %.4f\n\n", superpoder2);
    
    //definindo a variável para escolha do atributo
    int nAtributo;

    //registrando a escolha do usuário:
    printf("Digite o atributo que voce quer comparar segundo a lista abaixo:\n"
        "1 para Populacao\n"
        "2 para Area\n"
        "3 para PIB\n"
        "4 para Num. de Pontos Turisticos\n"
        "5 para Densidade Populacional\n"
        "6 para PIB per Capita\n"
        "7 para Superpoder\n");
    scanf(" %d", &nAtributo);
    
    //criando o menu para escolha de qual vai ser o atributo comparado
    //Exibição do Resultado: Mostrar na tela, de forma clara, o resultado da comparação, incluindo:
    //O nome das duas cidades.
    //O atributo usado na comparação.
    //Os valores do atributo para cada carta.
    //Qual carta venceu.
    //Em caso de empate, exibir a mensagem "Empate!".
                  
    switch (nAtributo) 
    {
    case 1: //habitantes
        if (habitantes1 > habitantes2) {
            printf("NATAL x MANAUS: o atributo analisado foi Populacao!\n"
                   "NATAL tem %li de habitantes.\n"
                   "MANAUS tem %li de habitantes.\n"
                   "A cidade vencedora foi NATAL\n", habitantes1, habitantes2)
            ;}
        else if (habitantes1 < habitantes2) {
            printf("NATAL x MANAUS: o atributo analisado foi Populacao!\n"
                   "NATAL tem %li de habitantes.\n"
                   "MANAUS tem %li de habitantes.\n"
                   "A cidade vencedora foi MANAUS\n", habitantes1, habitantes2);}
           else {
            printf("NATAL x MANAUS: o atributo analisado foi Populacao!\n"
                   "NATAL tem %li de habitantes.\n"
                   "MANAUS tem %li de habitantes.\n"
                   "Houve empate!\n", habitantes1, habitantes2);}
        break;
    case 2: //area
        if (area1 > area2) {
              printf("NATAL x MANAUS: o atributo analisado foi Area!\n"
                   "NATAL tem %.2f km2 de area.\n"
                   "MANAUS tem %.2f km2 de area.\n"
                   "A cidade vencedora foi NATAL\n", area1, area2)
            ;}
        else if (area1 < area2) {
              printf("NATAL x MANAUS: o atributo analisado foi Area!\n"
                   "NATAL tem %.2f km2 de area.\n"
                   "MANAUS tem %.2f km2 de area.\n"
                   "A cidade vencedora foi MANAUS\n", area1, area2);}
            else {
              printf("NATAL x MANAUS: o atributo analisado foi Area!\n"
                   "NATAL tem %.2f km2 de area.\n"
                   "MANAUS tem %.2f km2 de area.\n"
                   "Houve Empate\n", area1, area2);}
        break;
    case 3: //PIB
        if (pib1 > pib2) {
              printf("NATAL x MANAUS: o atributo analisado foi PIB!\n"
                   "NATAL tem %.2f de PIB.\n"
                   "MANAUS tem %.2f de PIB.\n"
                   "A cidade vencedora foi NATAL\n", pib1, pib2)
            ;}
        else if (pib1 < pib2) {
              printf("NATAL x MANAUS: o atributo analisado foi PIB!\n"
                   "NATAL tem %.2f de PIB.\n"
                   "MANAUS tem %.2f de PIB.\n"
                   "A cidade vencedora foi MANAUS\n", pib1, pib2)
            ;}
            else {
              printf("NATAL x MANAUS: o atributo analisado foi PIB!\n"
                   "NATAL tem %.2f de PIB.\n"
                   "MANAUS tem %.2f de PIB.\n"
                   "Houve Empate\n", pib1, pib2);}
        break;
    case 4: //Pontos Turisticos
        if (pontosTur1 > pontosTur2) {
              printf("NATAL x MANAUS: o atributo analisado foi Pontos Turisticos!\n"
                   "NATAL tem %i Pontos Turisticos.\n"
                   "MANAUS tem %i Pontos Turisticos.\n"
                   "A cidade vencedora foi NATAL\n", pontosTur1, pontosTur2)
            ;}
        else if (pontosTur1 < pontosTur2) {
              printf("NATAL x MANAUS: o atributo analisado foi Pontos Turisticos!\n"
                   "NATAL tem %i Pontos Turisticos.\n"
                   "MANAUS tem %i Pontos Turisticos.\n"
                   "A cidade vencedora foi MANAUS\n", pontosTur1, pontosTur2)
            ;}
            else {
              printf("NATAL x MANAUS: o atributo analisado foi Pontos Turisticos!\n"
                   "NATAL tem %i Pontos Turisticos.\n"
                   "MANAUS tem %i Pontos Turisticos.\n"
                   "Houve Empate\n", pontosTur1, pontosTur2);}
        break;
    case 5: //densidade populacional
        if (densidadepop1 < densidadepop2) {
              printf("NATAL x MANAUS: o atributo analisado foi Densidade Populacional!\n"
                   "NATAL tem %.2f densidade populacional.\n"
                   "MANAUS tem %.2f densidade populacional.\n"
                   "A cidade vencedora foi NATAL\n", densidadepop1, densidadepop2)
            ;}
        else if (densidadepop1 > densidadepop2) {
              printf("NATAL x MANAUS: o atributo analisado foi Densidade Populacional!\n"
                   "NATAL tem %.2f densidade populacional.\n"
                   "MANAUS tem %.2f densidade populacional.\n"
                   "A cidade vencedora foi NATAL\n", densidadepop1, densidadepop2)
            ;}
            else {
              printf("NATAL x MANAUS: o atributo analisado foi Densidade Populacional!\n"
                   "NATAL tem %.2f densidade populacional.\n"
                   "MANAUS tem %.2f densidade populacional.\n"
                   "Houve Empate\n", densidadepop1, densidadepop2);}
        break;
    case 6: //PIB per capita
        if (pibpercapita1 > pibpercapita2) {
                printf("NATAL x MANAUS: o atributo analisado foi PIB per capita!\n"
                   "NATAL tem %.2f PIB per capita.\n"
                   "MANAUS tem %.2f PIB per capita.\n"
                   "A cidade vencedora foi NATAL\n", pibpercapita1, pibpercapita2)
            ;}
        else if (pibpercapita1 < pibpercapita2) {
                printf("NATAL x MANAUS: o atributo analisado foi PIB per capita!\n"
                   "NATAL tem %.2f PIB per capita.\n"
                   "MANAUS tem %.2f PIB per capita.\n"
                   "A cidade vencedora foi MANAUS!\n", pibpercapita1, pibpercapita2)
            ;}
            else {
                printf("NATAL x MANAUS: o atributo analisado foi PIB per capita!\n"
                   "NATAL tem %.2f PIB per capita.\n"
                   "MANAUS tem %.2f PIB per capita.\n"
                   "Houve Empate\n", pibpercapita1, pibpercapita2);}
        break;
    case 7: //Superpoder
        if (superpoder1 > superpoder2) {
                printf("NATAL x MANAUS: o atributo analisado foi Superpoder!\n"
                   "NATAL tem %.2f Superpoder.\n"
                   "MANAUS tem %.2f Superpoder.\n"
                   "A cidade vencedora foi NATAL\n", superpoder1, superpoder2)
            ;}
        else if (pibpercapita1 < pibpercapita2) {
                printf("NATAL x MANAUS: o atributo analisado foi Superpoder!\n"
                   "NATAL tem %.2f Superpoder.\n"
                   "MANAUS tem %.2f Superpoder.\n"
                   "A cidade vencedora foi MANAUS!\n", superpoder1, superpoder2)
            ;}
            else {
                printf("NATAL x MANAUS: o atributo analisado foi Superpoder!\n"
                   "NATAL tem %.2f Superpoder.\n"
                   "MANAUS tem %.2f Superpoder.\n"
                   "Houve Empate\n", superpoder1, superpoder2);}
        break;
    default:
        printf("Opcao Invalida!");
        break;
    }
    

    return 0;
}
