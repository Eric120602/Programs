/*************************************************************
Name:Eric Paul Edakkattil                          S3 IT
Roll No:18                                        13/12/2021
                    QUICK SORT
*************************************************************/
#include<stdio.h>
#include<conio.h>
void printArray(int A[], int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}

int partition(int A[],int low,int high)
{
    int pivot=A[low];
    int i=low+1;
    int j=high;
    int temp;

    do
    {
        while(A[i]<=pivot)
        {
            i++;
        }
        while(A[j]>pivot)
        {
            j--;
        }

        if(i<j)
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    } while(i<j);
    temp=A[low];
    A[low]=A[j];
    A[j]=temp;
    return j;
}

void quickSort(int A[],int low,int high)
{
    int partindex; 

    if (low<high)
    {
        partindex = partition(A, low, high); 
        quickSort(A, low, partindex-1);  
        quickSort(A, partindex + 1, high);
    }
}

int main()
{
   int i,n,A[100];
	printf("Enter the number of array elements:");
	scanf("%d",&n);
	printf("Enter the array elements");
		for(i=0;i<n;i++)
		{
			scanf("%d",&A[i]);
		}
    printArray(A,n);
    quickSort(A,0,n-1);
    printf("The sorted array is: ");
    printArray(A,n);
   
    return 0;
}

/*
OUTPUT:
Enter the number of array elements:4
Enter the array elements5
1
2
4
5 1 2 4
The sorted array is: 1 2 4 5
*/
