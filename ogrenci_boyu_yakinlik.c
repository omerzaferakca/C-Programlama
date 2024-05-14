#include <stdio.h>
#include <stdlib.h>
#define tam 150

int main()
{
    //abs komutunu seve seve ogrendigim uygulama
    int no,boy,fark,minBoy,minNo;

    printf("Ogrenci no: \n");
    scanf("%d",&no);
    printf("Ogrenci boy: \n");
    scanf("%d",&boy);

    minNo=no;
    fark=abs(boy-tam);

    while(no>0)
    {
        printf("Ogrenci no: \n");
        scanf("%d",&no);
        printf("Ogrenci boy: \n");
        scanf("%d",&boy);

        if(abs(boy-tam)<fark)
        {
            fark=abs(boy-tam);
            minNo=no;
            minBoy=boy;
        }
    }

    printf("\n%d numarali ogrenci %d cm boyuyla %d cm e en yakindir.",minNo,minBoy,tam);

    return 0;
}
