#include<stdio.h>
#include<stdlib.h>

int main()
{

//4 basamaklı bir sayının rakamlarını toplayan program

int number, sum, bolum, kalan;
sum=0;

printf("4 basamakli bir sayi giriniz:"); // sayııma ABCD dersem
scanf("%d",&number);

bolum = number / 1000; //binler basamağındaki sayı bölümüm olucak A
kalan = number % 1000;
sum += bolum;

printf("%d\n",bolum);

bolum = kalan / 100; //yüzler basamağındaki sayı bölümüm olucak   B        bölünen |__ bölen
kalan = number % 100; //                                                    ______ | bölüm                                                   
sum += bolum;          //                                                    kalan

printf("%d\n",bolum);

bolum = kalan / 10; //onlar basamağındaki sayı bölümüm olucak  C
kalan = number % 10;
sum += bolum;

printf("%d\n",bolum);

bolum = kalan / 1; //birler basamağındaki sayı bölümüm olucak   D
kalan = number % 1;
sum += bolum;


printf("%d\n",bolum);
printf("%d",sum);

return 0;


}