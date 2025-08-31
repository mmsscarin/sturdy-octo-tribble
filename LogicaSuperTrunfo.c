#include <stdio.h>

int main(){

    //nomes das variáveis simples para fácil entendimento
    char uf1, uf2, cod1[3], cod2[3], cidade1[20], cidade2[20];
    int ptotur1, ptotur2, opcao1, opcao2, resultado;
    float area1, area2, pib1, pib2, denspop1, denspop2, pibpc1, pibpc2, superpoder1, superpoder2;
    unsigned long int populacao1, populacao2;
      
    //cabeçalho para deixar a tela mais user-friendly
    printf ("SUPER TRUNFO\n");
    printf ("Cadastro de Cartas\n");
    //programa interativo
    printf ("CARTA 1\n");
    printf ("Digite o estado: ");
    scanf (" %c", &uf1);
    printf ("Digite o codigo: ");
    scanf ("%s", &cod1);
    printf ("Digite o nome da cidade: ");
    scanf ("%s", &cidade1);
    printf ("Digite a populacao: ");
    scanf ("%d", &populacao1);
    printf ("Digite a área da cidade: ");
    scanf ("%f", &area1);
    printf ("Digite o PIB: ");
    scanf ("%f", &pib1);
    printf ("Digite a quantidade de pontos turisticos: ");
    scanf ("%d", &ptotur1);

    //calculo de dados de acordo com informacoes alimentadas pelos usuarios
    denspop1 = (float) populacao1/area1;
    pibpc1 = (pib1 /(float) populacao1)*1000000000;
    superpoder1 = (float) populacao1 + area1 + pib1 + (float) ptotur1 + (1/denspop1) + pibpc1;
        
    //leitura das informacoes alimentadas pelo usuario e verificacao das variaveis
    printf ("CARTA 1 CADASTRADA\n");
    printf ("Estado: %c\n", uf1);
    printf ("Codigo: %s\n", cod1);
    printf ("Cidade: %s\n", cidade1);
    printf ("Populacao: %d\n", populacao1);
    printf ("Area: %.2f km2\n", area1);
    printf ("PIB: %.2f bi de Reais\n", pib1);
    printf ("Pontos Turisticos: %d\n", ptotur1);
    printf ("Densidade Populacional: %.2f hab/km2\n", denspop1);
    printf ("PIB per capita: %.2f de Reais\n", pibpc1);
    printf ("Super Poder: %.2f\n", superpoder1);

    //interacao esperada para alimentacao do programa
    printf ("CARTA 2\n");
    printf ("Digite o estado: ");
    scanf (" %c", &uf2);
    printf ("Digite o codigo: ");
    scanf ("%s", &cod2);
    printf ("Digite o nome da cidade: ");
    scanf ("%s", &cidade2);
    printf ("Digite a populacao: ");
    scanf ("%d", &populacao2);
    printf ("Digite a área da cidade: ");
    scanf ("%f", &area2);
    printf ("Digite o PIB: ");
    scanf ("%f", &pib2);
    printf ("Digite a quantidade de pontos turisticos: ");
    scanf ("%d", &ptotur2);
 
    //calculo de dados de acordo com informacoes alimentadas pelos usuarios
    denspop2 = (float) populacao2/area2;
    pibpc2 = (pib2 /(float) populacao2)*1000000000;
    superpoder2 = (float) populacao2 + area2 + pib2 + (float) ptotur2 + (1/denspop2) + pibpc2;

    //leitura das informacoes alimentadas pelo usuario e verificacao das variaveis
    printf ("CARTA 2 CADASTRADA\n");
    printf ("Estado: %c\n", uf2);
    printf ("Codigo: %s\n", cod2);
    printf ("Cidade: %s\n", cidade2);
    printf ("Populacao: %d\n", populacao2);
    printf ("Area: %.2f km2\n", area2);
    printf ("PIB: %.2f bi de Reais\n", pib2);
    printf ("Pontos Turisticos: %d\n", ptotur2);
    printf ("Densidade Populacional: %.2f hab/km2\n", denspop2);
    printf ("PIB per capita: %.2f de Reais\n", pibpc2);
    printf ("Super Poder: %.2f\n", superpoder2);

     
    //menu para interacao e escolha do usuario
    printf ("= = = = MENU DO JOGO = = = =\n");
    printf ("Escolha o primeiro atributo:\n");
    printf ("1. Exibir nome das Cartas\n");
    printf ("2. Comparar População\n");
    printf ("3. Comparar Área\n");
    printf ("4. Comparar PIB\n");
    printf ("5. Comparar Pontos Turísticos\n");
    printf ("6. Comparar Densidade Demográfica\n");
    printf ("Digite a opção desejada:\n");
    scanf ("%d", &opcao1);

    printf ("COMPARATIVO ENTRE CARTAS\n");
    switch (opcao1)
    {
    case 1:
        printf ("Nome das cartas\n");
        printf ("Carta 1 - %s\n", cidade1);
        printf ("Carta 1 - %s\n", cidade2);
        break;
    
    case 2:
        
        printf("Atributo: População\n");
        printf ("Carta 1 - %s - %d\n", cidade1, populacao1);
        printf ("Carta 1 - %s - %d\n", cidade2, populacao2);
        if (populacao1 > populacao2) {
            printf ("Carta 1 %s venceu!\n", cidade1);
        } else if (populacao1 < populacao2) {
            printf ("Carta 2 %s venceu!\n", cidade2);
        } else {
            printf ("Houve um empate!\n");
        }
       break;
    
    case 3:
       printf("Atributo: Area\n");
       printf ("Carta 1 - %s - %.2f\n", cidade1, area1);
       printf ("Carta 1 - %s - %.2f\n", cidade2, area2);
       if (area1 > area2) {
            printf ("Carta 1 %s venceu!\n", cidade1);
       } else if (area1 < area2) {
            printf ("Carta 2 %s venceu!\n", cidade2);
       } else {
            printf ("Houve um empate!\n");
       }
       break;
   
    case 4:
        printf("Atributo: PIB\n");
        printf ("Carta 1 - %s - %.2f\n", cidade1, pib1);
        printf ("Carta 1 - %s - %.2f\n", cidade2, pib2);
        if (pib1 > pib2) {
            printf ("Carta 1 %s venceu!\n", cidade1);
        } else if (pib1 < pib2) {
            printf ("Carta 2 %s venceu!\n", cidade2);
        } else {
            printf ("Houve um empate!\n");
        }
        break; 
    
    case 5:
        printf("Atributo: Pontos Turísticos\n");
        printf ("Carta 1 - %s - %d\n", cidade1, ptotur1);
        printf ("Carta 1 - %s - %d\n", cidade2, ptotur2);
        if (ptotur1 > ptotur2) {
            printf ("Carta 1 %s venceu!\n", cidade1);
        } else if (ptotur1 < ptotur2) {
            printf ("Carta 2 %s venceu!\n", cidade2);
        } else {
            printf ("Houve um empate!\n");
        }
        break;
    
    case 6:
        printf("Atributo: Densidade Demográfica\n");
        printf ("Carta 1 - %s - %.2f\n", cidade1, denspop1);
        printf ("Carta 1 - %s - %.2f\n", cidade2, denspop2);
        if ((1/denspop1) > (1/denspop2)) {
            printf ("Carta 1 %s venceu!\n", cidade1);
        } else if ((1/denspop1) < (1/denspop2)) {
            printf ("Carta 2 %s venceu!\n", cidade2);
        } else {
            printf ("Houve um empate!\n");
        }
        break;
        
    default:
        printf ("Opção Inválida.\n");
        break;
    }

    printf ("= = = = MENU DO JOGO = = = =\n");
    printf ("Escolha o segundo atributo:\n");
    printf ("1. Exibir nome das Cartas\n");
    printf ("2. Comparar População\n");
    printf ("3. Comparar Área\n");
    printf ("4. Comparar PIB\n");
    printf ("5. Comparar Pontos Turísticos\n");
    printf ("6. Comparar Densidade Demográfica\n");
    printf ("Digite a opção desejada:\n");
    scanf ("%d", &opcao2);

    //teste para avaliar se escolha do usuario é igual ou diferente da anterior
    if (opcao1 == opcao2) {
        printf ("Você já escolheu essa opção. Escolha outra.\n");
    } else {
        printf ("COMPARATIVO ENTRE CARTAS\n");
        switch (opcao2)
        {
        case 1:
            printf ("Nome das cartas\n");
            printf ("Carta 1 - %s\n", cidade1);
            printf ("Carta 1 - %s\n", cidade2);
            break;
    
        case 2:
            printf("Atributo: População\n");
            printf ("Carta 1 - %s - %d\n", cidade1, populacao1);
            printf ("Carta 1 - %s - %d\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf ("Carta 1 %s venceu!\n", cidade1);
            } else if (populacao1 < populacao2) {
                printf ("Carta 2 %s venceu!\n", cidade2);
            } else {
                printf ("Houve um empate!\n");
            }
           break;
    
        case 3:
            printf("Atributo: Area\n");
            printf ("Carta 1 - %s - %.2f\n", cidade1, area1);
            printf ("Carta 1 - %s - %.2f\n", cidade2, area2);
            if (area1 > area2) {
                printf ("Carta 1 %s venceu!\n", cidade1);
            } else if (area1 < area2) {
                printf ("Carta 2 %s venceu!\n", cidade2);
            } else {
                printf ("Houve um empate!\n");
            }   
            break;
   
        case 4:
            printf("Atributo: PIB\n");
            printf ("Carta 1 - %s - %.2f\n", cidade1, pib1);
            printf ("Carta 1 - %s - %.2f\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf ("Carta 1 %s venceu!\n", cidade1);
            } else if (pib1 < pib2) {
                printf ("Carta 2 %s venceu!\n", cidade2);
            } else {
                printf ("Houve um empate!\n");
            }
            break; 
    
        case 5:
            printf("Atributo: Pontos Turísticos\n");
            printf ("Carta 1 - %s - %d\n", cidade1, ptotur1);
            printf ("Carta 1 - %s - %d\n", cidade2, ptotur2);
            if (ptotur1 > ptotur2) {
                printf ("Carta 1 %s venceu!\n", cidade1);
            } else if (ptotur1 < ptotur2) {
                printf ("Carta 2 %s venceu!\n", cidade2);
            } else {
                printf ("Houve um empate!\n");
            }
            break;
    
        case 6:
            printf("Atributo: Densidade Demográfica\n");
            printf ("Carta 1 - %s - %.2f\n", cidade1, denspop1);
            printf ("Carta 1 - %s - %.2f\n", cidade2, denspop2);
            if ((1/denspop1) > (1/denspop2)) {
                printf ("Carta 1 %s venceu!\n", cidade1);
            } else if ((1/denspop1) < (1/denspop2)) {
                printf ("Carta 2 %s venceu!\n", cidade2);
            } else {
                printf ("Houve um empate!\n");
            }
            break;
        
        default:
            printf ("Opção Inválida\n");
            break;
        }
    } 
   
    return 0;
}