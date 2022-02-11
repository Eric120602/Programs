/*************************************************************
Name:Eric Paul Edakkattil                          S3 IT
Roll No:18                                        06/11/2021
                    SELECTION SORT
*************************************************************/
#include<stdio.h>
#include<conio.h>
main()
{
	int A[50],i,j,temp,n,min;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(A[min]>A[j])
			min=j;
		}
	if(min!=i)
	{
		temp=A[i];
		A[i]=A[min];
		A[min]=temp;
	}
}
	printf("The sorted array is \n");
	for(i=0;i<n;i++)
	{
		printf("%d \t",A[i]);
	}
}
/*
OUTPUT:
*/

