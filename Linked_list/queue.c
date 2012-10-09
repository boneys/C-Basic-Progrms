/*Proram to implement queue
Input : Elements for the queue
Output : Queue
Date  :08-10-2012
 */

#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int data;
    struct queue  *link;
};

struct queue *front=NULL,*end=NULL,*temp;

void push()
{
    temp = (struct queue *) malloc(sizeof(struct queue));

    printf("\n In[ut the data for the queue in Integer format    :");
    scanf("%d",&temp->data);
    if(front == NULL)
        front=temp;

    temp->link=end;
    end=temp;

}

void pop()
{
    struct queue *prefront;
    if(front==end)
    {
        printf("\n Empty Stack");
        front=end=NULL;
    }
    else
    {
        temp = end;
        while(temp->link != NULL)
        {
            prefront=temp;  
            temp=temp->link;
        }
        front=prefront;
        front->link=NULL;

    }
}

void display()
{
    temp = end ;

    if(temp == NULL)
        printf("\nStack Empty\n");
    else
    {
        while(temp != NULL)
        {
            printf("-->%d",temp->data);
            temp=temp->link;
        }
    }

}

void main()
{
    int choice;
    while(1)
    {

        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n\nEnter Your option   :   ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:push();
                   break;
            case 2:pop();
                   break;
            case 3:display();
                   break;
            case 4:exit(0);
            default:
                   printf("\nInvalid entry please try again");       
        }
    }

}
