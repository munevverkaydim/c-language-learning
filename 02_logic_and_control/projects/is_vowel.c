#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>

//harfin sesli ya da sessiz harf olduğunu belirten algoritma

int main()
{

    char letter;
printf("enter your letter:");
scanf("%c",&letter);

    switch(tolower(letter)){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("your letter %c is a vowel", letter);
            break;
        default:
            printf("your letter %c is a consonant or not a letter.", letter);
            break;
    }
    return 0;
}