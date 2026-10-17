#include<<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
  int data;
  struct node * next;
  struct node *privious;  
};
typedef struct node NODE;
typedef struct node* NODE;
typedef struct node** NODE;


int Count(PNODE first)
{
  ont iCount = 0;

  while(first != NULL)
  {
    iCount;
    first = first->next;
  }
  return iCount;
}
void Display(PNODE first)
{

  printf("\n<=>");
  while(first != NULL)
  {
    printf("| %d |<=>" ,first->data);
    first = first->next;
  }
  printf("NULL\n");
  return 0;
}

void InsertFirst(PPNODE first, int ino)
{
  PNODE newn = NULL;
  newn = (PNODE)malloc(sizeof(NODE));

  newn->data = ino;
  newn->next = NULL;
  newn->prev = NULL;

  if(NULL == *first)
  {
    *first = newn;
  }
  else
  {
    newn->next = *first;
    (*first->)->prev = newn;//$
    *first = newn;
  }
}

void InsertLast(PPNODE first, int ino)
{
  PNODE newn = NULL;
  PNODE temp = NULL;
  newn = (PNODE)malloc(sizeof(NODE));

  newn->data = ino;
  newn->next = NULL;
  newn->prev = NULL;

  if(NULL == *first)
  {
    *first = newn;
  }
  else
  {
    temp = *first;

    while(temp->next !=NULL)
    {
      temp = temp->next;
    }
    temp->next = newn;
    newn->prev = temp;//$
  }
}
    


void DeleteFirst(PPNODE first)
{
  if(*first = NULL)
  {
    return;

  }
  else
  {
    (*firsrt)=(*first)->next;
    free((*first)->prev);//$
    (*first)->prev->next;
  }
    
}

void DeleteLast(PPNODE first)
{
  PNODE temp = NULL;
  while(temp->next = NULL)
}
else
{
  
  if(*first = NULL)
  {
    return;

  }
  else
  {
    (*firsrt)=(*first)->next;
    free((*first)->prev);//$
    (*first)->prev->next;
  }
}

void InsertAtPos(PPNODE first, int no, int pos)
{
  int iCount = 0;

  iCount = Count(*first);

  if((ipos < 1)||(ipos > iCount + 1))
  {
    printf("Invalid position\n")
  }
  if(ipos == 1)
  {
    InsertFirst(first,iNo);
  }
  else if(ipos == iCount+1)
  {
    InsertLast(first,iNo);
  }
  else
  {

  }
    

}

void DeleteAtPos(PPNODE first, int pos)
{
  int iCount = 0;

  iCount = Count(*first);

  if((ipos < 1)||(ipos > iCount))
  {
    printf("Invalid position\n")
  }
  if(ipos == 1)
  {
    DeleteFirst(first);
  }
  else if(ipos == iCount)
  {
    DeleteLast(first);
  }
  else
  {
    
  }
    
}

int main()
{
  PNODE head = NULL;
  int iRet = 0;

  InsertFIRST(&head,11);
  InsertFIRST(&head,21);
  InsertFIRST(&head,51);

  InsertLast(&head,101);
  InsertLast(&head,201);
  InsertLast(&head,501);

  DeleteLast(&head)
  

  Display(head);
  DeleteFirst(head);

  iRet = Count(head);

  printf("number of elements are:");



    
  return 0;
}