#include<stdio.h>
void merge (int arr1[],int m,int arr2[],int n,int arr3[])
{
    int i=0,j=0,k=0;
    while(i< m && j<n)
    {
        if(arr1[i]< arr2[j])
            arr3[k++]=arr1[i++] ;
        else
            arr3[k++]=arr2[j++];
    }
    while(i < m)
        arr3[k++]=arr1[i++];

    while(j<n)
        arr3[k++]=arr2[j++];

}
int main()
{
    int arr1[]={1,2,3,7} ;
    int arr2[]={0,2,4,5}  ;
    int m=sizeof(arr1)/sizeof(arr1[0]) ;
    int n= sizeof(arr2)/sizeof(arr2[0]);
    int p=m+n;
    int arr3[p];
    merge(arr1,m,arr2,n,arr3);
    //print merged array
    for(int i=0;i<p;i++)
    {
        printf("%d  ",arr3[i]);
    }
}
