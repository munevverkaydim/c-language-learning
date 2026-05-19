    #include<stdio.h>
    #include<stdlib.h>

    int main()
    {
        /*    int i;
            i = 20;

            while(i>3){
                printf("%d - C is a wonderful program\n",i);
                i -= 4;
            }    */

            //koşulun doğruluğunu kontrol etmeden önce bir kez döngüyü çalıştırmak istiyorsak DO WHİLE kullanırız.

            int k;
            k=2;
            do{
                printf("%d\n",k);
                k++;
            }while(k<5);

        /*    int a;
            for(a=30; a>7; a-=8){   // for un içine ilk yazılan ifade değerimin başlangıcını, ikinci yazılan koşul, üçüncü ifade de sayacı belirtir.
                printf("%d\n",a);
            } */

        return 0;
    }