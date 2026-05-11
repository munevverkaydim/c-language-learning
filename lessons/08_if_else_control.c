#include<stdio.h>
#include<stdlib.h>

int main()
{
    int number;

    printf("enter a number:");
    scanf("%d",&number);

    /* 
    if       koşullu ifadeler için kullanırız  
    else     aynı koşul yanlışsa yürütülecek kod bloğunu ifade etmek için kullanılır
    else if  ilk koşul yanlışsa test edilecek yeni bir koşul ifade etmek için kullanılır 
    
    if kısaltması ?
    else kısaltması :   (if else komutları sık kullanıldığı için kullanılabilir tek satırda kullanılabilir.)*/

    

    if(number>0){
            if(number==100){
                printf("your number is amazing");
            }else{ 
                printf("your number is positive.\n");
            }
                
    }else if(number<0){
        printf("your number is negative.\n");
    }else{
        printf("your number is 0\n");
    }


    int score;
    printf("enter your test score:");
    scanf("%d",&score);
    (score >= 80)? printf("you passed the exam"): printf("you faild");

return 0;    
}