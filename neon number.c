//* neon number
//*a number where the sum of digits of the square of the number is equal to the number
#include<stdio.h>
int checkneon(int);
int main()
{
    int num;
    scanf("%d",&num);
    int neon=checkneon(num);
    if(neon==1)
    {
        printf("True,the given number is neon number\n");
    }
    else
    {
        printf("false ,the given number is not neon number\n");
    }
}
int checkneon(int num)
{
    int sq= num*num;
    int n=sq;
    int digit;
    int s=0;
    while(n!=0)
    {
        digit=n%10;
        s=s+digit;
        n=n/10;
    }
    if(s==num)
    {
        return 1;
    }
    return 0;
}
