#include<stdio.h>
#include<stdlib.h>

int main()
{
    //döngülerden ve switch den çıkmak için BREAK kullanırız.

    int i;
    for(i=0;i<=10;i++){
        if(i==5){
            break;
        }
        printf("%d\n",i);
    }
    
printf("\n");

    int a=0;
    while(a<=10){
        if(a==5){
            break;
        }
        printf("%d\n",a);
        a++;        
    }

printf("\n");
    
    int b;
    for(b=0;b<=10;b++){
        if(b==5){
            continue;// eğer b 5 e eşitse döngüde asağı kısım işleme girmez. yukarı çıkıp döngü tekrar eder o kısmı atlayarak.
        }
        printf("%d\n",b);
    }

printf("\n");

    int c=0;
    while(c<=10){
        if(c==5){
            c++; //c 5 e eşit olduğunda dögüde aşağıdaki kısım işleme girmeden dögünün tekrar iiçine girer. eğer c yi aşağı girmeden arttırmazsak c asagı inmediğinden artmaz.
            continue;
        }
        printf("%d\n",c);
        c++;        
    }

    return 0;
}