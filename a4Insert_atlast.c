// Insert a Node At Any position
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *newnode, *head = 0, *temp;
    int choice = 1;
    while (choice == 1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next = 0;
        printf("Enter a data");
        scanf("%d", &newnode->data);
        if (head == 0)
        {
            temp = head = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Want To Continue 1:Yes || 0:No ");
        scanf("%d", &choice);
    }
    temp = head;
    int count = 0, pos, value, i=1;
    printf("Linked List Before Adding Node :");
    while (temp != 0)
    {
        printf(" %d", temp->data);
        temp = temp->next;
        count++;
    }
    temp = head;
    printf("\n Enter a position where element want to insert:");
    scanf("%d", &pos);
    printf("Enter the value want to insert");
    scanf("%d", &value);
    if (pos > count || pos < 0)
    {
        printf(" Invalid Position ");
    }
    else
    {
        struct node *temp2, *atpos;
        atpos = (struct node *)malloc(sizeof(struct node));
        atpos->data = value;
        for (i = 1; i < pos; i++)
        {
            temp2 = temp;
            temp = temp->next;
        }
        atpos->next = temp;
        temp2->next = atpos;
        printf("Linked List After Adding Node :");
        temp = head;
        while (temp != 0)
        {
            printf(" %d", temp->data);
            temp = temp->next;
        }
    }
    return 0;
}