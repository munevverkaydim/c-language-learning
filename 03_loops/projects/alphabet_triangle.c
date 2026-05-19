#include<stdio.h>
#include<stdlib.h>

/*  A   harf üçgen algoritması 
    BB
    CCC  
        alt alta yazacağım sayılar için bir döngüye,
        yan yana yazacağım saılar için de bir döbgüye ihtiyacım var. */

int main()
{
    int i, j;
    char input, character; 
    character = 'A'; // bizim bir başlangıç değerine ihtiyacımız var (ASCII sisteminden ilerleyeceğiz, her karakter artışında bir değer artar ASCII değeri)

    printf("enter a uppercase letter:");
    scanf("%c",&input);

    for(i=1 ; i<=(input - character + 1) ; i++){  //satır sayısını kontrol eder.
        for(j=1 ; j<=i ; j++){
            printf("%c",character + i - 1); // ilk satırda "A" olması için ilk i değeri olan 1 ekledikten sonra 1 çıkartmamız lazım
        }
        printf("\n");
    }
    
    return 0;
}