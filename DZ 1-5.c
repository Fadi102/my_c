#include <stdio.h>
#include <limits.h>
#define N 2
#define M 10
main() {
    int arr[N][M], i, j,d,id;
    d=0;
    for (i=0; i<N; i++) {
        for (j=0; j<M; j++) {
            arr[i][j] = rand() % 128;
            printf(" |%2d| ", arr[i][j]);
        }
        printf("\n");
    }
    for (j=0; j<M; j++) {
        for (i=1; i<=N; i++){

            if (arr[i][j] %2!=0)
            d++;
            }

        if(d==2)
         id=j;

        d=0;
}
        printf("%d",id);
    return (0);
}