#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
    int data;
    struct NODE*next;
}Node;

Node* createnode(Node* first, int newdata)
{
    Node* newnode = (Node*) malloc(sizeof(Node));
    newnode->data = newdata;
    newnode->next = first;
    return newnode;
}
void display(Node* first)
{
    Node* temp;
        for(temp = first; temp->next != NULL;  temp = temp->next)
    {
        printf("%d \n", temp->data);

    }
}
int main()
{
   Node *list;

   Node nd;
   nd.data = 0;
   nd.next = NULL;
   list =& nd;

   list = createnode(list, 10);
   list = createnode(list, 11);
   list = createnode(list, 12);
   list = createnode(list, 13);
   list = createnode(list, 14);
   list = createnode(list, 15);
   display(list);
   return 0;

}
