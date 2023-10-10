#include <stdio.h>
int main()
{
    int qty,dis=0;
    float rate,tot;
    printf("enter the quantity and rate\n");
    scanf("%d %f",&qty,&rate);
    if(qty>1000){
        dis=10;
        tot=(qty*rate)-(qty*rate*dis/100);
        printf("Total expenses=Rs %f",tot);
    }
    return 0;
}