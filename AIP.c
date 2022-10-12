//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define long 60
#define count_Of_People 12



int main(){
    //printf("Enter value:");
char enterValue[61];
    scanf("%s", enterValue);
    unsigned int i = 0;
    unsigned int a = 0;
    unsigned int j = 0;
    unsigned int k = 0;


  char people_Name[count_Of_People][long] = {
         "Ivanov Ivan Ivanovich, +7 (981)-888-33-22." ,
         "Kirillov Anton Efimovich, +7 (999)-888-11-00.",
         "Afanasieva Olga, +7 (981)-345-11-22.",
         "Lermontov Mikhail Yurievich, 8 (900)-876-54-31.",
         "Pushkin Alexander Sergeevich, +7 (111)-987-65-21.",
         "Fet Afanasy Afanasyevich, 8 (000)-234-54-34.",
         "Euclid, +7 (123)-456-78-99.",
         "Rob Pike, 8 (911)-742-79-04.",
         "Eugen Vlasoff, 8 (999)-345-34-65.",
         "Petr Petrovich Gas, 8 (992)-454-34-54.",
         "Nil Armstrong, 8 (947)-756-56-98.",
         "Alex White Hope, 8 (993)-947-37-84.",

        };
    char people_Number[count_Of_People][long] = {
            " +79818883322",
            " +79998881100",
            " +79813451122",
            " 89008765431",
            " +71119876521",
            " 80002345434",
            " +71234567899",
            " 89117427904",
            " 89993453465",
            " 89924543454",
            " 89477565698",
            " 89939473784",

    };


    for(; i < count_Of_People;i++ ){
        if(strstr(people_Name[i],enterValue) != NULL){

            printf("Found, %s\n",people_Name[i]);
            a += 1;
        } else{
            for(;j<count_Of_People;j++){
                if(strstr(people_Number[j],enterValue)!= NULL){
                    printf("Found, %s \n",people_Name[j]);
                    k += 1;
                }
            }


        }

    }

    if(a == 0 && k == 0){
        printf("not found\n");
    }


    return 0;
}
