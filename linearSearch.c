/*Implement Linear search on a List using Array in C.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    int i,*a,n,x,flag=0;
    printf("Enter the number of elements in the list: ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("\n");
    printf("Enter the elements of the list: ");
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);printf("\n");
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("Element %d is found at position %d\n",x,i+1);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Element %d is not found in the list\n",x);
    }


}