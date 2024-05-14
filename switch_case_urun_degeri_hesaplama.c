#include <stdio.h>
#include <stdlib.h>
#define kitapVergi 4.0
#define temelGidaVergi 5.6
#define luksVergi 19.6
#define kitap 0
#define temelGida 1
#define luks 2

int main()
{
    int urunKodu;
    float fiyat;

    printf("Urun fiyatini ve kodunu giriniz:  \n");
    scanf("%f %d",&fiyat,&urunKodu);

    /*switch(urunKodu)
    {
        case kitap : printf("Fiyatimiz %.2f",fiyat+fiyat*kitapVergi/100);
        break;
        case temelGida : printf("Fiyatimiz %.2f",fiyat+fiyat*temelGidaVergi/100);
        break;
        case luks : printf("Fiyatimiz %.2f",fiyat+fiyat*luksVergi/100);
        break;
        default : printf("Lutfen dogru bir kod giriniz.");
    }*/

    if(urunKodu==kitap)
    {
        printf("Fiyatimiz %.2f",fiyat+fiyat*kitapVergi/100);
    }
    else if(urunKodu==temelGida)
    {
        printf("Fiyatimiz %.2f",fiyat+fiyat*temelGidaVergi/100);
    }
    else if(urunKodu==luks)
    {
        printf("Fiyatimiz %.2f",fiyat+fiyat*luksVergi/100);
    }
    else
    {
        printf("Lutfen dogru bir kod giriniz.");
    }

    return 0;
}
