#include <stdio.h>

int main(){

    //Estado
    char estado01, estado02;

    //Código da carta
    char cod1[20], cod2[20];

    //Nome da cidade
    char cidade01[20], cidade02[20];

    //População
    unsigned long int popul01, popul02;

    //Área
    float area01, area02;

    //PIB
    float pib01, pib02;

    //Número de pontos turísticos
    int pontoT1, pontoT2;

    //Densidade Populacional
    float densid1,densid2;

    //PIB per Capita
    float pibC1,pibC2;

    //Super Poder das duas cartas
    float super1, super2;

    //atributo para fazer a comparação
    int escolha1, escolha2;

    int resultado1, resultado2;


    printf("Super trunfo. Digite as informações para dois Estados e cidades\n");

    printf("===================================\n");
    //Entrada de dados de primeira cidade
    printf("Primeira cidade\n");
    printf("Digite a letra do primeiro Estado: ");
    scanf(" %c", &estado01);

    printf("Digite o código da primeira carta: ");
    scanf("%s", cod1);

    printf("Digite o nome da primeira cidade: ");
    scanf("%s", cidade01);

    printf("Digite o número da população: ");
    scanf("%lu", &popul01);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area01);

    printf("Digite o PIB(Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib01);

    printf("Digite a quantidade de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontoT1);

    printf("===================================\n");
    //entrada de dado da segunda cidade
    printf("Segunda cidade\n");
    printf("Digite a letra do segundo Estado: ");
    scanf(" %c", &estado02);

    printf("Digite o código da segunda carta: ");
    scanf("%s", cod2);

    printf("Digite o nome da segunda cidade: ");
    scanf("%s", cidade02);

    printf("Digite o número da população: ");
    scanf("%lu", &popul02);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area02);

    printf("Digite o PIB(Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib02);

    printf("Digite a quantidade de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontoT2);

    //Calculo para a Densidade Populacional
    densid1 = popul01 / area01;
    densid2 = popul02 / area02;

    //Calculo do PIB per Capita
    pibC1 = pib01 / popul01;
    pibC2 = pib02 / popul02;

    //calculo do Super Poder das duas cartas
    super1 = popul01 + area01 + pib01 + pontoT1 + pibC1 + (1 / densid1);
    super2 = popul02 + area02 + pib02 + pontoT2 + pibC2 + (1 / densid2);

    printf("===================================\n");
    //Saída de dados da primeira cidade
    printf("Informações da primeira cidade\n");
    printf("A letra do primeiro estado é: %c\n", estado01);
    printf("O código da primeira carta é: %s\n", cod1);
    printf("O nome da primeira cidade é: %s\n", cidade01);
    printf("O número da população é: %lu\n", popul01);
    printf("A área em quilômetros quadrados é: %.2f\n", area01);
    printf("O PIB da primeira cidade é: %.2f de reais\n", pib01);
    printf("A quantidade de pontos turísticos da cidade é: %d\n", pontoT1);
    printf("A Densidade Populacional é: %.2f\n", densid1);
    printf("O PIB per Capita da cidade é: %.2f\n", pibC1);
    printf("Super Poder: %.2f\n", super1);

    printf("===================================\n");
    //Saída de dados da segunda cidade
    printf("Informações da segunda cidade\n");
    printf("A letra do segundo estado é: %c\n", estado02);
    printf("O código da segunda carta é: %s\n", cod2);
    printf("O nome da segunda cidade é: %s\n", cidade02);
    printf("O número da população é: %lu\n", popul02);
    printf("A área em quilômetros quadrados é: %.2f\n", area02);
    printf("O PIB da segunda cidade é: %.2f de reais\n", pib02);
    printf("A quantidade de pontos turísticos da cidade é: %d\n", pontoT2);
    printf("A Densidade Populacional é: %.2f\n", densid2);
    printf("O PIB per Capita da cidade é: %.2f\n", pibC2);
    printf("Super Poder: %.2f\n", super2);

    printf("===================================\n");
    //Comparando os atributos das cidades
    printf("Escolha o primeiro atributo das cidades para fazer a comparação\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Pontos Turísticos.\n");
    printf("5. PIB per Capita.\n");
    printf("6. Densidade Populacional.\n");
    printf("7. Super Poder\n");
    printf("Você escolheu: ");
    scanf("%d", &escolha1);

    switch (escolha1) {
        case 1:
            printf("Você escolheu População.\n");
            resultado1 = popul01 > popul02 ? 1 : 0;
            break;
        case 2:
            printf("Você escolheu Área.\n");
            resultado1 =  area01 > area02 ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu PIB.\n");
            resultado1 = pib01 > pib02 ? 1 : 0;
            break;
        case 4:
            printf("Você escolheu Pontos Turísticos.\n");
            resultado1 = pontoT1 > pontoT2 ? 1 : 0;
            break;
        case 5:
            printf("Você escolheu PIB per Capita.\n");
            resultado1 = pibC1 > pibC2 ? 1 : 0;
            break;
        case 6:
            printf("Você escolheu Densidade Populacional.\n");
            resultado1 = densid1 < densid2 ? 1 : 0;
            break;
        case 7:
            printf("Você escolheu Super Poder.\n");
            resultado1 = super1 > super2 ? 1 : 0;
            break;
        default:
            printf("Escolha inválida, tente de novo!\n");
            break;
    }

    printf("Escolha o segundo atributo das cidades para fazer a comparação\n");
    printf("Atenção: O segundo atributo tem que ser diferente do primeiro!\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Pontos Turísticos.\n");
    printf("5. PIB per Capita.\n");
    printf("6. Densidade Populacional.\n");
    printf("7. Super Poder\n");
    printf("Você escolheu: ");
    scanf("%d", &escolha2);

    if(escolha1 == escolha2){
        printf("Você escolheu o mesmo atributo!\n");
    } else {
        switch (escolha2) {
         case 1:
            printf("Você escolheu População.\n");
            resultado2 = popul02 > popul01 ? 1 : 0;
            break;
        case 2:
            printf("Você escolheu Área.\n");
            resultado2 =  area02 > area01 ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu PIB.\n");
            resultado2 = pib02 > pib01 ? 1 : 0;
            break;
        case 4:
            printf("Você escolheu Pontos Turísticos.\n");
            resultado2 = pontoT2 > pontoT1 ? 1 : 0;
            break;
        case 5:
            printf("Você escolheu PIB per Capita.\n");
            resultado2 = pibC2 > pibC1 ? 1 : 0;
            break;
        case 6:
            printf("Você escolheu Densidade Populacional.\n");
            resultado2 = densid2 < densid1 ? 1 : 0;
            break;
        case 7:
            printf("Você escolheu Super Poder.\n");
            resultado2 = super2 > super1 ? 1 : 0;
            break;
        default:
            printf("Escolha inválida, tente de novo!\n");
            break;
    }
    }


    if (resultado1 > resultado2){
        printf("Rodada vencida pela Carta 1!\n");
    } else if (resultado2 > resultado1) {
        printf("Rodada vencida pela Carta 2!\n");
    } else {
        printf("Rodada empatada!\n");
    }

    return 0;
}