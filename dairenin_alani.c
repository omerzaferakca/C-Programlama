#include <stdio.h>
#include <stdlib.h>
#define PI 3.141

int main()
{
    float yariCap,alan;

    printf("Lutfen dairenin yari capini giriniz: ");
    scanf("%f",&yariCap);

    alan=PI*yariCap*yariCap;

    printf("Dairenin alani= %.3f",alan);

    return 0;
}
