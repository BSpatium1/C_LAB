#include <stdio.h>
#include <math.h>

int main(){

    int a[2];
    long long size_byte = (long long) &a[1] - (long long) &a[0];
    long long max = (long long)pow(2, size_byte * 8 -1) - 1;
    long long int min = -1 * max -1;
    printf("int = %lld , max = %lli , min = %lli\n",size_byte,max,min);




    short b[2];
    long long size_byte1 = (long long)   &b[1] - (long long) &b[0];
    long long max1 = (long long)pow(2, size_byte1 * 8 -1) - 1;
    long long min1 = -1 * max1 -1;

    printf("short = %lld , max = %lli , min = %lli\n",size_byte1,max1,min1);


    unsigned short int c[2];
    long long size_byte2 = (long long)   &c[1] - (long long) &c[0];
    long long max2 = (long long)pow(2, size_byte1 * 8) - 1;
    short int min2 = 0;
    printf("unsigned short int  = %lld , max = %lli , min = %d\n",size_byte2,max2,min2);


    char d[2];

    long long size_byte3 = (long long)   &d[1] - (long long) &d[0];
    long long max3 = (long long)pow(2, size_byte3 * 8 -1) - 1;
    long long min3 = -1 * max3 -1;

    printf("char = %lld , max = %lli , min = %lli\n",size_byte3,max3,min3);


    unsigned char e[2];
    long long size_byte4 = (long long)   &e[1] - (long long) &e[0];
    long long max4 = (long long)pow(2, size_byte4 * 8) - 1;
    long long min4 = 0;

    printf("unsigned char = %lld , max = %lli , min = %lli\n",size_byte4,max4,min4);

    unsigned int f[2];
    long long size_byte5 = (long long)   &f[1] - (long long) &f[0];
    long long max5 = (long long)pow(2, size_byte5 * 8) - 1;
    long long min5 = 0;

    printf("unsigned int = %lld , max = %lli , min = %lli\n",size_byte5,max5,min5);

    unsigned long long int g[2];
    unsigned long long int size_byte6 = (unsigned long long int)   &g[1] - (unsigned long long int) &g[0];
    unsigned long long int  max6 = (unsigned long long int)pow(2, size_byte6 * 8) - 1;
    unsigned long long int  min6 = 0;

    printf("unsigned long long int = %llu , max = %llu , min = %llu\n",size_byte6,max6,min6);

    float h[2];
    long long size_byte7 = (long long)   &h[1] - (long long) &h[0];
    printf("float = %lld\n",size_byte7);

    double i[2];
    long long size_byte8 = (long long)   &i[1] - (long long) &i[0];
    printf("double = %lld\n",size_byte8);



    return 0;
}