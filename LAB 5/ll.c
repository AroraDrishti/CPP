#include <stdio.h>

struct node
{
    int info;
    struct node *link;
};

struct node *start = NULL;

// Traversal
void traverse()
{
    struct node *temp;

    if (start == NULL)
        printf("\nList is empty\n");

    else
    {
        temp = start;
        while (temp != NULL)
        {
            printf("Data = %d\n",
                   temp->info);
            temp = temp->link;
        }
    }
}

// Insertion at front
void insertAtFront()
{
    int data;
    struct node *temp;
    temp = malloc(sizeof(struct node));
    printf("\nEnter number to be inserted : ");
    scanf("%d", &data);
    temp->info = data;
    temp->link = start;
    start = temp;
}

// Insertion at end
void insertAtEnd()
{
    int data;
    struct node *temp, *head;
    temp = malloc(sizeof(struct node));

    printf("\nEnter number to be inserted : ");
    scanf("%d", &data);
    temp->link = 0;
    temp->info = data;
    head = start;
    while (head->link != NULL)
    {
        head = head->link;
    }
    head->link = temp;
}

// Insertion at position
void insertAtPosition()
{
    struct node *temp, *newnode;
    int pos, data, i = 1;
    newnode = malloc(sizeof(struct node));

    printf("\nEnter position and data :");
    scanf("%d %d", &pos, &data);
    temp = start;
    newnode->info = data;
    newnode->link = 0;
    while (i < pos - 1)
    {
        temp = temp->link;
        i++;
    }
    newnode->link = temp->link;
    temp->link = newnode;
}

// Deletion from front
void deleteFirst()
{
    struct node *temp;
    if (start == NULL)
        printf("\nList is empty\n");
    else
    {
        temp = start;
        start = start->link;
        free(temp);
    }
}

// Deletion from end
void deleteEnd()
{
    struct node *temp, *prevnode;
    if (start == NULL)
        printf("\nList is Empty\n");
    else
    {
        temp = start;
        while (temp->link != 0)
        {
            prevnode = temp;
            temp = temp->link;
        }
        free(temp);
        prevnode->link = 0;
    }
}

// Deletion at position
void deletePosition()
{
    struct node *temp, *position;
    int i = 1, pos;

    if (start == NULL)
        printf("\nList is empty\n");
    else
    {
        printf("\nEnter index : ");
        scanf("%d", &pos);
        position = malloc(sizeof(struct node));
        temp = start;
        while (i < pos - 1)
        {
            temp = temp->link;
            i++;
        }
        position = temp->link;
        temp->link = position->link;
        free(position);
    }
}

// Find max elements
void maximum()
{
    int a[10];
    int i;
    struct node *temp;
    if (start == NULL)
        printf("\nList is empty\n");
    else
    {
        temp = start;
        int max = temp->info;
        while (temp != NULL)
        {
            if (max < temp->info)
                max = temp->info;
            temp = temp->link;
        }
        printf("\nMaximum number "
               "is : %d ",
               max);
    }
}

int main()
{
    int choice;
    while (1)
    {

        printf("\n\t1 Display SLL\n");
        printf("\t2 Insertion at front\n");
        printf("\t3Insertion at end\n");
        printf("\t4 Insertion at any position\n");
        printf("\t5 Deletion at front\n");
        printf("\t6 Deletion at end\n");
        printf("\t7 Deletion at position\n");
        printf("\t8 Find max elements\n");
        printf("\t9 To exit\n");
        printf("\nEnter Choice :\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            traverse();
            break;
        case 2:
            insertAtFront();
            break;
        case 3:
            insertAtEnd();
            break;
        case 4:
            insertAtPosition();
            break;
        case 5:
            deleteFirst();
            break;
        case 6:
            deleteEnd();
            break;
        case 7:
            deletePosition();
            break;
        case 8:
            maximum();
            break;
        case 9:
            exit(1);
            break;
        default:
            printf("Incorrect Choice\n");
        }
    }
    return 0;
}
