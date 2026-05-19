    #include <stdio.h>
    #include <stdlib.h>
    #include<math.h>

    /* üç sayının ortalamasını hesaplayan algoritma*/

    int main()
    { 
        float number[3], average;
        printf("enter 3 values:");
        scanf("%f %f %f", &number[0], &number[1], &number[2]);

        average = (number[0] + number[1] + number[2]) / 3;

        printf(" average is %.3f", average);
        

        return 0;
    }   