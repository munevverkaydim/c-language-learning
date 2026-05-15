#include <stdio.h>
#include <stdlib.h>

void menu();
int absolute(int);
int max(int, int);
int min(int, int);
int square(int);
int cube(int);

int main()
{
    int choosen;
    int x, y;
    menu();
    printf("choose a number (1-5):");
    scanf("%d",&choosen);

    switch(choosen){
        case 1: printf("enter a number");
                scanf("%d",&x);
                printf("absolute:%d",absolute(x));  //fonksiyonu çağırırken sadece değişken ya da sabit verirsin. Türleri yazmazsın.
                
        break; 

        case 2: printf("enter two number");
                scanf("%d%d",&x,&y);
                printf("max:%d",max(x,y));
        break;

        case 3: printf("enter two number");
                scanf("%d%d",&x,&y);
                printf("min:%d",min(x, y));
        break;

        case 4: printf("enter a number");
                scanf("%d",&x);
                printf("square:%d",square(x));
        break;

        case 5: printf("enter a number");
                scanf("%d",&x);
                printf("cube:%d",cube(x));
        break;

    }

    return 0;
}

void menu(){
    printf("\n");
    printf("**************\n");
    printf("     MENU     \n");
    printf("**************\n");
    printf("1- absolute\n");
    printf("2- max\n");
    printf("3- min\n");
    printf("4- square\n");
    printf("5- cube\n");
}

int absolute(int x){
    if(x>=0){
        return x;
    }else{
        return -x;
    }
}

int max(int x, int y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}

int min(int x, int y){
    if(x>y){
        return y;
    }else{
        return x;
    }
}

int square(int x){
    return x*x;
}


int cube(int x){
    return x*x*x;
}