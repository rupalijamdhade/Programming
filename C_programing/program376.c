#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first)
{
    while(first)
    {
        printf("|%d|->\t",first->next);
        first = first->next;
    }
    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;
    while(first)
    {
        iCount++;
        first = first->next;
    }
    return;
}

void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data=iNo;
    newn->next = NULL;
//issue...
    if(*first = NULL)// ll empty
    {
        *first = newn;

    }
    else//ll contain atlest one node
    {
        newn->next = *first;
        *first = newn;
    }

    return 0;
}

void InsertLast(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data=iNo;
    newn->next = NULL;

    if(*first == NULL)// ll empty
    {
        *first = newn;

    }
    return 0;
}
void InsertAtPose(PPNODE first, int iNo, int iPos)
{
    return 0;
}
void DeleteFirst(PPNODE first)
{
    return 0;
}

void DeleteLast(PPNODE first)
{
    return 0;
}
void DeleteAtPos(PPNODE first)

{
    return 0;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;


    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);
    iRet = Count(head);

    printf("Number of nodes are:%\n",iRet);
    return 0;
}