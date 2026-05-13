#include <stdio.h>
#include <stdlib.h>

int main ()
{
    
    char MyLetter = 'C';
    int MyNumber = 77;
    float MyNumber2 = 8.45;
    double MyNumber3 = 678.909;

    printf("%c\n",MyLetter);
    printf("%d\n",MyNumber);
    printf("%f\n",MyNumber2);
    printf("%lf",MyNumber3);

    
/* VARİABLE yani değişken programdaki verileri bellekte tutmamızı sağlayan araçlardır
c data types: 
CHAR   1 byte characterin kısaltmasıdır. tek bir karakter/harf/sayı veya ASKII değerini saklar.
İNT    4 bytes integer yani tam sayıların tamamıdır. 
FLOAT  4 bytes ondalıklı sayıları saklar 7 basamak maks
DOUBLE 8 bytes ondalıklı sayıları saklar 16 basamak maks */



/* variables ları adlandırırken sadece sayı, harf ve alt çizgi kullanılabilir.
variables lara isim verirken özel karakter kullanamazsın. 
variables adlandırmaya sayı ile başlayamazsın.
adlar büyük harf küçük harfe duyarlıdır
adlara function adı veremeyiz*/


/*FORMAT SPECİFİERS
%c char veri tipini yazdırır
%d integer veri tipini yazdırır
%ld long integer veri tipini yazdırır
%f float veri tipini yazdırır
%s metinsel ifade yazdırır
%u unsigned veri tipini yazdırır
%lf double yani long fload veri tipini yazdırır
*/

}

// PRİNTF İÇİNDE FLOAT OLARAK DA YAZSAN SİSTEM ONU DOUBLE A CEVİRİR YANİ LF KULLANMAK ZORUNDA DEĞİLSİN PRİNTF TE. SCANF TE ZORUNLU