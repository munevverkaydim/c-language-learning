#include <stdio.h>
#include <stdlib.h>
#include<math.h>

// MATEMATİK FONKSİYONLARI

// EXP FONKSİYONU

int main()
{
    int i;
    for(i=0 ; i<=5 ; i++){
        printf("e uzeri %d: %f\n", i, exp(i)); //exp fonksiyonu e nin parantezin içine yazdığımız kuvvetini alır
    }
    printf("\ne uzeri %d:%.3f",5,exp(5)); // %f de %.3f yazmak virgülden sonra 3 basamak yazdır demek. 3 yerine kaç yazarsan o kadar bamak alır. eğer %.f  yazarsan küsurat yazmaz.
   
   printf("\n2 uzeri %d: %f",5,exp2(5)); // exp2(i) seklinde yazarsam fonksiyonu 2 üzeri i yi alır 2 yerine tabanda olmasını istediğim her sayıyı yazabilirim
   //exp fonksiyonu her zaman float cinsinde
   
   printf("\n5 in karekoku: %f", sqrt(5)); // sqrt fonksiyonu SQUARE ROOT un kısaltımı karekök alır

   printf("\n2 uzeri 6: %f", pow(2,6)); //pow fonksyonu POWER kısaltımı tabanı da üssü de alarak üs alır


/*✅ 1. sqrt(x) → "Square Root" (Karekök)
Açılımı: Square Root

Anlamı: Bir sayının karekökü

Örnek: sqrt(9) → 3 çünkü 3² = 9

✅ 2. pow(x, y) → "Power" (Üs alma)
Açılımı: Power

Anlamı: x üzeri y (x^y)

Örnek: pow(2, 3) → 8 çünkü 2³ = 8

✅ 3. cbrt(x) → "Cube Root" (Küpkök)
Açılımı: Cube Root

Anlamı: Küpkök alma

Örnek: cbrt(27) → 3 çünkü 3³ = 27

✅ 4. exp(x) → "Exponential" (e üzeri x)
Açılımı: Exponential

Anlamı: e^x hesaplar (e ≈ 2.718...)

Örnek: exp(2) → e² ≈ 7.389

✅ 5. log(x) → "Natural Logarithm" (ln)
Açılımı: Logarithm (natural base)

Anlamı: e tabanında logaritma

Örnek: log(10) ≈ 2.302 (ln 10)

✅ 6. log10(x) → "Log base 10"
Açılımı: Logarithm base 10

Anlamı: 10 tabanında log

Örnek: log10(100) → 2

✅ 7. log2(x) → "Log base 2"
Açılımı: Logarithm base 2

Anlamı: 2 tabanında log

Örnek: log2(8) → 3

✅ 8. fabs(x) → "Float Absolute" (Mutlak Değer)
Açılımı: Floating-point Absolute

Anlamı: Kesirli sayıların mutlak değeri

Örnek: fabs(-3.7) → 3.7

✅ 9. abs(x) → "Absolute" (Tam sayı için mutlak değer)
Açılımı: Absolute

Örnek: abs(-7) → 7
(Dikkat! Bu stdlib.h içinde)

✅ 10. ceil(x) → "Ceiling" (Tavan)
Açılımı: Ceiling

Anlamı: Yukarı en yakın tam sayıya yuvarlar

Örnek: ceil(3.1) → 4.0

✅ 11. floor(x) → "Floor" (Zemin)
Açılımı: Floor

Anlamı: Aşağı en yakın tam sayıya yuvarlar

Örnek: floor(3.9) → 3.0

✅ 12. round(x) → "Round" (Yuvarlama)
Açılımı: Round

Anlamı: En yakın tam sayıya yuvarlar

Örnek: round(3.6) → 4.0

✅ 13. fmod(x, y) → "Floating-point Modulus"
Açılımı: Float Modulus

Anlamı: Ondalıklı kalan bulma

Örnek: fmod(7.5, 2.0) → 1.5

✅ 14. hypot(x, y) → "Hypotenuse" (Hipotenüs)
Açılımı: Hypotenuse

Anlamı: Dik üçgende kenarlardan hipotenüs bulur

Örnek: hypot(3, 4) → 5.0

✅ 15. Trigonometrik Fonksiyonlar: */

/*Fonksiyon	Ne alır?	Ne verir?	Açıklama
sin(x)	    Açı     	Oran	    Sinüs
asin(x) 	Oran	    Açı     	Ters sinüs (arc sin)
cos(x)	    Açı      	Oran	    Kosinüs
acos(x) 	Oran	    Açı    	    Ters kosinüs (arc cos)
tan(x)	    Açı     	Oran	    Tanjant
atan(x) 	Oran	    Açı	        Ters tanjant (arc tan) */
   

// MATEMATİKSEL FONKSİYONLARI DOUBLE OLARAK TANIMLAMAK LAZIM
    return 0;
}   