#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{

    int numbers[]={3,5,7,9,11,13}; // köşeli parantezin içine arraydeki variable sayısını girip(index değil!!) dizinin büyüklüğünü belirtebiliriz.
    
    int size = sizeof(numbers) / sizeof(numbers[0]);  // kodda array ı genişletince hem array büyüklüğünü hem döngüyü düzeltmemek için yaptık. 

    for(int i=0 ; i<=size ; i++){
        printf("%d\n",numbers[i]);
    }

    return 0;
}