#include<stdio.h>
#include<stdlib.h>

//RECURSİON FUNCTİONS (özyinelemeli fonksiyonlar)

int sumNumber(int);
int main()
{
    int result = sumNumber(5);
    printf("%d",result);

    return 0;
}

int sumNumber(int i){
    if(i>0){
        return i + sumNumber(i - 1);
    }else{
            return 0;
        }
}


/* burda fonksiyonun çalışma mantığı karmaşık.
ilk önce i 5 olarak tanımlanmış bu şekilde fonksiuon aşamaları:
  5 + sumNumber(4)    burda yine fonksiyon kullanılcak if koşuluna uyuyor
  5 +   4 + sumNumber(3)   aynı şekilde 3 de uyuyor koşula
  5 +   4 +   3 + sumNumber(2)
  5 +   4 +   3 +   2 + sumNumber(1)
  5 +   4 +   3 +   2 +   1 + sumNumber(0)   artık 0 koşulu sağlamadığı için else komudunba inip döngüden çıkaacak
  = 15   */