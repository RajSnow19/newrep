#include<stdio.h>
int main()
void quick_sort(int [],int,int);
int partition(int [],int,int)
{
int i,a[100],n,low,high;

printf("enter no of elements");
scanf("%d",&n)
printf("enter elements one by one ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
p=0;
r=n-1;
quick_sort(a,p,r);
printf("sorted earray is");
for(i=0;i<n;i++)
printf("%d"a[i]);
}
void quick_Sort(int arr[],int low,int  high)
{
    if (low < high)
    {

        pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high- 1; j++)
    {

        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}


void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        int pi = partition(arr, low, high);


        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}



