//Kamylla Rodrigues - 1°P Turma B S.I.

#include <stdio.h>
#include <stdlib.h>

int main(){
    char ext;
    int op;

    printf("\nEscolha a forma que desejas descobrir a area: \n");
    printf("\n  1 - Circulo\n  2 - Cilindro\n  3 - Cubo\n  4 - Piramide\n\n  N: ");
    scanf("%d", &op);

    redCalculo(op);
    scanf("%c", ext);

    return 0;
}

const double PI = 3.14159;

double detCirculo(double raio){
    return PI*pow(raio, 2);
}

double detCilindro(double raio, double altura){
    return 2*PI*pow(raio, 2)+2*PI*raio*altura;
}

double detCubo(double lados){
    return 6*(pow(lados, 2));
}

double detPiramide(double areaBase, double areaLateral){
    return (areaBase+areaLateral);
}

void redCalculo(int op){
    double aux, raio, altura, lados, volume, base, areaBase, face, areaFace, areaLateral, areaTotal = 0;

    switch(op){
        //1 - Circulo
        case 1:
            printf("\n===========| C I R C C U L O |===========\n");
            printf("\nInforme o raio do circulo: ");
            scanf("%lf", &raio);
            aux = detCirculo(raio);
            printf("\nA area do circulo de raio %.2f e: %.2f\n", raio, aux);
            printf("\n=========================================\n");
        break;

        //2 - Cilindro
        case 2:
            printf("\n===========| C I L I N D R O |===========\n");
            printf("\nInforme o raio do cilindro: ");
            scanf("%lf", &raio);

            printf("Informe a altura do cilindro: ");
            scanf("%lf", &altura);

            aux = detCilindro(raio, altura);
            printf("\nA area total do cilindro de raio %.2f e altura %.2f e: %.2f", raio, altura, aux);

            volume = PI*pow(raio, 2)*altura;
            printf("\nO volume do cilindro e: %.2f\n", volume);
            printf("\n=========================================\n");
        break;

        //3 - Cubo
        case 3:
            printf("\n===============| C U B O |===============\n");
            printf("\nInforme a medida dos lados do cubo: ");
            scanf("%lf", &lados);

            aux = detCubo(lados);
            printf("\nA area total do cubo de lados %.2f e: %.2f\n", lados, aux);

            volume = pow(lados, 3);
            printf("\nO volume do cubo e: %.2f\n", volume);
            printf("\n=========================================\n");
        break;

        //4 - Piramide
        case 4:
            printf("\n===============| P I R A M I D E |===============\n");
            printf("\nInforme a medida da aresta da base da piramide: ");
            scanf("%lf", &base);

            printf("Informe a medida da altura da piramide: ");
            scanf("%lf", &altura);

            face = altura;
            areaBase = pow(base, 2);
            areaFace = ((base*face)/2);
            areaLateral = (areaFace*4);
            areaTotal = (areaBase+areaLateral);
            volume = ((areaBase*altura)/3);
            aux = detPiramide(base, altura);

            printf("\nA area da piramide quadrangular: %.2f\n", aux);
            printf("O volume da piramide quadrangular: %.2f\n", volume);
            printf("\n=================================================\n");
        break;
    }
}
