#include<stdio.h>
#include<stdlib.h>

// FUNCTIONS 
/* ana fonksiyon dışında fonksiyon tanımlarken tam sayı döndürmüyorsa int olarak tanımlamak zorunda değiliz. fonksiyonun türü yoksa "void" olarak tanımlarız. (return 0 kullanmazken) */

    void myMassage(){
        printf("now i can write a function.\n");
    }

    void myList( char name[] , int age){  // function içindeki variable lara özel bir isim vermişler: PARAMETRE 
        printf("%s is %d years old.\n", name, age);
    }

int main()
{
    myMassage();
    myMassage();

    myList("munevver",20); // burda munevver ve 20 de birer ARGÜMAN
    myList("osman",10);

    return 0;
}