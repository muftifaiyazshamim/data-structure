#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node{
        int data;
        struct node *next;
    };
    struct node *head, *newnode, *temp;
    head = 0;
    int choice;
    while(choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to continue ? if not press 0, else 1 : ");
        scanf("%d", &choice);
    }
    printf("Do you want to insert at the begining?if not press 0 else 1 : ");
    int a;
    scanf("%d",&a);
    if(a==1){
        newnode =(struct node*)malloc(sizeof(struct node));
        printf("Enter the data you want to insert : ");
        scanf("%d",&newnode->data);
        newnode->next=head;
        head = newnode;
    }
    return 0; 
    }
