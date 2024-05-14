#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int fakSayi)
{
    int i;
    int sonuc=1;
    for(i=1;i<=fakSayi;i++)
    {
        sonuc = sonuc*i;
    }
    return sonuc;
}

int main()
{
    int sayi;
    printf("Lutfen bir sayi giriniz: \n");
    scanf("%d",&sayi);
    printf("Faktoriyeli= %d",faktoriyel(sayi));
    return 0;
}
