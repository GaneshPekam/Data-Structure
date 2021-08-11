#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head=0,*temp,*newnode;
    int choice=1;
    while(choice==1)
    {
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->next=0;
    printf("Enter the data");
    scanf("%d",&newnode->data);
    if(head==0)
    {
        temp=head=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    printf("Want To Continue 1:yes");
    scanf("%d",&choice);
}
temp=head;
while(temp!=0)
{
    printf(" %d",temp->data);
    temp=temp->next;
}
temp=head;
struct node *begin,*temp2;
// printf("Enter the position want to insert data");
// scanf("%d",&pos);
begin = (struct node*)malloc(sizeof(struct node));
temp2=begin;
printf("\n Enter the data Which is inserting at beginning");
scanf("%d",&begin->data);
begin->next=temp;
head=temp=temp2;
printf("Linked List After inserting node is :");
while(temp!=0)
{
    printf(" %d",temp->data); 
    temp=temp->next;
}



return 0;
}