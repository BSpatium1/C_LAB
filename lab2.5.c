#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N, i = -1;
    scanf("%i", &N);
    int matrix[100 * 100] = { 0 };
    while (++i < N)
        scanf("%i", matrix + i);

    int j = 1;
    for (int n_str = 1; n_str < N; ++n_str) {
        for (int n_clm = 0; n_clm < N - j; ++n_clm) {
            int i = N * n_str + n_clm;
            *(matrix + i) = *(matrix + i - N) + *(matrix + i - N + 1);
        }
        ++j;
    }

    for (int n_str = 0; n_str < N; ++n_str) {
        for (int n_clm = 0; n_clm < N; ++n_clm) {
            int i = N * n_str + n_clm;
            printf("%i ", *(matrix + i));
        }
        printf("\n");
    }

    return 0;
}