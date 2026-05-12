#include<stdio.h>
#include<stdlib.h>

//harfin sesli ya da sessiz harf olduğunu belirten algoritma

int main()
{

    char letter;
printf("enter your letter:");
scanf("%c",&letter);

    switch(letter){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("your letter %c is a vowel", letter);

        default:
            printf("your letter %c is a consonant or not a letter.", letter);
    }




    return 0;
}