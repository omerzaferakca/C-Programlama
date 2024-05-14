#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,h;
    int tabanAlan, yanalAlan, toplamAlan, hacim;

    printf("Lutfen a, b ve h uzunluklarini sirasiyla giriniz: \n");
    scanf("%d%d%d",&a,&b,&h);

    tabanAlan=a*b;
    yanalAlan=2*a*h+2*b*h;
    toplamAlan=2*a*h+2*b*h+2*a*b;
    hacim=a*b*h;

    printf("Dikdortgen Prizmanin:\n Taban Alani: %d\n Yanal Alanlar Toplami: %d\n Toplam Alani: %d\n Hacmi: %d",tabanAlan,yanalAlan,toplamAlan,hacim);

    return 0;
}
