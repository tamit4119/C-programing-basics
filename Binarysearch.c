#include <stdio.h>
#include <stdlib.h>


void binarysearch(int arr[], int elt, int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == elt)
        {
            printf("Element has been found at position %d\n",mid+1);
        }

        if (arr[mid] < elt)
        {
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
}

void main()
{
    int n,arr[10],elt;
    printf("\nEnter number of elements of the array:\n");
    scanf("%d",&n);
    printf("\nEnter elements: \n");
    for (int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("\nEnter element to be searched: ");
    scanf("%d", &elt);
    binarysearch(arr,elt,n);
}
