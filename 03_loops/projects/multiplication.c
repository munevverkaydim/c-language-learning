#include<stdio.h>
#include<stdlib.h>

//basit çarpım tablosu oluşturan algoritma

int main()
{

    int i, number;
    i=0;

    printf("bir sayi giriniz:");
    scanf("%d",&number);

    if(number<0 || number>10){
        printf("lutfen 1 ile 10 arasinda bir sayi giriniz");
        return 0;
    }

    while(i<=10){
        printf("%d x %d = %d\n", number,i,i*number);
        i++;
    }

    return 0;
}