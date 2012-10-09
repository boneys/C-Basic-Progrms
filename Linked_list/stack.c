/*Program for implementing stack using linked list
Input  : Element for adding 
Output : A satck
Date   : 08-10-2012
 */

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *top=NULL,*temp;
int temp_data;

void push()//Pushing element to stack
{
    int temp_data; 
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter a node data of Integer type :  ");
    scanf("%d",&data);
    temp->data=temp_data;
    temp->link=top;
    top=temp;
}

void pop()//Deleting elements from stack
{
    if(top!=NULL)
    {
        printf("The poped element is %d",top->data);
        free(top);
        top=top->link;
    }
    else
    {
        printf("\nStack Underflow");    

    }
}
void display()//Displays Stack
{
    temp=top;
    if(temp==NULL)
    {
        printf("\nStack is empty\n");
    }

    while(temp!=NULL)
    {
        printf("-->%d",temp->data);
        temp=temp->link;
    }
}
void main()
{
    int choice;

    while(1)//infinite loop is used to insert/delete infinite number of nodes
    {

        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("\nEnter ur choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:push();
                   break;
            case 2:pop();
                   break;
            case 3:display();
                   break;
            case 4:
                   exit(0);
            default:
                   printf("\nWrong Choice Please try again\n ");    
        }

    }      
}
