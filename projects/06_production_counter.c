#include<stdio.h>
#include<stdlib.h>

int main()
{

/* o güne kadar kaç ürün üretildiğini hesaplayan algoritma
 monday 2
tuesday 11
wednesday 3
thursday 7
friday 5*/

int numberofproducts, day;
char *dayname;

day=0;
numberofproducts=0;

printf("enter a number of day (1-5):");
scanf("%d",&day);

    switch (day)
    {
    case 5: numberofproducts += 5;
         if (day==5){dayname= "friday";}
    
    case 4: numberofproducts += 7;
        if (day==4){dayname="Thursday";}
        
    case 3: numberofproducts += 3;
        if(day==3){dayname="wednesday";}

    case 2: numberofproducts += 11;
        if(day==2){dayname="tuesday";}

    case 1: numberofproducts += 2;
        if(day==1){dayname="monday";}
    }
    // durumları tersten yazdık çünkü asağısındakileri toplamasını istiyoruz.

printf("%s gunu sonunda %d urun satilmistir.",dayname,numberofproducts);

    return 0;
}