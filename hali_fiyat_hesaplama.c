#include <stdio.h>
#include <stdlib.h>

int main()
{
    char haliTipi;
    float metre,twetty,bugs,spiderman;

    printf("Lutfen hali tipini seciniz: T B S \n");
    scanf("%c",&haliTipi);

    printf("Lutfen kac metre hali istediginizi yaziniz: \n");
    scanf("%f",&metre);


    if(haliTipi=='T')
    {
        printf("Odemeniz gereken tutar= %.2f",metre*18);
    }
    else if(haliTipi=='B')
    {
        printf("Odemeniz gereken tutar= %.2f",metre*17);
    }
    else if(haliTipi=='S')
    {
        printf("Odemeniz gereken tutar= %.2f",metre*19);
    }
    else
    {
        printf("Yanlis deger girdiniz.");
    }

    return 0;
}
