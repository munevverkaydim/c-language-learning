#include<stdio.h>
#include<stdlib.h>

int main()
{

    /*OPERATORS GRUPS
    1- aritmetik operatörler(bu ders buna bakıcaz)
    2- atama operatörleri
    3- karşılaştırma operatörleri
    4- mantıksal operatörler
    5- bitsel operatörler
    
    
    ARİTATİK OPERATÖRLER
    + toplama
    - çıkarma
    / bölme
    * çarpma
    % mod alma(kalan bulma)
    ++ arttırma
    -- eksiltme
    */
    int x,y,sum,sub,mult,div,mod;
    x=5;
    y=2;
    sum=x+y;
    sub=x-y;
    mult=x*y;
    div=x/y;
    mod=x%y;

    printf("%d\n",sum);
    printf("%d\n",sub);
    printf("%d\n",sub);
    printf("%d\n",mult);
    printf("%d\n",div);
    printf("%d\n\n",mod);

    
    int myNumber;
    myNumber = 9;
    printf("%d\n",myNumber);
    printf("%d\n",++myNumber); //işlem bu statemant içinde gerçekleşiyor çünkü arttırma operatörü solda
    printf("%d\n",myNumber);
    printf("%d\n",myNumber++); //işlem bu statemant ta değil bir sonraki statement ta gerçekleşiyor çünkü arttırma operatörü sağda
    printf("%d\n",myNumber);

}