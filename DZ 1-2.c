#include <stdio.h>
#include <limits.h>
#define N 10
#define M 10
 main() {
   int arr[N][M], i, j,ro, min,max,maxch,minch;
   min=INT_MAX;
   max=INT_MIN;
  for (i=0; i<N; i++) {
  for (j=0; j<M; j++) {
    arr[i][j] = rand() % 256;
    printf(" |%3d| ", arr[i][j]);
}
    printf("\n");
}
    for (j=0; j<M; j++) {
    min=arr[0][j];
    for (i=1; i<N; i++)

   if (arr[i][j] < min){
   min = arr[i][j];
   minch=i;}


   printf(" %3d ", min);

}
   printf("\n");
   for (j=0; j<M; j++) {
    max=arr[0][j];
   for (i=1; i<N; i++)
   if (arr[i][j] > max){
    max = arr[i][j];
   maxch=i;}
    printf(" %3d ", max);
}
   for (j=0; j<M; j++) {
     min=arr[0][j];
      for (i=1; i<N; i++)
        arr[minch][j]=max;
        arr[maxch][j]=min;
}

       printf("\n");
return (0);
}
