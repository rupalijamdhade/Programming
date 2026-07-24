#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
int main()
{
    node obj;

    cout<<sizeof(obj)<<endl;
    return 0;
}