#include<stdio.h>
float temp(float);
int main()
{
    float f;
    printf("enter he temperature in fahrenheit:\n");
    scanf("%f",&f);
    temp(f);

}
float temp(float f)
{
    int t;
    t=((f-32)*5/9);
    printf("fahrenheit to clesius= %f ",t);
}
