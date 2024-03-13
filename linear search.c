#include<stdio.h>
int linsearch(int*,int ,int);
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=4;
    int index=linsearch(arr,size,key);
    if(index!=-1)
    {
        printf("The element %d is in array at index %d\n",key,index);
    }
    else
        printf("Element is not in the array\n") ;

}
int linsearch(int *arr ,int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }

    }
    return -1;
}
