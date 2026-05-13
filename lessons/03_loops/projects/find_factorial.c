#include<stdio.h>
#include<stdlib.h>

//faktoriyel hesaplayan algoritma

int main()
{
    int number, factorial; // number: kullanıcıdan alınan sayı, factorial: sonucun tutulacağı değişken
    factorial = 1;
    
    printf("enter a number:");
    scanf("%d",&number);

    for(int i=1 ; i<=number ; i++){
        factorial *= i;
    /* 
       Döngü 1'den başlar ve girilen sayıya (dahil) kadar devam eder.
       Her adımda mevcut factorial değeri i ile çarpılarak güncellenir.
       Örneğin sayı 4 ise: 1*1=1 -> 1*2=2 -> 2*3=6 -> 6*4=24 sonucuna ulaşılır.
    */
    }
    printf("%d! = %d",number, factorial);

    return 0;
}