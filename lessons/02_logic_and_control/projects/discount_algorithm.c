#include<stdio.h>
#include<stdlib.h>

int main()
{

    /* aldığımız kitap sayısına göre indirim miktarını hesaplayan bir algoritma*/

int bookprice, orderquantity; //kitap fiyatı, sipariş miktarı
float discountrate, nodiscountprice, discountprice, sum; //indirim oranı, indirimsiz fiyat, indirimli fiyat, toplam

bookprice=20;
orderquantity=0;

printf("kac kitap siparis etmek istiyorsunuz:");
scanf("%d",&orderquantity);

if(orderquantity>=60){//sipariş miktarı>=60
    discountrate=0.30; //yüzde otuza tekabüle ediyor.
}else{
    if(orderquantity<60 && orderquantity>=30){//30<=sipariş miktarı<60
        discountrate=0.20;//yüzde yirmi
    }else if(orderquantity<30 && orderquantity>=10){//10<=sipariş miktarı<=30
        discountrate=0.12;//yüzde 12
    }else{//sipariş miktarının 10 dan küçük olduğu duruumlar
        discountrate=0.01; //yüzde 1
    }
}

nodiscountprice = orderquantity * bookprice;
printf("siparisin indirimsiz tutari:%.2f\n",nodiscountprice);

discountprice = nodiscountprice * discountrate;
sum = nodiscountprice - discountprice;
printf("siparisin indirimli tutari:%.2f\n",sum);

return 0;
}