#include<stdio.h>
#include<stdlib.h>

//girilen sayı asal mı değil mi kontrol eden algoritma

int main()
{
    int number,i;
    i=2;

    printf("enter a number:");
    scanf("%d",&number);

    if(number < 2){
        printf("%d is not a prime number.\n", number);
        return 0;
    }
 
    // Sayı 2 ise direkt asaldır (Döngüye girmeden aşağıya atlar)
    while(i <= number/2){
        if(number%i == 0){
            printf("%d is not a prime number because it is divisible by %d.",number,i);
            return 0;
        }
        i++;
    }

    printf("%d bir asal sayidir.",number);

    return 0;
}