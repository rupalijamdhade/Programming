#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
int main()
{
    node obj;

    cout << sizeof(obj)<<endl;//4(int)+4(padding)+8(pointer)
    return 0;
}