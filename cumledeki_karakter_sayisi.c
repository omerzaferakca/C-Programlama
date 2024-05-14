#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[100];
    int i=0;

    printf("Lutfen bir cumle giriniz: \n");
    gets(cumle);

    while(cumle[i])
    {
        i++;
    }

    printf("Karakter sayisi: %d ",i);

    return 0;
}
