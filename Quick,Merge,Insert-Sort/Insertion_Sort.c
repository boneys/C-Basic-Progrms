/*Program for implementing Insertion sort
  Input:Elements for sorting
  Output:Sorted array
  Date: 07-10-2012*/

#include<stdio.h>  

void insertion(int a[],int n)  //Function for insertion sort
{  
    int i,j,x,k;  

    for(i=1;i<=n-1;i++)  //Loop for comparison

    {  
        j=i;  
        x=a[i];  

        while(a[j-1]>x && j>0)  
        {  

            a[j]=a[j-1];  
            j=j-1;  

        }  

        a[j]=x;  

        printf("\n\n The array after pass no.%d: ",i);  

        for(k=0;k<=n-1;printf("  %d",a[k]),k++); //Loop for printing 

    }

}   

void main()  

{
    int limit,count;  

    printf("\nEnter an integer value for total no.s of elements to be sorted: ");  
    scanf("%d",&limit);  

    int a[limit];

    for(count=0;count<=limit-1;count++)
    {  
        printf("\n\nEnter an integer value for element no.%d: ",count+1);  
        scanf("%d",&a[count]);  
    }  


    insertion(a,limit);  //function for sorting

    printf("\n\nFinally sorted array is :\n\n ");  

    for(count=0;count<=limit-1;count++)  
        printf("  %d",a[count]);  

    printf("\n");
}
