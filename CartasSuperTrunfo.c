#include <stdio.h>

int main(){

    char estado01[40];
    char cidade01[40], cidade02[40];
    char codigo01[5], codigo02[5];
    float populacao01, populacao02;
    float area01, area02;
    float pib01, pib02;
    float numero01, numero02;


    //Introdução
    printf("***Seja bem-vindo ao Super Trunfo Países*** \n");

    //Inserindo dados das cartas
    //Carta1

    printf("Digite aqui o nome do seu estado: \n");
    scanf("%s", &estado01);


    printf("Digite aqui o código da sua carta: \n");
    printf("[O código da sua carta de ser a primeira letra do estado mais um número. ex: A01, A02...]\n");
    scanf("%s", &codigo01);

      printf("Digite o nome da sua cidade: \n");
    scanf("%s", &cidade01);

    printf("Digite a população da sua cidade: \n");
    scanf("%f", &populacao01);

    printf("Digite a área territorial da sua cidade: \n");
    scanf("%f", &area01);

     printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib01);

     printf("Digite o número de pontos turísticos da sua cidade: \n");
    scanf("%f", &numero01);

    float densidade01 = populacao01 / area01;
    float capita01 = pib01 / populacao01;
    float super01 = populacao01 + area01 + pib01 - densidade01 + numero01;    

   //carta02


   printf("Digite aqui o código da sua segunda carta: \n");
    printf("[O código da sua carta de ser a primeira letra do estado mais um número. ex: A01, A02...]\n");
    scanf("%s", &codigo02);

    printf("Digite o nome da sua segunda cidade: \n");
    scanf("%s", &cidade02);

    printf("Digite a população da sua segunda cidade: \n");
    scanf("%f", &populacao02);

     printf("Digite a área territorial da sua segunda cidade: \n");
    scanf("%f", &area02);

    printf("Digite o PIB da sua segunda cidade: \n");
    scanf("%f", &pib02);

    printf("Digite o número de pontos turísticos da sua segunda cidade: \n");
    scanf("%f", &numero02);

    float densidade02 = populacao02 / area02;
    float capita02 = pib02 / populacao02;
    float super02 = populacao02 + area02 + pib02 - densidade02 + numero02;

   


    //Mostrando atributos das cidades

    //cidade1

    printf("Estado: %s\n", estado01);
    printf("Código da carta: %s\n", codigo01);
    printf("Nome da Cidade: %s\n", cidade01);
    printf("População: %.0f\n", populacao01);
    printf("Área: %.2f Km²\n", area01);
    printf("PIB: R$ %.2f \n", pib01);
    printf("Pontos turísticos: %.0f\n", numero01);
    printf("Densidade populacional: %.2f pessoas/km²\n", densidade01);
    printf("PIB per capita: R$%.3f \n", capita01);
    printf("SuperPoder: %.2f \n \n", super01);

    //cidade2

    printf("Estado: %s\n", estado01);
    printf("Código da carta: %s\n", codigo02);
    printf("Nome da Cidade: %s\n", cidade02);
    printf("População: %.0f\n", populacao02);
    printf("Área: %.2f Km²\n", area02);
    printf("PIB: R$ %.2f \n", pib02);
    printf("Pontos turísticos: %.0f\n", numero02);
    printf("Densidade populacional: %.2f pessoas/km²\n", densidade02);
    printf("PIB per capita: R$%.3f \n", capita02);
    printf("SuperPoder: %.2f \n \n", super02);



    //Comparações
    //População
   

    if(populacao01 > populacao02)
    {
        printf("População: %s ganhou \n", cidade01);

    }else if(populacao01 < populacao02)
    {
        printf("População: %s ganhou\n", cidade02);
    }else{
        printf("População: Empate\n");
    }
    //area

    if(area01 > area02)
    {
        printf("Área: %s ganhou\n", cidade01);

    }else if(area01 < area02)
    {
        printf("Área: %s ganhou\n", cidade02);
    }else{
        printf("Área: Empate\n");
    }
    //pib

    if(pib01 > pib02)
    {
        printf("PIB: %s ganhou\n", cidade01);

    }else if(pib01 < pib02)
    {
        printf("PIB: %s ganhou\n", cidade02);
    }else{
        printf("PIB: Empate\n");
    }

    //pontos turisticos

    if(numero01 > numero02)
    {
        printf("Pontos turísticos: %s ganhou\n", cidade01);

    }else if(numero01 < numero02)
    {
        printf("Pontos turísticos: %s ganhou\n", cidade02);
    }else{
        printf("Pontos turísticos: Empate\n");
    }

    //densidade

    if(densidade01 < densidade02)
    {
        printf("Densidade populacional: %s ganhou\n", cidade01);

    }else if(densidade01 > densidade02){
        printf("Densidade populacional: %s ganhou\n", cidade02);
    }else{
        printf("Densidade populacional: Empate\n");
    }

    //pib per capita

    if(capita01 > capita02)
    {
        printf("PIB per Capita: %s ganhou\n", cidade01);

    }else if(capita01 < capita02)
    {
        printf("PIB per Capita: %s ganhou\n", cidade02);
    }else{
        printf("PIB per capita: Empate\n");
    }
     //super poder

     if(super01 > super02)
    {
        printf("Super Poder: %s ganhou\n", cidade01);

    }else if(super01 < super02)
    {
        printf("Super Poder: %s ganhou\n", cidade02);
    }else{
        printf("Super poder: Empate\n");
    }


      







}