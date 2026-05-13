#include<stdio.h>
#include<stdlib.h>

/* Satranç şampiyonu ödül olarak altın yerine satranç tahtasının her karesi için bir önceki karenin 2 katı kadar buğday istemiş. tahta 64 kare ve ilk kare için 1 buğday alacak 
ise ne kadar buğdayı olacağını hesap eden algoritma*/

int main()
{
    int i; // i kare numarasını ifade ediyor
    double wheat, sumWheat; // buğday sayısı çok büyük değerler alacağı için double kullanıyoruz
    wheat = 1;
    sumWheat = 0; // başlamadan sayıların başlangıç değerini vermeyi unutma!! (i ye vermedik çünkü float içinde tanımlı)

    for(i=1 ; i<=64 ; i++){
        printf("Square %d: grains provided = %.0f\n",i,wheat);
        sumWheat += wheat;
        wheat *= 2;
    }
    printf("\nTotal grains of wheat collected: %.0f\n",sumWheat);

    return 0;
}