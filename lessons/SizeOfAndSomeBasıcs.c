    #include<stdio.h>
    #include<stdlib.h>

    int main()

    {

        /*daha temiz bir ifade için variable türünün tanımlaması ve tanımlamayı farklı statemant larda ifade etmek daha iyidir.*/
        int mynumber;
        mynumber = 8;
        char myletter;
        myletter = 'c';  //burda tırnak kullanamayız. tek tırnak zorunlu.
        float myletter2;
        myletter2 = 7.89;
        double myletter3;
        myletter3 = 1.234;

        /*SİZEOF fonksiyonu variable ların (integer, karakter float..vs) ne kadar yer kapladığını söyler.
        format specifier ı %ZU dur.*/

        printf("size int: %zu\n",sizeof(int));
        printf("%d\n",mynumber);

        printf("size char: %zu\n",sizeof(char));
        printf("%c\n",myletter);

        printf("size float: %zu\n",sizeof(float));
        printf("%f\n",myletter2);

        printf("size double: %zu\n",sizeof(double));
        printf("%lf\n",myletter3);


        /*eğer mevcut variable a yeni bir değer atarsak program sonra atadığımız değeri kabul eder.*/

        mynumber=11;

        printf("%d\n",mynumber);


        /*eğer aynı tür variable atayacaksam virgülle ayırarak yazabilirim.*/

        int number, number2, mysum, myextraction, mydevision, mymultiplication;
       
        number = 25;
        number2 = 5;
        
        mysum = number + number2;
        myextraction = number - number2;
        mydevision = number / number2;
        mymultiplication = number * number2;

        printf("%d\n",mysum);
        printf("%d\n",myextraction);
        printf("%d\n",mydevision);
        printf("%d",mymultiplication);


    }