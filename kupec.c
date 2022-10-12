#include <stdio.h>

int main(){

    int rub,kop;
    int rest = 0;
    scanf("%d%d",&rub,&kop);
    int n;

    if (rub == 0){
        n = 0;
        rest+=kop;
        printf("%d %d",n,rest);
    }
    else if(rub >= 1){
        n = rub;
        kop -= 5*n + n * kop;
        rest += kop;
        printf("%d %d",n,rest);

    }
    else{
        printf("Error!");
    }






    return 0;


}

