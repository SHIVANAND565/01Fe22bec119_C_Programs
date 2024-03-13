#include<stdio.h>
#include<math.h>
int main()
{
    float principal,rate,time;
    printf("Enter the principal\n");
    scanf("%f",&principal);
    printf("Enter the rate\n");
    scanf("%f",&rate);
    printf("Enter the time\n");
    scanf("%f",&time);
    float amount=principal*pow((1+rate/100),time);
    float CI =amount -principal;
    printf("Compound interest=%f\n",CI);
}
