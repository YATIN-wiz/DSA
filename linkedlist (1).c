#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
    int data;
    struct NODE *next;
} Node;

Node *createNodeAtBeginning(Node *first, int newData)
{
    // Creating a node and making 'first' to point to this node
    // since first is changed, return it.
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = newData;
    newNode->next = first;
    return newNode;
}

void createNodeAtEnd(Node *first, int newData)
{
    Node *last;
    // creating a node, whose next points to NULL
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = newData;
    newNode->next = NULL;
    // finding the current last node
    for (last = first; last->next != NULL; last = last->next)
        ;
    // making the last node to point to the new node
    last->next = newNode;
}
void display(Node *first)
{
    Node *curr;
    for (curr = first; curr != NULL; curr = curr->next)
    {
        printf("%d --> ", curr->data);
    }
    printf(" NULL\n");
}

int linearSearch(Node *first, int key)
{
    Node *temp;
    int index = 0;
    for (temp = first; temp != NULL; temp = temp->next)
    {
        index++;
        if (temp->data == key)
            return index;
    }
    return -1;
}

void deleteNode(Node *first, int key)
{
    Node *curr;
    Node *prev = NULL;
    Node *toDelete;
    for (curr = first; curr != NULL; prev = curr, curr = curr->next)
    {
        if (curr->data == key)
        {
            // key found at temp
            // make changes to the previous node
            prev->next = curr->next;
            free(curr); // deallocating the memory allocated
            break;
        }
    }
}

void insertBefore(Node *first, int key, int data)
{
    Node *curr;
    Node *prev = NULL;
    for (curr = first; curr != NULL; prev = curr, curr = curr->next)
    {
        if (curr->data == key)
        {
            // creating a new node and assigning data to it
            Node *newNode = (Node *)malloc(sizeof(Node));
            newNode->data = data;
            // make the new node point to the current node
            newNode->next = curr;
            // now make the previous node point to the new node
            prev->next = newNode;
            break;
        }
    }
}

void insertAfter(Node *first, int key, int data)
{
    Node *curr;
    for (curr = first; curr != NULL; curr = curr->next)
    {
        if (curr->data == key)
        {
            // creating a new node and assigning data to it
            Node *newNode = (Node *)malloc(sizeof(Node));
            newNode->data = data;
            // make the new node point to the current node
            newNode->next = curr->next;
            // now make the previous node point to the new node
            curr->next = newNode;
            break;
        }
    }
}

void sort(Node *first)
{
    //Bubble sort, ascending order
    Node *i, *j;
    int temp;

    for (i = first; i != NULL; i = i->next)
    {
        for (j = i; j != NULL; j = j->next)
        {   
            if(i->data > j->data)
            {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

void merge(Node *first, Node *second)
{
    Node *last;
    for (last = first; last->next != NULL; last = last->next);
    last->next = second;
}

int main()
{
    Node *list = NULL;

    // creating nodes in the heap
    list = createNodeAtBeginning(list, 10);
    list = createNodeAtBeginning(list, 11);
    createNodeAtEnd(list, 12);
    createNodeAtEnd(list, 13);
    list = createNodeAtBeginning(list, 14);
    list = createNodeAtBeginning(list, 15);
    display(list);

    // searching  for a value
    int key = 13;
    int index = linearSearch(list, key);
    if (index != -1)
        printf("%d found at %d\n", key, index);
    else
        printf("%d not found!\n", key);

    // delete 12
    deleteNode(list, 12);
    display(list);
    deleteNode(list, 200);
    display(list);

    // Insersion
    printf("Inserting node ..\n");
    insertBefore(list, 14, 45);
    display(list);
    insertAfter(list, 11, 110);
    display(list);

    //sorting
    sort(list);
    display(list);

    //merging of two lists
    Node *list2 = NULL;
    list2 = createNodeAtBeginning(list2, 220);
    list2 = createNodeAtBeginning(list2, 222);
    display(list2);
    insertAfter(list2, 220, 240);
    display(list2);

    merge(list, list2);
    display(list);

    sort(list);
    display(list);

    return 0;
}