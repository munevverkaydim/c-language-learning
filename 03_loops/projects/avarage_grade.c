#include<stdio.h>
#include<stdlib.h>

//kullanıcıdan not alıp bu notların ortalamasını alan uygulama

/* kullanıcıdan değer almamız lazım ve bu aldığımız değerleri toplayıp aldığımız değer sayısına bölmemiz lazım.*/

int main()
{

    float examGrade, sumGrade, average;
    int numberofscore;
    examGrade = 0;
    sumGrade = 0;
    average = 0;
    numberofscore = 0;

    do{ //hiç koşul olmadan döngüye girdi
    printf("not giriniz (cikmak icin 101 giriniz):");
    scanf("%f",&examGrade);

    if(examGrade == 101){ // döngünün içinde ilk baktığımız şey çıkış notu verip vermemesi 
    break; //kullanıcı çıkış notu verdiyse döngüden çık
    }
    if(examGrade<0){
        printf("pozitif bir sayi giriniz.\n");
        continue; // negatif değer girildiğinde tekrar başa dön
    }
    sumGrade += examGrade; //bütün koşullar sağlandıktan sonra yapmam gereken iişleleri yapıyorum
    numberofscore++;
}while(examGrade != 101); //döngüden çıkabilmek için kullanmamız gereken sayı 
   
    if(numberofscore != 0){
    average = sumGrade / numberofscore;
    printf("not ortalamaniz %.2f",average);

    }else{
        printf("hic not girilmedi ortalama hesaplanmadi");
    }
    return 0;
}