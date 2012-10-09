/*Program to implement quick sort
Input : An array of elements
output : Sorted Array
Date :07-10-2012
 */

#include<stdio.h>

void main( )
{
	int count1, count2, limit, temp ;

	printf("Enter the number of elements to be sorted :");
	scanf("%d",&limit);

	int arr[limit];

	printf("\nEnter the integer elements :\n");

	for(count1=0 ; count1<limit ; scanf("%d",&arr[count1]), count1++); /* loop for reading user values */

	limit = limit-2;

	for ( count1 = 0 ; count1 <= limit ; count1++ )
	{
		for ( count2 = 0 ; count2 <= limit - count1 ; count2++ )
		{
			if ( arr[count2] > arr[count2 + 1] )
			{
				temp = arr[count2] ;
				arr[count2] = arr[count2 + 1] ;
				arr[count2 + 1] = temp ;
			}
		}
	}

	printf ( "\nArray after sorting:\n");

	limit++;

	for ( count1 = 0 ; count1 <= limit ; printf ( "%d ", arr[count1] ),count1++ );/*Loop for printing */		

	printf("\n");
}
