#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
  int data;
  struct node *next;
  struct node *prev;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int Count(PNODE first)
{
  int iCount = 0;
  while(first != NULL)
  {
    iCount++;
    first = first->next;
  }
  return iCount;
}
void Display(PNODE first)
{
  printf("\nNULL<=>");
  while(first != NULL)
  {
    printf("| %d |<=>",first->data);
    first = first->next; 
  }
  printf("NULL\n");
}
void IsertFirst(PPNODE first, int iNo)
{
  PNODE newn = NULL;

  newn = (PNODE)malloc(sizeof(NODE));

  newn->data = iNo;
  newn->next = NULL;
  newn->prev = NULL;

  if(*first == NULL)
  {
    *first = newn;
  }
  else
  {
    newn->next = *first;
    (*first)->prev = newn//$

    *first = newn;
  }
}
void InsertLast(PPNODE first, int iNo)
{
  PNODE newn = NULL;

  newn = (PNODE)malloc(sizeof(NODE));

  newn->data = iNo;
  newn->next = NULL;
  newn->prev = NULL;

  if(first == NULL)
  {
    *first = newn;
  }
  else
  {
    temp = *first;
    while(temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = newn;
    newn->prev = temp;//$
  }
}
void InsertAtPos(PPNODE first, int iNo, int iPos)
{
  int  i= 0;
  int iCount = 0;
  PNODE temp = NULL;
  PNODE newn =  NULL;

  iCount = Count(*first);

  if((iPos < 1)||(iPos > iCount+1))
  {
    printf("Invalid position\n");
    return;
  }
  else

  
  
  {
    InsertFirst(first ,iNo);
  }
  }
}

void DeleteFirst(PPNODE first)
{}

void DeleteLast(PPNODE first)
{}

void DeleteAtPos(PPNODE first,int iPos)
{}

int main()
{
  PNODE head = NULL;

  return 0;
}
