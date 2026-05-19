#include <stdio.h>
#include <stdlib.h>
#include<time.h>


    // zar 100 kere atılıyor, hangi sayı kac kere geldi ALG

int main()
{ 
    int i, dice, howMany[7]={0,0,0,0,0,0,0};
    srand(time(NULL));
    for(i=1 ; i<=100 ; i++){
        dice = rand()%6+1;
        howMany[dice]++;
    }
    for(i=1 ; i<=6 ; i++){
        printf("%d zar numarasi %d kere geldi\n",i,howMany[i]);
    }



    return 0;
}