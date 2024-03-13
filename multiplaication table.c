#include<stdio.h>
void table(int range,int num)
{
    int mul;
    for(int i=1;i<=range;i++)
    {
        mul=num*i;
        printf("%d*%d=%d\n",num,i,mul);
    }

}
int main()
{
    int range=10;
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    table(range,num);
}
