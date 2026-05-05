#include <stdio.h>
#include <stdlib.h>

int main()
{
/*3 adet sayı alıp bu sayıların karesini ve küpünü bulan bir program
1- ihtiyacımız olan variable larıbul ve tanımla
2- variables type bul
3- formülü tanımla
4-kullanıcıdan verileri al
5-işlem yap
6- çıktı ver*/

float number1, number2, number3, square, cube;

printf("3 tane sayi giriniz:");
scanf("%f %f %f",&number1, &number2, &number3);

printf("number1\t\tnumber2\t\tnumber3\n");
printf("--------\t---------\t---------\n");

printf("%f\t",number1);
printf("%f\t",number1*number1);
printf("%f\t\n",number1*number1*number1);

printf("%f\t",number2);
printf("%f\t",number2*number2);
printf("%f\t\n",number2*number2*number2);

printf("%f\t",number3);
printf("%f\t",number3*number3);
printf("%f\t\n",number3*number3*number3);


} 