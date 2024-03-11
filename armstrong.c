#include<stdio.h>
int main()
{
    int n;
    printf("enter the number to check armstrong\n") ;
    scanf("%d",&n);
    int temp =n;
    int arm=0;
    while(n>0)
    {
        int rem=n%10;
        arm=arm+(rem*rem*rem);
        n=n/10;
    }
    if(temp==arm)   n
    {
        printf("Armstrong Number\n");
    }
    else {
        printf("not Armstrong Number\n");
    }
}
