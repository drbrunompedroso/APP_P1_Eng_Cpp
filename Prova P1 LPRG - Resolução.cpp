/* Universidade de Mogi das Cruzes
   Lógica de Programação e Representação Gráfica
   Prof. Dr. Bruno Medina Pedroso
   Prova P1 - Resolução
*/

#include<stdio.h>
#include<math.h>

float rValue1,
      rValue2,
      rResult1,
      rResult2;
char sOperation;

main()
{
    printf("**************************************************************\n");
    printf("AVALIACAO DE LOGICA DE PROGRAMACAO - P1 \nALUNO: Prof. Dr. Bruno Medina Pedroso \nENGENHARIA ELETRICA \n");
    printf("Entre com o primeiro valor (V1): \n");
    scanf("%f",&rValue1);
    printf("Entre com o segundo valor (V2): \n");
    scanf("%f",&rValue2);
    printf("Defina Operacao: \n");
    printf("1 - SOMA \n2 - SUBTRACAO (V1-V2) \n3 - SUBTRACAO (V2-V1) \n4 - MULTIPLICACAO \n5 - DIVISAO (V1/V2)\n6 - DIVISAO (V2/V1) \n7 - POTENCIACAO (V1 e V2) (valor ao quadrado) \n8 - POTENCIACAO (V1 e V2) (valor ao cubo) \n");
    scanf("%s",&sOperation);

    switch(sOperation)
    {
        case '1':
        rResult1 = rValue1 + rValue2;
        printf("Resultado 1: %.2f \n",rResult1);
        break;

        case '2':
        rResult1 = rValue1 - rValue2;
        printf("Resultado 1: %.2f \n",rResult1);
        break;

        case '3':
        rResult1 = rValue2 - rValue1;
        printf("Resultado 1: %.2f \n",rResult1);
        break;

        case '4':
        rResult1 = rValue1 * rValue2;
        printf("Resultado 1: %.2f \n",rResult1);
        break;

        case '5':
        rResult1 = rValue1 / rValue2;
        printf("Resultado 1: %.2f \n",rResult1);
        break;

        case '6':
        rResult1 = rValue2 / rValue1;
        printf("Resultado 1: %.2f \n",rResult1);
        break;

        case '7':
        rResult1 = pow(rValue1, 2);
        rResult2 = pow(rValue2, 2);
        printf("Resultado 1: %.2f \n",rResult1);
        printf("Resultado 2: %.2f \n",rResult2);
        break;

        case '8':
        rResult1 = pow(rValue1, 3);
        rResult2 = pow(rValue2, 3);
        printf("Resultado 1: %.2f \n",rResult1);
        printf("Resultado 2: %.2f \n",rResult2);
        break;

        default:
        printf("OPERACAO INVALIDA \n");
        break;
    }

    printf("Analise (Resultado 1): ");

    if(rResult1 <= 10.00)
    {
        printf("Seu resultado e abaixo de 10 \n");
    }
    else if(rResult1 > 10.00 && rResult1 <= 20.00)
    {
        printf("Seu resultado esta acima de 10 e abaixo de 20 \n");
    }
    else if(rResult1 > 20.00 && rResult1 <= 50.00)
    {
        printf("Seu resultado esta acima de 20 e abaixo de 50 \n");
    }
    else if(rResult1 > 50.00 && rResult1 <= 100.00)
    {
        printf("Seu resultado esta acima de 50 e abaixo de 100 \n");
    }
    else if(rResult1 > 100.00)
    {
        printf("Seu resultado esta acima de 100 \n");
    }
    printf("************************************************************** \n");
}

