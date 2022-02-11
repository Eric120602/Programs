/*************************************************************
Name:Eric Paul Edakkattil                          S3 IT
Roll No:18                                        29/11/2021
                    BUBBLE SORT
*************************************************************/

#include<stdio.h>
#include<conio.h>

main()
{
	int A[50],i,j,temp,n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(A[j]>A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	printf("The sorted array is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d \t",A[i]);
	}
}
/* OUTPUT
Enter the number of elements: 5
Enter the array elements:
6
4
2
1
3
12346         */
