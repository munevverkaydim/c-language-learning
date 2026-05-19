#include<stdio.h>
#include<stdlib.h>


int main()
{


    /*OPERATORS GRUPS
    1- aritmetik operatörler
    2- atama operatörleri (bu ders buna bakıcaz)
    3- karşılaştırma operatörleri
    4- mantıksal operatörler
    5- bitsel operatörler 
    
    ASSİGMANT OPERATORS (ATAMA OPERATÖRLERİ)
    
    += , x += 2 , x + 2 =
 
   -= , x -= 2 , x - 2 =
 
    *= , x *= 2 , x * 2 =

    /= , x /= 2 , x / 2 =

    %= , x %= 2 , x % 2 =
  
    bundan sonrası bit düzeyinde işlem yapar
    &= , X &= 2 , X % 2 =

    |= , X |= 2 , X | 2 =
 
    ^= , X ^= 2 , X ^ 2 =
    
    >>= , X >>= 2 , X >> 2 =

    <<= , X <<= 2 , X << 2 =
    
     
    & and            | OR             ^ XOR
   
    X  Y  AND        X  Y  OR         X  Y  XOR
    1  0   0         1  0   1         1  0   1
    1  1   1         1  1   1         1  1   0
    0  1   0         0  1   1         0  1   1
    0  0   0         0  0   0         0  0   0
    

   3 = 0  0  0  0  0   0   1   1
      2^7     ...    +2^2+2^1+2^0 = 

   7 = 0  0  0  0  0   1   1   1
      2^7     ...    +2^2+2^1+2^0 = 4+2+1=7

   12= 0  0  0  0  1   1   0   0
      2^7     ... 2^3+2^2+2^1+2^0 = 8+4+0+0=12


    */
    

    int myNumber;
    myNumber = 3;
    myNumber += 7; //10
    myNumber -= 2; //8
    myNumber *= 4; //32
    myNumber /= 8; //4
    myNumber %= 3; //1
    printf("%d\n",myNumber);


    int Number;
    Number = 3;
    Number &= 7;  /* 3 = 0  0  0  0  0   0   1   1  and
                     7 = 0  0  0  0  0   1   1   1
                         0  0  0  0  0   0   1   1  
                        2^7     ... 2^3+2^2+2^1+2^0 = 1+2=3 */

    printf("%d\n",Number);

    Number = 3;
    Number |= 7;   /* 3 = 0  0  0  0  0   0   1   1  or
                      7 = 0  0  0  0  0   1   1   1
                          0  0  0  0  0   1   1   1  
                         2^7     ... 2^3+2^2+2^1+2^0 = 1+2+4=7 */

    printf("%d\n",Number);


    int Numberr;
    Number = 7;
    Numberr ^= 12;  /*7 = 0  0  0  0  0   1   1   1  and
                     12 = 0  0  0  0  1   1   0   0
                          0  0  0  0  1   0   1   1  
                         2^7     ... 2^3+2^2+2^1+2^0 =8+0+2+1=11  */

    printf("%d\n",Numberr);


   int number_ ;
   number_ = 7;
   number_ <<= 2;  /*7 = 0  0  0  0  0   1   1   1 
                         0  0  0  1 < 1 < 1 < 0 < 0 
                        2^7    ... 2^3+2^2+2^1+2^0 = 0+0+4+8+16=28 */
   printf("%d\n",number_);

   int number1;
   number1 = 7;
   number1 >>= 2;  /*7 = 0  0  0  0  0   1   1   1 
                         0  0  0  0 > 0 > 0 > 0 > 1 
                        2^7     ... 2^3+2^2+2^1+2^0 = 1 */
printf("%d",number1);

    return 0;
}