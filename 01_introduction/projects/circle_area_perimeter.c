#include <stdio.h>
#include <stdlib.h>

int main()
{

/*dairenin çevresini ve alanını tanımlayan bir program
1- ihtiyacımız olan variable larıbul ve tanımla
2- variables type bul
3- formülü tanımla
4-kullanıcıdan verileri al
5-işlem yap
6- çıktı ver*/

float r, circumference, area;
const float PI= 3.1415;

printf("dairenin yaricapini girin:");
scanf("%f",&r);

circumference = 2 * PI * r;
area = PI * r * r;

printf("dairenin cevresi: %f\n", circumference);
printf("dairenin alani: %f\n\n\n", area);     
}