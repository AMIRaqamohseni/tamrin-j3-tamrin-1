#include <stdio.h>
#include <math.h>
int main() {
    double p,i,n,Payment,up,down;
    printf("qeymat mashin ba kasr pish qest");
    scanf("%lf",&p);
    printf("karmozd ra vared konid");
    scanf("%lf",&i);
    printf("Tedad qest ra vared konid ");
    scanf("%lf",&n);
    i = (i /12);
    Payment = ( i * p ) / ( 1 -  pow (1 + i  ,-n ));
    printf("%.2lf  ",Payment/n);
}
