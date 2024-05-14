#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aci,aci1,aci2;

    printf("Uc aci giriniz: \n");
    scanf("%d%d%d",&aci,&aci1,&aci2);

    if(aci+aci1+aci2==180)
    {
        if((aci==60)&&(aci1==60)&&(aci2==60))
        {
            printf("Bu bir eskenar ucgendir.");
        }
        else if(aci==aci1 || aci1==aci2 || aci==aci2)
        {
            printf("Bu bir ikizkenar ucgendir.");
        }
        else
        {
            printf("Bu bir cesitkenar ucgendir.");
        }
    }
    else
    {
        printf("Acilar ucgen olusturmaz.");
    }

    return 0;
}




