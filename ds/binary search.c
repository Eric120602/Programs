/*************************************************************
Name:Eric Paul Edakkattil                          S3 IT
Roll No:18                                        29/11/2021
                    BINARY SEARCH
*************************************************************/
#include<stdio.h>
#include<conio.h>
main()
{
	int i,low,high,mid,n,key,A[100];
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter the elements of the array: ");
	for(i=0; i<n; i++)
	{
	scanf("%d",&A[i]);
    }
    printf("Enter the element to be searched for: ");
    scanf("%d",&key);
    	low=0;
        high=n-1;
        mid=(low+high)/2;
      while(low<=high)
      {
        if(A[mid]==key)
    	{
			printf("\n %d is found at location %d",key, mid+1);
    		break;
    	}
    	else if(A[mid]<key)
			low=mid+1;
        else
		high=mid-1;
		mid=(low+high)/2;
	 }
	if(low>high)
		{
		printf("\n Element not found");
		getch();
		}
}
/*
OUTPUT:
Enter the size of the array:    
Enter the elements of the array:
6
4
2
5
1
Enter the elemeent to be searched for: 5
 5 is found at location 4
*/

