#include<stdio.h>
#include<stdlib.h>

// girilen sayılardan en büyüğünü ve en küçüğünü bulan algoritma

int main()
{
    int i, number, largestNumber, smallestNumber;
    i=1;
    printf("%d. number:",i);
    scanf("%d",&number); 
    smallestNumber = largestNumber = number;//döngüye girmeden değer atamamız lazım çünkü döngüde kullanacağız.
    i++;
    
    while(number!=0){ // koşul belirterek döngüye giriyoruz
        printf("%d. number:",i);
        scanf("%d",&number);
        if(number==0) break; //eğer tek satırda yazarsak süslü parantez kullanmak zorunda değiliz
        if(number > largestNumber) largestNumber = number;
        if(number < smallestNumber) smallestNumber = number; 
            i++;

        } // number değeri 0 a eşit olmayana kadar döngü devam eder.

        printf("smallest number is %d\n", smallestNumber);
        printf("largest number is %d", largestNumber);
    
    return 0;
}