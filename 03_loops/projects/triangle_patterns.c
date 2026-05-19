#include<stdio.h>
#include<stdlib.h>

// # ile üçgen piramit yapan uygulama

/* #
   ##
   ###
   ####   yan yana konan # ler için bir döngüye ve alt alta konulanlar için de bir döngüye ihtiyacımız var */

int main()
{
    int i, j, number;
    printf("eneter a number:");
    scanf("%d",&number);

    for(i=1 ; i<=number ; i++){

        for(j=1 ; i>=j ; j++){  //burda i>=j yi görebilmek ÖNEMLİİ!
            printf("%d",j);
        }
        printf("\n");
    }

/* bu üçgeni çoktan aza yapmak istersek*/

    for(i=1 ; i<=number ; i++){  //dış for da bir değişikliğe gerek yok çünkü bu satır atlamamızı sağlıyor 

        for(j=number ; i<=j ; j--){  // değişikliği iç for da yaptık çünkü her satırda koyduğumuz sayıyı burda belirliyoruz
            printf("%d",j);                  // for un içinde j yi number a eşitlememizin ve j yerine number ı kullanmamızın sebebi number sabit değer for j den 1 azaltarak ilerlicek
        }
        printf("\n");
    }

/*eğer burda çıkan sayıları 1 den baslatarak arttıracak sekilde yazmak isteseydik*/

    for(i=1 ; i<=number ; i++){  //dış for da bir değişikliğe gerek yok çünkü bu satır atlamamızı sağlıyor 

     for(j=i ; j<=number ; j++){  // j=i de ÖNCE YAZMAMIZ GEREKEN İÇİNDE OLDUĞU FOR UN SAYACI   
            printf("%d",j);       // değişikliği iç for da yaptık çünkü her satırda koyduğumuz sayıyı burda belirliyoruz
        }
     printf("\n");
    }

    return 0;
}
//daha iyi kavrayabilmek adında # deseni yerine rakam tercih ettim