#include<stdio.h>
#include<stdlib.h>

//girilen sayının tek mi çift mi olduğunu bulan algoritma

int main()
{
    int number;
    printf("enter your number:");
    scanf("%d",&number);

    if(number % 2 == 0)
        printf("your number is an even number");
    else
        printf("your number is an odd number");
    //eğer koşullarımızın altında tek satır yazıyosak küme parantezlerine gerek yok

return 0;    
}