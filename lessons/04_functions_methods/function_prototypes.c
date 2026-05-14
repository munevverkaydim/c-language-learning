#include<stdio.h>
#include<stdlib.h>

void theMessage(); //declaration (bildirim)
int sumNumber( int , int); //declaration
int main()
{
    int result = sumNumber(3,7);
    printf("result is %d\n",result);
    theMessage();
    return 0;
}

void theMessage(){ //declaration
    printf("i love c language"); //definition
}

int sumNumber(int x , int y){ //declaration
    return x + y; //definition
}