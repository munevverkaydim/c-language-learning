#include<stdio.h>
#include<stdlib.h>

// iç içe döngü kurma

int main()
{
    int i, j; // i ve j kullanacağım ikii for döngüsü için değişkenimi ifade ediyor

    for(j=6 ; j>=1 ; j--){

        for(i=1 ; i<=3 ; i++){

            printf("Hello C ");
            if(i==3){
                printf("\n -----------------------------\n");
          }if(i!=3){
                printf(" - ");
            }
        }
    }
    return 0;
}