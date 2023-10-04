#include <stdio.h>
void display(int arr[], int size) 
{
for (int i=o;i<size;i++)
{
printf("%d",arr[i];
}
printf("\n");
}
void insert(int arr[],int *size,int element,int position)
[
if(position<0||postion>*size)
{
printf("invalid posiotion for insertion.\n");
return;
}
for(int i=*size,i>position;i--)
{
arr[i]=arr[i-1];
}
arr[position]=element;
(*size)++;
}
void deleteElement(int arr[],int*size,int position)
{
if(position<0||position>=*size)
{
printf("invalid position for deletion.\n");
return;
}
for int =position,i<*sixe-1;i++)
{
arr[i]=arr[i+1];
}
(*size)--;
}
int search(int arr[],int size,int element)
{
for(i=0;i<size;i++)
{
if(arr[i]==element)
{
return i;
}
}
return -1;//element not found
}
void selection sort(int arr[],int size)
{
for(i=0;i<size-1;i++)
{
int minindex=i;
for(intj=i+1;j<size;j++)
{
if(arr[j],arr[minindex]
int temp=arr[i];
arr[i]=arr[minindex];
arr[minindex]=temp;
}
}
}iny main()


