//rotating an array by N places
//incomplete
#include<stdio.h>
int main()
{
 int arr[]={10,11,12,13,14,15};
 int n;
 printf("By how many places you want to rotate an array:");
 scanf("%d",&n);
 int temp;
 for(int i=0;i<n;i++)
 { for(int j=0;j<6;j++)
 {
   temp=arr[j];
   arr[j]=arr[i+1];
   arr[j+1]=temp;
 }
 }
 for(int i=0;i<6;i++)
 {
    printf("%d \n",arr[i]);
 }
 
}