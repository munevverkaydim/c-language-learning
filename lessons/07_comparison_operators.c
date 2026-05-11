#include<stdio.h>
#include<stdlib.h>

int main()
{

     /*OPERATORS GRUPS
    1- aritmetik operatörler
    2- atama operatörleri
    3- karşılaştırma operatörleri 
    4- mantıksal operatörler 
    5- bitsel operatörler

    COMPARİSON OPARATORS
    == equal to
    != not equal to
    >  grater than
    <  less than
    >= greater than or equal to
    <= less than or equal to
        1 means true
        0 means false  */


            int x, y;
             x= 7;
             y= 5;
 
            printf("result:%d\n", x==y);
            printf("result:%d\n", x!=y);
            printf("result:%d\n", x>y);
            printf("result:%d\n", x<y);
            printf("result:%d\n", x<=y);
            printf("result:%d\n\n", x>=y);

    /*LOGİCAL OPERATORS
    &&  logical AND x<=5 && y==10 her iki ifade doğruysa true döndürür
    ||  logical OR  x<=5 && y==10 ifadelerden biri doğruysa true döndürür
    !   logical NOT !(x<=5 && y==10) sonucu terine çevir. Doğrusa false, yanlışsa true döndürür. */

            int a,b;
             a=1;
             b=6;

             printf("result:%d\n", a<b && a<3); // 1 && 1 = 1
             printf("result:%d\n", a==b || a==1); // 0 || 1 = 1
             printf("result:%d\n", !(a==b || a==1)); // !(0 || 1) = !(1) = 0


return 0;


}