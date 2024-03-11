#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d ",&n);
    int pal=0;
    int num =n;
    while(num>0)
    {
        int r=num%10;
        pal=pal*10+r;
       num= num/10 ;
    }
    if (n==pal)
    {
        printf("Pa;indrome\n");
    }
    else
        printf("not palindrome\n");
}
