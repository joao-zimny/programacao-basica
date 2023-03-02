#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g, h, i, calc_prim, calc_sec, det;

    // Imprimindo a Matriz
    printf("Matriz:");
    printf("\n| A  B  C |");
    printf("\n| D  E  F |");
    printf("\n| G  H  I |\n");

    // Montando a Matriz
    printf("\nDigite o valor da posicao \"A\": ");
    scanf("%d", &a);
    printf("\nDigite o valor da posicao \"B\": ");
    scanf("%d", &b);
    printf("\nDigite o valor da posicao \"C\": ");
    scanf("%d", &c);
    printf("\nDigite o valor da posicao \"D\": ");
    scanf("%d", &d);
    printf("\nDigite o valor da posicao \"E\": ");
    scanf("%d", &e);
    printf("\nDigite o valor da posicao \"F\": ");
    scanf("%d", &f);
    printf("\nDigite o valor da posicao \"G\": ");
    scanf("%d", &g);
    printf("\nDigite o valor da posicao \"H\": ");
    scanf("%d", &h);
    printf("\nDigite o valor da posicao \"I\": ");
    scanf("%d", &i);

    // Apresentando o resultado da Matriz montada
    printf("\n| %d  %d  %d |", a, b, c);
    printf("\n| %d  %d  %d |", d, e, f);
    printf("\n| %d  %d  %d |\n", g, h, i);


    // Calculando
    calc_prim = (a * e * i) + (b * f * g) + (c * d * h);
    calc_sec = (c * e * g) + (a * f * h) + (b * d * i);
    det = calc_prim - calc_sec;
    printf("\nValor determinante da Matriz: %d", det);
}
