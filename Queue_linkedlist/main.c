#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
    int data;
    struct NODE *link;
} Node;

Node *Enqueue(Node *queue, int value)
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->data = value;
    newnode->link = queue;
    return newnode;
}

Node *Dequeue(Node *queue)
{
   Node *curr;
   int ndata;
   for(curr = queue; curr->link->link = NULL; curr = curr->link)
        ;
    ndata = curr->link->data;
    free(curr->link);
    curr->link = NULL;

    return ndata;


}


void display(Node *queue)
{
    Node *curr;
    printf("\n");
    for(curr = queue; curr != NULL; curr = curr->link)
    {
        printf("|%d| ->", curr->data);

    }
    printf("NULL\n");

}

void peek(Node *queue)
{
    Node *curr;
    printf("\n");
    for(curr = queue; curr != NULL; curr = curr->link)
    {
        if(curr->link == NULL)
            printf("%d", curr->data);
        else
            continue;

    }
    printf("NULL\n");
}

int getchoice()
{
    int choice;
    printf("1. Enqueue \n");
    printf("2. Dequeue \n");
    printf("3. Display \n");
    printf("4. Peek \n");
    scanf("%d", &choice);
    return choice;

}


int main()
{
    Node *queue = NULL;
    int value;
    int size = 5,length = 0;
    while(1)
    {
        switch(getchoice())
        {
        case 1:
            if (length < size)
            {
                printf("Enter a value to be enqueued: ");
                scanf("%d", &value);
                queue = Enqueue(queue, value);
                length++;
            }
            else
                printf("Queue Overflow!");
            break;
            case 2:
            if (length > 0)
            {
                queue = Dequeue(queue);
                printf("Dequeued %d", value);
                length--;
            }
            else
                printf("Queue Underflow!");
            break;
            case 3:
            display(queue);
            break;


        }
    }
}
