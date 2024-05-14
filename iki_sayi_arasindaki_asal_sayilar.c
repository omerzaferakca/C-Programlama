#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2,sayac,i,j;

    printf("Lutfen iki sayi giriniz: \n");
    scanf("%d%d",&sayi1,&sayi2);

    printf(">> %d ve %d arasindaki asal sayilar << \n",sayi1,sayi2);

    for(i=sayi1;i<=sayi2;i++)
    {
        sayac = 0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                sayac++;
            }
        }
        if(sayac == 0 && sayi1 != 0 && sayi1 !=1)
    {
        printf("%d \n",i);
    }
    }



    return 0;
}
