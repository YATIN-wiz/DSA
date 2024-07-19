#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
    int data;
    struct NODE *link;
} Node;

Node *push(Node *stack, int value)
{
    // Create at the beginning
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->link = stack;
    return newNode;
}

Node *pop(Node *stack, int *valptr)
{
    // Delete the first node, after copying it's link and data
    // data is the popped value and secondNode is the new first node
    Node *nextNode = stack->link;
    *valptr = stack->data;
    free(stack);
    return nextNode;
}

void display(Node *stack)
{
    Node *curr;
    for (curr = stack; curr != NULL; curr = curr->link)
    {
        printf("| %d |\n", curr->data);
        printf("--------\n");
    }
}

Node* clearStack(Node *stack, int length)
{
    //pop all the elements
    int value;
    for (int i = 0; i < length; i++)
                stack = pop(stack, &value);
    return NULL;
}

int getChoice()
{
    unsigned short choice;
    printf("\n------- STACK USING LINNKED LIST -------\n");
    printf("1. Create a stack\n");
    printf("2. Push\n");
    printf("3. Pop\n");
    printf("4. Display\n");
    printf("5. Clear stack\n");
    printf("6. Exit\n");
    printf("Enter your choice[1-6]:");
    scanf("%hd", &choice);
    return choice;
}
int main()
{
    Node *stack = NULL;
    int value;
    unsigned short size = 0, length = 0;

    while (1)
    {
        switch (getChoice())
        {
        case 1:
            if (size == 0)
            {
                stack = NULL;
                printf("Enter stack size:");
                scanf("%hd", &size);
            }
            else
                printf("Cannot create a new stack with one stack alive!\n");
            break;
        case 2:
            if (length < size)
            {
                printf("Enter a value to be pushed: ");
                scanf("%d", &value);
                stack = push(stack, value);
                length++;
            }
            else
                printf("Stack Overflow!");
            break;
        case 3:
            if (length > 0)
            {
                stack = pop(stack, &value);
                printf("Popped %d", value);
                length--;
            }
            else
                printf("Stack Underflow!");
            break;
        case 4:
            display(stack);
            break;
        case 5:
            stack = clearStack(stack, length);
            size = 0;
            length = 0;
            break;
        case 6:
            stack = clearStack(stack, length);
            return 0;
        default:
            printf("hey guru, invalid choice!");
            break;
        }
    }
}