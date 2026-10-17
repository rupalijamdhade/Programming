#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node obj;
    obj.data = 11;
    obj.next = NULL;

    cout << obj.data << endl;
    return 0;
}