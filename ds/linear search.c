/*************************************************************
Name:Eric Paul Edakkattil                          S3 IT
Roll No:18                                        29/11/2021
                    LINEAR SEARCH
*************************************************************/
#include<conio.h>
#include<stdio.h>
int main()
{
	int A[50],n,k,i;
	printf("enter the size of the array: ");
	scanf("%d",&n);
	printf("enter the elements of the array: ");
	for(i=0; i<n; i++)
	{
	scanf("%d",&A[i]);
    }
	printf("enter the element to be searched for: ");
	scanf("%d",&k);
	for(i=0; i<n; i++)
	{
		if(A[i]==k)
	      {
		  printf("The element is found at %d",i+1);
		  break;
		  }
	}
	if(i==n)
	    {
		printf("Element not found");
	    }
	}
	


