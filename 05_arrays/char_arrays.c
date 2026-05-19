#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    char name[]="munevver" ;
    printf("%s\n",name);
    printf("%c\n",name[1]);
    printf("%c\n",name[4]);

    // scanf ile sadece bir kelime alabliirsin kullanıcıdan. bir kac kelime için ""GETS""

    char myName [30];
    printf("enter your name:");
    fgets(myName, sizeof(myName),stdin); // fgets fonksiyonu kullanımında içine atanacak yer, büyüklüğü, okunacak yer yazılır. stdin>>standart input klavye
    printf("your name is:%s", myName);

    return 0;
}

// Kullanıcıdan metin almak için güvenli olmayan gets() yerine, 
// taşmaları önleyen güvenli fgets() fonksiyonu tercih edilmelidir. 