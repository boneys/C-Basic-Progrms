/*Program to implement Doubly Linked List
Input: Integer datas
Output :Linked list
Date  :08-10-2012
 */

#include<stdio.h>
#include<stdlib.h>

struct list //struct named list
{
    int data;
    struct list *right,*left; 
};

struct list *temp,*front=NULL,*end=NULL,*pre;
int flag = 0;

void insert_front();
void delete_front();
int noof();//Number of Nodes
void display();
void insert_back();
void delete_back(); 
void search();


void main()
{

    int choice,cnt;

    while(1)
    {

        printf("\n---------------------------------Operations On Doubly Linked List-----------------------------------\n");
        printf("\n\n1.Insert-Front\n2.Insert-Back\n3.Count\n4.Dispaly\n5.Delete-Front\n6.Delete-back\n7.Search\n8.Exit\nEnter your Choice   :  ");
        scanf("%d",&choice);

        switch(choice)//Menu selection
        {
            case 1 :insert_front();
                    break;
            case 2: insert_back();
                    break;
            case 3: cnt=noof();
                    printf("\n No of nodes   is %d ",cnt); 
                    break;
            case 4: display();
                    break;
            case 5: delete_front();
                    break;
            case 6: delete_back();
                    break;
            case 7: search();
                    break;
            case 8: exit(0);
            default:printf("Wrong Input.Please try again \n");
        }

    }

}
void insert_front()
{
    int temp_data;
    temp = (struct list *)malloc(sizeof(struct list));
    printf("\n Input the data in integer format  :  ");
    scanf("%d",&temp_data);
    temp->data = temp_data;

    if(front == NULL)
    {
        front = temp;
        end=temp;
        front->left = end;
        end->right=front;        
        front->right=NULL;
        end->left=NULL;
    }
    else
    {
        front->right=temp;
        temp->left = front;
        temp->right=NULL;
        front=temp;
    }

}

void insert_back()//Function for inserting at back
{
    int temp_data;
    temp = (struct list *)malloc(sizeof(struct list));
    printf("\n Input the data in integer format  :  ");
    scanf("%d",&temp_data);
    temp->data = temp_data;
    if(front==NULL)
    {
        end = temp;
        front=temp;
        end->right=front;
        front->left=end;
        front->right=end->left=NULL;
   }
    else
    {
        end->left = temp;
        temp->right=end;
        temp->left=NULL;
        end=temp;
    }
}

void delete_front()//Deletion at Front
{
    if(front==NULL&&end==NULL)
        printf("\nList Is empty\n");
    else
    {
        temp=front;
        if(front == end)
        {
            printf("\nItem Deleted from front is  : %d",front->data);
            front = end=NULL;

        }
        else
        {
            pre=temp->left;
            pre->right=NULL;
            printf("\nItem Deleted from front is  : %d",front->data);
            front=pre;
            free(temp);//Free Memeory Allocated

        }
    }

}

void delete_back()//Deletion at Back
{
    if(end==NULL&&front==NULL)
        printf("\nList Is empty\n");
    else
    {
        temp=end;
        if(front==end) 
        {

            printf("\n Item to de deleted from back is   :  %d",temp->data);
            front=end=NULL;
        }
        else
        {
            pre=end->right;
            pre->left==NULL;
            printf("\n Item deleted from back is  : %d",end->data);
            end=pre;
            free(temp);
        }

    }
}
void display()//Function for displaying
{
    int temp_data;
    if(front == NULL && end==NULL)
        printf("\nList Is Empty\n");
    else
    {
        temp=end;

        printf("\n Doubly Linked List is :\n");
        while(temp != NULL)
        {
            printf("--->%d",temp->data);
            temp=temp->right;
        }
    }
}

int noof()//Function for Counting Nodes

{
    int cnt=0;
    if(front == NULL&&end==NULL)
        return 0;
    else
    {
        temp = end;
        while(temp!=NULL)
        {
            cnt++;
            temp = temp->right;
        }
        return cnt;
    }
}

void search()//Search function
{
    int element,count=0;
    if ((front == NULL) && (end ==NULL))
        printf("\n The List is Empty \n ");
    else
    {
        printf("\n Input the data element for search    :  ");
        scanf("%d",&element);

        temp=end;
        while(temp != NULL)//Loop for iterating trough each
        {
            count++;
            if(temp->data == element)
            {
              printf("The element found at position %d  ",count);
            }
            temp=temp->right;

        }
        if(count == 0)
            printf("\nSorry! No Search Found \n");

    }
}
