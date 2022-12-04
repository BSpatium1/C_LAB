#include <stdio.h>
#include <string.h>
#include <limits.h>
#define TEST_NUMBER 1000
#define STR_SIZE 32
int main()
{
    int N ;
    int same;
    char* w0 = NULL;
    char* w1 = NULL;
    int l0, l1, start, inital_shift;
    char concated_word[STR_SIZE*2+1];

    scanf("%d",&N);
    if(N<1 || N > INT_MAX){
        return 1;
    }
    //printf("%d",N);
    char arr[TEST_NUMBER][2][STR_SIZE+1] = {0}; // test->word->char
    int j,k;
    for(int i =0;i <= N-1;i++) {
            scanf("%s", arr[i][0]);
            scanf("%s", arr[i][1]);
            arr[i][0][STR_SIZE] = '\0';
        arr[i][1][STR_SIZE] = '\0';
        //printf("%s\n",arr[i][0]);
        //printf("%s\n",arr[i][1]);

       // if (strlen(arr[i][0]) > STR_SIZE || strlen(arr[i][0]) > STR_SIZE) {
         //   return 1;
        //}
    }

    for(int i = 0;i < N;i++) {
        w0 = arr[i][0];
        w1 = arr[i][1];
        l0 = strlen(w0);
        l1 = strlen(w1);
        //if(l0 > STR_SIZE || l1 > STR_SIZE){
         //   continue;
       // }
        //printf("%d,%d\n",l0,l1);
        if (l0 > l1) {
            inital_shift = l0 - l1;
        } else {
            inital_shift = 0;
        }
        for (start = inital_shift; start < l0; start++) { // сдвигаем начало сравнения на один до тех пор пока не совпадет
            // сравнивает конец и начало
            same = 1;
            for (j = 0; j < l0-start; j++) {
                if (w0[start + j] != w1[j]) {
                    same = 0;
                    break;
                }
            }
            if (same == 1) break; // если совпал конец и начало
        }
        for (j = 0; j < start ; j++) { // start = 7
            concated_word[j] = w0[j];
        }
        for (k = 0; k < l1; k++) {
            concated_word[start] = w1[k];
            start++;
        }
        concated_word[start] = '\0';
        printf("%s\n", concated_word);
    }
    return 0;
}
