#include<stdio.h>
#include<stdlib.h>

//üs alan algoritma

float exponentation (float , int );

int main()
{
    float base=0 , result =0;
    int exponent=0;
    printf("enter base and exponent values:");
    scanf("%f %d",&base,&exponent); 
    result = exponentation(base,exponent);
    printf("result:%f",result);
}

float exponentation (float x, int y){
    int i;
    float result=1;
    if(y>0){
        for(i=0 ; i<y ; i++){
            result*=x;
        }
    }else{
        for(i=0 ; i<-y ; i++){
            result*=1/x;
        }
    }
    return result;
}