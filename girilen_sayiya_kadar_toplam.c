#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int toplam;

    printf("Lutfen bir sayi giriniz: \n");
    scanf("%d",&n);

    toplam=0;

    for(i=1;i<=n;i++)
    {
        if(i==n)
        {
            printf("%d",n);
        }
        else
        {
            printf("%d + ",i);

        }
        toplam=toplam+i;
    }
    printf("\nToplam= %d",toplam);
    return 0;
}
