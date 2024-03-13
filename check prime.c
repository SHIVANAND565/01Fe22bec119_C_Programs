#include<stdio.h>
void checkprime(int);
int main()
{

    int n;
    scanf("%d",&n);
    checkprime(n);
}
void checkprime (int n)
{
    int flag=1;
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0){
            flag=0;
        }
    }
    if(flag)
    {
        printf("the number is prime number\n");
    }
    else
        printf("The number is not prime number\n");
}
