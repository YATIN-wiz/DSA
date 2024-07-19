#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
    int data;
    struct NODE *link;
} Node;

Node *enqueue(Node *first, int newData)
{
    // Creating a node and making 'first' to point to this node
    // since first is changed, return it.
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = newData;
    newNode->link = first;
    return newNode;
}

void display(Node *stack)
{
    Node *curr;
    for (curr = stack; curr != NULL; curr = curr->link)
    {
        printf("| %d |->", curr->data);
    }
        printf("NULL\n");
}

int dequeue(Node *first)
{
    Node *curr;
    int data;
    for (curr = first; curr->link->link != NULL; curr = curr->link)
        ;
    data = curr->link->data;
    free(curr->link); // deallocating the memory allocated
    curr->link = NULL;
    return data;
}

Node *clearQueue(Node *queue, int length)
{
    // pop all the elements
    int value;
    for (int i = 0; i < length; i++)
        value = dequeue(queue);
    return NULL;
}
int getChoice()
{
    unsigned short choice;
    printf("\n------- QUEUE USING LINNKED LIST -------\n");
    printf("1. Create a queue\n");
    printf("2. Enqueue\n");
    printf("3. Dequeue\n");
    printf("4. Display\n");
    printf("5. Clear stack\n");
    printf("6. Exit\n");
    printf("Enter your choice[1-6]:");
    scanf("%hd", &choice);
    return choice;
}

int main()
{
    Node *queue = NULL;
    int value;
    unsigned short size = 0, length = 0;

    while (1)
    {
        switch (getChoice())
        {
        case 1:
            if (size == 0)
            {
                queue = NULL;
                printf("Enter queue size:");
                scanf("%hd", &size);
            }
            else
                printf("Cannot create a new stack with one stack alive!\n");
            break;
        case 2:
            if (length < size)
            {
                printf("Enter a value to be enqueued: ");
                scanf("%d", &value);
                queue = enqueue(queue, value);
                length++;
            }
            else
                printf("Queue Overflow!");
            break;
        case 3:
            if (length > 0)
            {
                value = dequeue(queue);
                printf("Dequeued %d", value);
                length--;
            }
            else
                printf("Queue Underflow!");
            break;
        case 4:
            display(queue);
            break;
        case 5:
            queue = clearQueue(queue, length);
            size = 0;
            length = 0;
            break;
        case 6:
            queue = clearQueue(queue, length);
            return 0;
        default:
            printf("hey guru, invalid choice!");
            break;
        }
    }
}