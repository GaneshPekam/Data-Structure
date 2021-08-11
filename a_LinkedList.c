#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *link;
    };
    int choice=1;
    struct node *temp,*newnode,*head=0;
    while(choice==1)
    {
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter The Data");
    scanf("%d",&newnode->data);
    newnode->link=0;
    if(head==0)
    {
        head=temp=newnode;
    }
    else
    {
        temp->link=newnode;
        temp=newnode;
    }
    printf("Want To Continue 1:Yes and 0:No");
    scanf("%d",&choice);
    }
    temp=head; 
    printf("Linked List is :");  
    while(temp!=0)
    {
        printf(" %d",temp->data);
        temp=temp->link;
    }
    free(temp);
    free(head);
    free(newnode);
    return 0;
}