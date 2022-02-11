/*************************************************************
Name:Eric Paul Edakkattil                          S3 IT
Roll No:18                                        06/12/2021
                    INSERTION SORT
*************************************************************/
#include<conio.h>
#include<stdio.h>

main()
{
	int n,key,i,j,A[50];
	printf("enter the number of elements in the array:");
	scanf("%d",&n);
	printf("Enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	
	for(i=1;i<n;i++)
	{
		key=A[i];
		j=i-1;
		while(j>=0 && key<A[j])
		{
			A[j+1]=A[j];
			j=j-1;
		}
		A[j+1]=key;
	}
	printf("the sorted elements are \n");
	for(i=0;i<n;i++)
	{
		printf("%d \t",A[i]);
	}
}
/*
OUTPUT:
*/
	
		
