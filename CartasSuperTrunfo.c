#include <stdio.h>

int main(){
    char Estado1[50];
    char Estado2[50];
    char Codigo1[50] = "A01";
    char Codigo2[50] = "B01";
    char Cidade1[50];
    char Cidade2[50];
    int populaçao1;
    int populaçao2;
    float ARK1;
    float ARK2;
    float PIB1;
    float PIB2;
    int PT1;
    int PT2;
    float PBC1, PBC2, DSP1, DSP2;

    printf("Codigo da carta:%s\n", Codigo1);
    printf("Digite o estado da carta:\n");
    scanf("%s", Estado1);
    printf("Digite a cidade da carta:\n");
    scanf("%s", Cidade1);
    printf("Digite a populaçao da carta:\n");
    scanf("%d", &populaçao1);
    printf("Digite a Area em KM² da carta:\n");
    scanf("%f", &ARK1);
    printf("Digite o PIB da carta:\n");
    scanf("%f", &PIB1);
    printf("Digite o numero de pontos Turisticos:\n");
    scanf("%d", &PT1);


    printf("Codigo da carta: %s\n", Codigo2);
    printf("Digite o estado da carta:\n");
    scanf("%s", Estado2);
    printf("Digite a cidade da carta: \n");
    scanf("%s", Cidade2);
    printf("Digite a populaçao da carta:\n");
    scanf("%d", &populaçao2);
    printf("Digite a Area em KM² da carta:\n");
    scanf("%f", &ARK2);
    printf("Digite o PIB da carta:\n");
    scanf("%f", &PIB2);
    printf("Digite o numero de pontos Turisticos:\n");
    scanf("%d", &PT2);
    
    
    DSP1 = (float)populaçao1 / ARK1;
    DSP2 = (float)populaçao2 / ARK2;
    PBC1 = (float)PIB1 / populaçao1;
    PBC2 = (float)PIB2 / populaçao2;
   


    printf("-------------------------------\n");
    
    printf("Codigo da carta:%s\n", Codigo1);
    printf("Etado:%s \n", Estado1);
    printf("Cidade:%s \n", Cidade1);
    printf("Populaçao:%d \n", populaçao1);
    printf("Area em KM²:%.3f \n", ARK1);
    printf("PIB:%.3f \n", PIB1);
    printf("Pontos Turisticos:%d \n", PT1);
    printf("Densidade Populacional:%.2f \n", (float) DSP1);
    printf("PIB per capita:%.2f \n\n\n    ", (float) PBC1);

    printf("Codigo da carta:%s\n", Codigo2);
    printf("Etado:%s \n", Estado2);
    printf("Cidade:%s \n", Cidade2);
    printf("Populaçao:%d \n", populaçao2);
    printf("Area em KM²:%.4f \n", ARK2);
    printf("PIB:%.3f \n", PIB2);
    printf("Pontos Turisticos:%d \n", PT2);
    printf("Densidade Populacional:%.2pf \n", (float) DSP2);
    printf("Pib per capital:%.2f\n\n\n", (float) PBC2);





    return 0;

}