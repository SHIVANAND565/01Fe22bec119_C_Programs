#include<stdio.h>
int largest (int [],int n);
int main()
{
    int arr[]={10 ,324,60,1000,45} ;
    int n =sizeof(arr)/sizeof(arr[0]);
    printf("n=%d\n",n);
    largest(arr,n);

}
int largest(int arr[],int n)
{
    int max=arr[0];
    for(int i=0;i< n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];

        }
    }
     printf("Largest of array is %d\n",max);
}
