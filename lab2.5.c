#include <stdio.h>

#define MAX_SIZE 101

int main()
{
    int matrix[MAX_SIZE*MAX_SIZE] = {0};
    int N;
    scanf("%d", &N);
   // if (N <= 0 ||  N >= MAX_SIZE){
     //   return 1;
    //}

    for(int i = 0; i < N; i++) {
        scanf("%d", matrix + i);
    }

    for (int i = 1; i < N; i++) {
        for (int j = 0; j < N - i; j++) {
            *(matrix + j + i*N) = *(matrix + j + (i-1)*N) + *(matrix + (j+1) + (i-1)*N) ;

        }
    }

    for(int i = 0;i <N;i++){
        for(int j = 0; j < N;j++){
            printf("%d ", *(matrix + j +i*N));
        }
        printf("\n");
    }
    return 0;
}