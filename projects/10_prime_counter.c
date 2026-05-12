#include<stdio.h>
#include<stdlib.h>

// girilen sayıya kadar olan asal sayıları bulan bir algoritma  !!!!!!!!!

/* öncelikle nasıl bir yol izleyeceğimize bakalım:
    2 3 ... 100 -> girdiğimiz sayıya kadar olan tüm sayıları tek tek değerlendirmemiz gerek (asal sayılar 2 den başladığından 2 den başlicaz) bunun için bir "FOR" döngüsü
    8/2  8/3  8/4 -> bu sayılardan aldığımız her sayıyı sayının yarısına kadar olan sayılardan bölündüğü var mı diye bakmamız lazım bunun için de "FOR" döngüsü
    eğer bölündüğü varsa asal değil yoksa asal bu koşul ifade ettiği için "İF" e ihtiyacımız da var
    değişkenlerimiz; number girilen sayı, i sayının kendisi, k böldüğümüz sayı olsun
    Bizim bu algoritmayı kolaylaştırmak için bir de control değerine ihtiyacımız var eğer ikinci forda bölen çıkarsa control değeri bir sayıya, çıkmazsa başka bir sayıya eşitleyelim */

int main()
{

    int number;

    printf("enter a number:");
    scanf("%d",&number);

    for(int i=2 ; i<=number ; i++){ //burdaki i, girilen sayıya kadar olan tüm sayıların yerini alcak
                int control = 1;

        for(int k=2 ; k<=i/2 ; k++ ){
            if(i%k==0){
                control = 0;
                break;
            }
        }//iç for bitti
        if(control == 1){
            printf("%d\n",i);
        }
        
    }//dış for bitti


    return 0;
}