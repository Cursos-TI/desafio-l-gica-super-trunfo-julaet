#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

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
    int nAtributo1, nAtributo2, nResultado1, nResultado2;

    //registrando a escolha do usuário:
    printf("Digite o primeiro  atributo que voce quer comparar segundo a lista abaixo:\n"
        "1 para Populacao\n"
        "2 para Area\n"
        "3 para PIB\n"
        "4 para Num. de Pontos Turisticos\n"
        "5 para Densidade Populacional\n"
        "6 para PIB per Capita\n"
        "7 para Superpoder\n");
    scanf(" %d", &nAtributo1);
    
    //criando o menu para escolha de qual vai ser o atributo comparado
    //Exibição do Resultado: Mostrar na tela, de forma clara, o resultado da comparação, incluindo:
    //O nome das duas cidades.
    //O atributo usado na comparação.
    //Os valores do atributo para cada carta.
    //Qual carta venceu.
    //Em caso de empate, exibir a mensagem "Empate!".
                  
    switch (nAtributo1) 
    {
    case 1: //habitantes
        printf( "NATAL x MANAUS: o atributo analisado foi Populacao!\n"
                "NATAL tem %li de habitantes.\n"
                "MANAUS tem %li de habitantes.\n\n", habitantes1, habitantes2);
        nResultado1 = habitantes1 > habitantes2 ? 1 : 0;
        break;
    case 2: //area
        printf( "NATAL x MANAUS: o atributo analisado foi Area!\n"
                "NATAL tem %.2f km2 de area.\n"
                "MANAUS tem %.2f km2 de area.\n\n", area1, area2);
        nResultado1 = area1 > area2 ? 1 : 0;
        break;
    case 3: //PIB
        printf( "NATAL x MANAUS: o atributo analisado foi PIB!\n"
                "NATAL tem %.2f km2 de PIB.\n"
                "MANAUS tem %.2f km2 de PIB.\n\n", pib1, pib2);
        nResultado1 = pib1 > pib2 ? 1 : 0;
        break;
    case 4: //Pontos Turisticos
        printf( "NATAL x MANAUS: o atributo analisado foi Pontos Turisticos!\n"
                "NATAL tem %i de Pontos Turisticos.\n"
                "MANAUS tem %i de Pontos Turisticos.\n\n", pontosTur1, pontosTur2);
        nResultado1 = pontosTur1 > pontosTur2 ? 1 : 0;
        break;
    case 5: //densidade populacional
        printf( "NATAL x MANAUS: o atributo analisado foi densidade populacional!\n"
                "NATAL tem %.2f de densidade populacional.\n"
                "MANAUS tem %.2f de densidade populacional.\n\n", densidadepop1, densidadepop2);
        nResultado1 = densidadepop1 < densidadepop2 ? 1 : 0;
        break;
    case 6: //PIB per capita
        printf( "NATAL x MANAUS: o atributo analisado foi PIB per capita!\n"
                "NATAL tem %.2f de PIB per capita.\n"
                "MANAUS tem %.2f de PIB per capita.\n\n", pibpercapita1, pibpercapita2);
        nResultado1 = pibpercapita1 > pibpercapita2 ? 1 : 0;
        break;
    case 7: //Superpoder
        printf( "NATAL x MANAUS: o atributo analisado foi Superpoder!\n"
                "NATAL tem %.2f de Superpoder.\n"
                "MANAUS tem %.2f de Superpoder.\n\n", superpoder1, superpoder2);
        nResultado1 = superpoder1 > superpoder2 ? 1 : 0;
        break;
    default:
        printf("Opcao Invalida!\n\n");
        exit(0);
    }
    
    printf("Digite o segundo atributo que voce quer comparar segundo a lista abaixo:\n"
        "1 para Populacao\n"
        "2 para Area\n"
        "3 para PIB\n"
        "4 para Num. de Pontos Turisticos\n"
        "5 para Densidade Populacional\n"
        "6 para PIB per Capita\n"
        "7 para Superpoder\n");
    scanf(" %d", &nAtributo2);
    
    if (nAtributo1 == nAtributo2) 
    {
        printf("Voce nao pode escolher o mesmo atributo, comece novamente");
        exit(0);
    }
    else 
    {
        switch (nAtributo2) 
        {
        case 1: //habitantes
            printf( "NATAL x MANAUS: o atributo analisado foi Populacao!\n"
                    "NATAL tem %li de habitantes.\n"
                    "MANAUS tem %li de habitantes.\n\n", habitantes1, habitantes2);
            nResultado2 = habitantes1 > habitantes2 ? 1 : 0;
            break;
        case 2: //area
            printf( "NATAL x MANAUS: o atributo analisado foi Area!\n"
                    "NATAL tem %.2f km2 de area.\n"
                    "MANAUS tem %.2f km2 de area.\n\n", area1, area2);
            nResultado2 = area1 > area2 ? 1 : 0;
            break;
        case 3: //PIB
            printf( "NATAL x MANAUS: o atributo analisado foi PIB!\n"
                    "NATAL tem %.2f km2 de PIB.\n"
                    "MANAUS tem %.2f km2 de PIB.\n\n", pib1, pib2);
            nResultado2 = pib1 > pib2 ? 1 : 0;
            break;
        case 4: //Pontos Turisticos
            printf( "NATAL x MANAUS: o atributo analisado foi Pontos Turisticos!\n"
                    "NATAL tem %i de Pontos Turisticos.\n"
                    "MANAUS tem %i de Pontos Turisticos.\n\n", pontosTur1, pontosTur2);
            nResultado2 = pontosTur1 > pontosTur2 ? 1 : 0;
            break;
        case 5: //densidade populacional
            printf( "NATAL x MANAUS: o atributo analisado foi densidade populacional!\n"
                    "NATAL tem %.2f de densidade populacional.\n"
                    "MANAUS tem %.2f de densidade populacional.\n\n", densidadepop1, densidadepop2);
            nResultado2 = densidadepop1 < densidadepop2 ? 1 : 0;
            break;
        case 6: //PIB per capita
            printf( "NATAL x MANAUS: o atributo analisado foi PIB per capita!\n"
                    "NATAL tem %.2f de PIB per capita.\n"
                    "MANAUS tem %.2f de PIB per capita.\n\n", pibpercapita1, pibpercapita2);
            nResultado2 = pibpercapita1 > pibpercapita2 ? 1 : 0;
            break;
        case 7: //Superpoder
            printf( "NATAL x MANAUS: o atributo analisado foi Superpoder!\n"
                    "NATAL tem %.2f de Superpoder.\n"
                    "MANAUS tem %.2f de Superpoder.\n\n", superpoder1, superpoder2);
            nResultado2 = superpoder1 > superpoder2 ? 1 : 0;
            break;
        default:
                printf("Opcao Invalida!\n");
                break;
        }
    }

    if (nResultado1 ==1 && nResultado2 == 1)
    {
     printf("A cidade vencedora foi NATAL\n");
    }

    if ((nResultado1 == 1 && nResultado2 == 0) || (nResultado1 == 0 && nResultado2 == 1))
    {
     printf("Houve empate\n");
    }
    if (nResultado1 == 0 && nResultado2 == 0)
    {
     printf("A cidade vencedora foi MANAUS\n");
    };

    return 0;
}
