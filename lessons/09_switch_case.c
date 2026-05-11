#include<stdio.h>
#include<stdlib.h>

int main()
{

    /* SWICH (anahtar)*/

int day;
day=4;

switch(day){

    case 1:printf("monday\n");
    break;

    case 2:printf("tuesday\n");
    break;

    case 3:printf("wednwsday\n");
    break;

    case 4:printf("thursday\n");
    break;

    case 5:printf("friday\n");
    break;

    case 6:printf("saturday\n");
    break; 

    case 7:printf("sunday\n");
    break;

    default:printf("there is no such a day\n ");
    break;
}

return 0;

//break, swich yapısından çıkmamızı sağlar. eğer koymazsak alt satıra iner.

}