#include<stdio.h>
#include<stdlib.h>

int main()
{

char myNumber= 67;

printf("karakterinizin sayisal degeri:%d\n", myNumber);
printf("karakterinizin ASCII degeri:%c\n\n",myNumber);


char myCity[4] = "van";

printf("my city is:%s\n",myCity);
printf("my city is:%c\n\n",myCity); //karakterlerin ASCII değerleri vardır string metin oduğundan olmaz.
printf("v harfinin ASCII degeri: %d\n", myCity[0]); // 'v' -> 118
printf("a harfinin ASCII degeri: %d\n", myCity[1]); // 'a' -> 97
printf("n harfinin ASCII degeri: %d\n", myCity[2]); // 'n' -> 110
/*bir metinsel ifade gireceğin zaman %s kullanılır. 
%c tek bir karekter olarak depolar
C programı karekterleri tek tek depolar bu yüzden variable tanımlarken parantez içinde kelime sayısını vermeliyiz*/

char yourcity[17];

printf("EEnter a city:");
scanf("%s",&yourcity);
printf("your city is %s", yourcity);


}