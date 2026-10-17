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
    struct node obj1, obj2 ,obj3;

    obj1.data = 11;
    obj1.next = &obj2;

    obj2.data = 21;
    obj2.next = &obj3;

    obj3.data = 51;
    obj3.next = NULL;

    cout<<&obj1<<endl;
    cout<<&obj2<<endl;
    cout<<&obj3<<endl;

    cout<<&obj1.next<<endl;
    cout<<&obj2.next<<endl;
    cout<<&obj3.next<<endl;

    cout<<obj1.data<<endl;
    cout<<obj1.next->data<<endl;
    cout<<obj1.next->next->data<<endl;

    return 0;
}





