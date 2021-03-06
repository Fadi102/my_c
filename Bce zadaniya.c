#include <stdio.h>                                                                                                                                                                                          /* Eeridel */
#include <stdlib.h>
#include <limits.h>
#define M 10
#define N 10
#define L 10

int main()
{
    int i, j, k, temp_min, temp_max, a[M][N], min_N[N], min_M[M], max_M[M], com_M[M], temp_com, com_iM;

    srand(time(NULL));

    printf("\n1.\n");
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            a[i][j] = rand() % L;
            printf("    a[%d][%d] = %d", i, j, a[i][j]);
        }
        printf("\n");
    }

    for(j = 0; j < N; j++)
    {
        temp_min = INT_MAX;
        for(i = 0; i < M; i++)
        {
            if(a[i][j] < temp_min)
            {
                temp_min = a[i][j];
            }
        }
        min_N[j] = temp_min;
    }
    for(i = 0; i < N; i++) printf("\n    min[0..%d][%d] = %d", M - 1, i, min_N[i]);

    printf("\n2.\n");
    for(i = 0; i < M; i++)
    {
        temp_max = INT_MIN;
        temp_min = INT_MAX;
        for(j = 0; j < N; j++)
        {
            if(a[i][j] < temp_min)
            {
                temp_min = a[i][j];
            }
            if(a[i][j] > temp_max)
            {
                temp_max = a[i][j];
            }
        }
        min_M[i] = temp_min;
        max_M[i] = temp_max;
    }
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(a[i][j] == min_M[i])
                a[i][j] = max_M[i];
            else
            if(a[i][j] == max_M[i])
                a[i][j] = min_M[i];
        }
    }

    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("    a[%d][%d] = %d", i, j, a[i][j]);
        }
        printf("\n");
    }

    printf("\n3.\n");

    for(k = 0; k < M; k++)
    {
        for(i = 0, com_M[k] = 1; i < N; i++)
        {
            for(j = i + 1, temp_com = 1; j < N; j++) if(a[k][i] == a[k][j]) temp_com++;
            if(com_M[k] < temp_com)
            {
                com_M[k] = temp_com;
            }
        }
    }

    for(i = 0; i < N; i++) printf("\n    com_M[%d] = %d", i, com_M[i]);

    for(i = 0, temp_max = INT_MIN; i < M; i++)
    {
        if(com_M[i] > temp_max)
        {
            temp_max = com_M[i];
            com_iM = i;
        }
    }

    printf("\n\nSequence number of the line with the largest number of common: %d\n", com_iM);






    return 0;
}