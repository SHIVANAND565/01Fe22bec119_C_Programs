#include<stdio.h>
int fibonacii(int) ;
int main()
{
    int n;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    if(n<1){
        printf("Invalid number of terms\n");
    }
    fibonacii(n);
}
int fibonacii( int n)
{
    int first=0;
    int second=1;
    for(int i=0;i<n;i++)
    {
        int num=first+second;
        first=second;
        second=num;
        printf("%d ",num);
  }
}
