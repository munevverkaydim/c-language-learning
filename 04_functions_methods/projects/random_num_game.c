#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Sayı tahmin oyunu algoritması

int main(){

    int guessNumber=0, Number, guessCount=0, score=100;
    srand(time(NULL)); // srand seed(baslangıc noktası, tohum) belirler rand fonksiyonu için
    Number=rand()%100+1; // rastgele sayıları dizer + kısmı hem baslangıc(0+1=1) değerine hem de max değeri(99+1=100) etkiler

    printf("bir sayi tuttum\nTahmin et!\n");

    while(guessNumber!=-1){
        printf("Tahminini gir(-1 cikis):");
        scanf("%d",&guessNumber);
        guessCount++;
        
        if(guessNumber==-1){
            printf("tutulan deger %d idi. Oyundan cikiliyor.\n", Number);
        break;

        }
        if(guessNumber==Number){
        printf("tahmininiz dogru! %d. tahminde bildiniz\n Skorunuz 100 uzerinden:%d\n", guessCount,score);
        (score>70) ? printf("harikasin :)") : printf("daha cok calis :("); // kısaltma if else komudu
        break;
        
        }else{
            if(guessNumber<Number){
                printf("Daha buyuk bir deger girin!\n");
                score -= 10;
            }else{
                printf("Daha kucuk bir deger girin!\n");   
                score -= 10;        
            }
        }
    }

    return 0;
}