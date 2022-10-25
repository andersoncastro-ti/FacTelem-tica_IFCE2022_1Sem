#include <stdio.h>

void f_soma(int n, int m1[n][n], int m2[n][n], int s1[n][n])
{
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            s1[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

void f_imprime_matriz(int n, int m[n][n])
{
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%2d", m[i][j]);
            if(j < n - 1) printf(" ");
        }
        printf("\n");
    }
}

#define TAMANHO 5
int main()
{
    int m1[TAMANHO][TAMANHO] = {{1, 2, 3, 4, 5},
                                {6, 7, 8, 9, 10},
                                {11, 12, 13, 14, 15},
				{16, 17, 18, 19, 20},
				{21, 22, 23, 24, 25}
                               };

    int m2[TAMANHO][TAMANHO] = {{25, 24, 23, 22, 21},
                                {20, 19, 18, 17, 16},
				{15, 14, 13, 12, 11},
				{10, 9, 8, 7, 6},
                                {5, 4, 3, 2, 1}
                               };

    int s1[TAMANHO][TAMANHO];
    f_soma(TAMANHO, m1, m2, s1);
    
    printf("Matriz M1\n");
    f_imprime_matriz(TAMANHO, m1);

    printf("\nMatriz M2\n");
    f_imprime_matriz(TAMANHO, m2);

    printf("\nMatriz S1\n");
    f_imprime_matriz(TAMANHO, s1);

    return 0;
}