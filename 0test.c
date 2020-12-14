#include <stdio.h>
void swaparr(int *p1,int *p2)
{
    int pot;
    pot=*p1;
    *p1=*p2;
    *p2=pot;
}
int partition(int arr[],int start,int end,int pivot)
{
    while(start<=end)
    {
        while(arr[start]<=pivot)
        {
            start++;
        }
        while(arr[end]>pivot)
        {
            end--;
        }
        if(start<=end)
        {
            swaparr(&start,&end);
            start++;
            end--;
        }
    }
    return start;
}

void quicksort(int arr[],int start, int end)
{
    int pivot=arr[(start+end)/2];
    int pivotposition=partition(arr,start,end,pivot);
    quicksort(arr,start,pivot);
    quicksort(arr,pivot+1,end);
        printarr(arr,end+1);
}

int main()
{
    arr[]={4,3,2,1}
    
}