#include<stdio.h>
#include<stdlib.h>

//girilen sayı asal mı değil mi kontrol eden algoritma

int main()
{
    int number,i;
    i=2;

    printf("bir sayi giriniz:");
    scanf("%d",&number);

    if(number<0){
        printf("pozitif bir deger giriniz");
        return 0;
    }
 
    while(i < number/2){
        if(number%i == 0){
            printf("%d bir asal sayi olamaz %d ile bolunebiliyor.",number,i);
            return 0;
        }
        i++;
    }

    printf("%d bir asal sayidir.",number);

    return 0;
}