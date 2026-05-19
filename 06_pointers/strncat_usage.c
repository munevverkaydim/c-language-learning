#include <stdio.h>
#include <string.h>

int main(){

    // C dilinde stringler aslında birer karakter dizisidir (char array).
    // Dizi isimleri (s1 ve s2) ise arka planda bu dizilerin bellekteki İLK elemanının ADRESİNİ gösteren birer POINTER'dır.
    
    char s1[20] = "bursa";
    char s2[20] = "ankara";

    /* strncat(hedef_pointer , kaynak_pointer , karakter_sayisi);
       Bu fonksiyon, kaynak dizinin (s2) ilk 'n' kadar karakterini alır, 
       hedef dizinin (s1) sonundaki '\0' (null) karakterini silerek oraya yapıştırır.
       
       Burada s2'nin ("ankara") ilk 2 karakteri olan "an" alınır ve s1'in ("bursa") sonuna eklenir.
    */

    strncat(s1,s2,2);

    // strncat fonksiyonu adresler (pointer) üzerinden doğrudan belleğe müdahale ettiği için s1 dizisi kalıcı olarak değişti.

    printf("%s",s1);

    return 0;
}