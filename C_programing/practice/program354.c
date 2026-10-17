#include<stdio.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node obj1, obj2;

    obj1.data = 11;
    obj1.next = &Obj2;
}