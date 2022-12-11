#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#define MAX_TEST_NUMBER 100
#define MAX_ID_COUNT 50
#define MAX_ID_VALUE 1000000000
int main()
{
    int t;
    int l ;
    int l_max;
    int arr[MAX_TEST_NUMBER][MAX_ID_COUNT];
    int n[MAX_TEST_NUMBER];// кол во запросов
    int otvet[100];
    scanf("%d",&t);
    if(t > MAX_TEST_NUMBER){
        return 1;
    }
    for(int i = 0;i<t;i++){
        scanf("%d",&n[i]);
        if(n[i]> MAX_ID_COUNT || n[i] < 1){
            return 1;
        }
        for (int j = 0; j < n[i]; ++j){
            scanf("%i", &arr[i][j]);
            if(arr[i][j] < 1 || arr[i][j] > MAX_ID_VALUE) {
                return 1;
            }
        }
    }

    int a,b; // числа текущей последовательности
    int n_b; //  кол во одинаковых чисел заверщающих последнюю последовательность
    for(int r = 0;r<t;r++) {
        l_max = 0;
        if (n[r] == 1 || n[r] == 2) {
            otvet[r] = n[r];
            continue;
        }
        l = 2;
        a = arr[r][0];
        b = arr[r][1];
        if(a == b){
            n_b = 2;
        } else{
            n_b = 1;
        }

        for (int i = 2; i < n[r]; i++) {
            if (arr[r][i] != a &&  arr[r][i] != b && a != b){
                // начать новую посл
                // тогда нужно сделать это
                l = n_b+1;
                n_b = 1;
                a = arr[r][i-1];
                b = arr[r][i];
            }    else {
                if(a == b){
                    b = arr[r][i];
                }
                if(arr[r][i-1] == arr[r][i]){
                    n_b++;
                } else {
                    n_b = 1;
                }
                l++;
            }
            if (l > l_max) {
                l_max = l;
            }
        }
        otvet[r] = l_max;
    }

    for(int i = 0;i<t;i++){
        printf("%d\n",otvet[i]);
    }
    return 0;
}

