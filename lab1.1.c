#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int my_pow(int);
int main (){
    short b[2];
    long long size_byte1 = (long long) &b[1] - (long long) &b[0];
    int a = size_byte1 * 8 -1;
    long long max1 = (long long) my_pow(a) - 1;
    long long min1 = -1 * max1 -1;

    while(min1 != max1){
        printf("%lld,",min1);
        min1++ ;
    }
    printf("%lld\n",max1);
    return 0;
}
int my_pow(int y)
{   int result = 2;
    for(int i = 1; i < y; i++) {
        result *= 2;
    } return result;
}