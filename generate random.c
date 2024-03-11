#include<stdio.h>
int main()
{
    int N=50;
    for(int i=0;i<10;i++)
    {
        int value= rand()%(N+1);

    printf("%d\n",value);
}
}
