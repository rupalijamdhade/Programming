#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node obj1,obj2;

    obj1.data = 11;
    obj1.next = &obj2;

    obj2.data = 21;
    obj2.next = NULL;

    cout<<obj1.data<<endl;
    cout<<obj2.data<<endl;
    return 0;
}