#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

int main()
{
    PNODE head = NULL;
    NODE obj1, obj2, obj3;

    head = &obj1;

    obj1.data = 11;
    obj1.next = &obj2;

    obj2.data = 21;
    obj2.next = &obj3;

    obj3.data = 51;
    obj3.next = NULL;

    cout<<head->data<<endl;
    cout<<head->next->data<<endl;
    cout<<head->next->next->data<<endl;
    
    return 0;
}