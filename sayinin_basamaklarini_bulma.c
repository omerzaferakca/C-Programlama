#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,birler_bas,onlar_bas,yuzler_bas;

    printf("Lutfen bir sayi giriniz: \n");
    scanf("%d",&sayi);
    birler_bas=sayi%10;
    onlar_bas=sayi%100/10;
    yuzler_bas=sayi%1000/100;

    printf("Birler basamagimiz: %d \nOnlar basamagimiz: %d \nYuzler basamagimiz: %d",birler_bas,onlar_bas,yuzler_bas);

    return 0;
}
