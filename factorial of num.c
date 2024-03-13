#include<stdio.h>
int factorial(int);
int main()
{
    int num,res;
    scanf("%d",&num);
    res=factorial(num);
    printf("Factorial of num %d is %d\n",num,res);
}
int factorial (int num)
{

    int res=1;
    for(int i=2;i<=num;i++)
    {
        res=num*factorial(num-1);
    }
    return res;
}
