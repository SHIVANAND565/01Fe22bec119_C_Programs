#include<stdio.h>
int reverse (int);
int main()
{
   int num;
   printf("Enter the integer value to reverse\n");
   scanf("%d",&num);
   reverse(num);

}
int reverse(int num)
{
    int rev=0;
    int digit;
    while(num>0)
    {
      digit=num%10;
      rev=rev*10+digit;
      num=num/10;
    }
    printf("%d\n",rev);
}
