#include<stdio.h>
#include<math.h>
float tax(float i);
main()
{
    float i,t;
    printf("Enter the income\n");
    scanf("%f",&i);
    t=tax(i);
    printf("Total tax=%f",t);
}
float tax(float i)
{
    float t;
    if (i<=150000)
    {
    t=150000*0;
    }
    else if(i>150000 && i<=300000)
    {
    t=(i-150000)*0.10;
    }
    else if(i>300000 && i<=500000)
    {
    t=(150000*0.10)+(i-300000)*0.20;
    }
    else
    {
    t=(15000*0.10)+(20000*0.20)+(i-500000)*0.30;
    }
    return t;
}
